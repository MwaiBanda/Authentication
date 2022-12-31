import org.gradle.api.publish.maven.MavenPublication
import org.gradle.api.tasks.bundling.Jar
import org.gradle.kotlin.dsl.`maven-publish`
import org.gradle.kotlin.dsl.signing
import java.util.*

plugins {
    `maven-publish`
    signing
}

// Stub secrets to let the project sync and build without the publication values set up
ext["signing.keyId"] = null
ext["signing.password"] = null
ext["signing.secretKeyRingFile"] = null
ext["ossrhUsername"] = null
ext["ossrhPassword"] = null

// Grabbing secrets from local.properties file or from environment variables, which could be used on CI
val secretPropsFile = project.rootProject.file("local.properties")
if (secretPropsFile.exists()) {
    secretPropsFile.reader().use {
        Properties().apply {
            load(it)
        }
    }.onEach { (name, value) ->
        ext[name.toString()] = value
    }
} else {
    ext["signing.keyId"] = System.getenv("SIGNING_KEY_ID")
    ext["signing.password"] = System.getenv("SIGNING_PASSWORD")
    ext["signing.secretKeyRingFile"] = System.getenv("SIGNING_SECRET_KEY_RING_FILE")
    ext["ossrhUsername"] = System.getenv("OSSRH_USERNAME")
    ext["ossrhPassword"] = System.getenv("OSSRH_PASSWORD")
}

val javadocJar by tasks.registering(Jar::class) {
    archiveClassifier.set("javadoc")
}


publishing {
    // Configure maven central repository
    repositories {
        maven {
            name = "GitHubPackages"
            credentials {
                name = "Authentication"
                username = getExtraString("GITHUB_USER")
                password = getExtraString("GITHUB_TOKEN")
            }
            setUrl("https://maven.pkg.github.com/MwaiBanda/Authentication")
        }
    }
    publications {
        val projectArtifactId = "authentication"

        publications.withType<MavenPublication>() {
            artifactId = when (name) {
                "kotlinMultiplatform" -> projectArtifactId
                else -> "$projectArtifactId-$name"
            }
            description = "Firebase Kotlin Multiplatform library (android + ios + js)"
            artifact(javadocJar.get())

            pom {
                url.set(getExtraString("SOURCE_URL"))

                licenses {
                    license {
                        name.set("Apache-2.0")
                        url.set("https://opensource.org/licenses/Apache-2.0")
                    }
                }
                developers {
                    developer {
                        id.set("Mwaib1")
                        name.set("Mwai Banda")
                        email.set("mwai.developer@gmail.com")
                    }
                }
                scm {
                    connection.set(getExtraString("SOURCE_URL"))
                    url.set(getExtraString("SOURCE_URL"))
                    developerConnection.set(getExtraString("SOURCE_URL"))
                }
            }
        }
    }
}

// Signing artifacts. Signing.* extra properties values will be used

signing {
    sign(publishing.publications)
}

fun getExtraString(name: String) = ext[name]?.toString()
