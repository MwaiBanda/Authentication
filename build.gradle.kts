plugins {
    id("com.android.library") version "7.2.2"
    kotlin("multiplatform") version "1.8.21"
    kotlin("native.cocoapods")  version "1.8.21"
    kotlin("plugin.serialization") version "1.8.21"
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    id("plugin.publication")
}



multiplatformSwiftPackage {
    packageName("Authentication")
    outputDirectory(File(rootDir, "/swift/AuthenticationSwift"))
    distributionMode { local() }
    swiftToolsVersion("5.3")
    targetPlatforms {
        iOS { v("13") }
    }
}

group = "io.github.mwaibanda"
version = "1.0.5"

repositories {
    google()
    mavenCentral()
}

android {
    namespace = "io.github.mwaibanda.authentication.android"
    compileSdk = 31
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
}


kotlin {
    android {
        publishAllLibraryVariants()
    }

    ios()
    iosSimulatorArm64()

    js(IR) {
        useCommonJs()
        browser {
            testTask {
                useKarma {
                    useChromeHeadless()
                }
            }
        }
        nodejs()
        binaries.library()
    }
    cocoapods {
        name = "Authentication"
        summary = "iOS Firebase Auth Wrapper"
        authors = "Mwai Banda"
        homepage = "https://github.com/MwaiBanda/Authentication"
        license = "mit"
        ios.deploymentTarget = "13.5"
        extraSpecAttributes["libraries"] = "'c++'"
        framework {
            baseName = "Authentication"
            isStatic = true
        }
        pod("FirebaseCore") {
            version = "10.10.0"
        }
    }

    sourceSets {
        val coroutines = "1.6.0"
        val firebase = "1.6.2"
        val commonMain by getting {
            dependencies {
                api("org.kodein.di:kodein-di:7.20.1")
                api("dev.gitlive:firebase-auth:1.6.2")
                implementation ("org.jetbrains.kotlinx:kotlinx-serialization-json:1.3.2")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.4")
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation(kotlin("test-junit"))
            }
        }
        val commonTest by getting {
            dependencies {
                api("org.kodein.di:kodein-di:7.20.1")
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation(kotlin("test-junit"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.6.4")
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("dev.gitlive:firebase-auth:1.6.2")
            }
        }
        val androidInstrumentedTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
            }
        }
        val jsMain by getting
        val jsTest by getting {
            dependencies {
                implementation(kotlin("test-js"))
            }
        }

        val iosX64Main by getting
        val iosArm64Main by getting
        val iosSimulatorArm64Main by getting

        val iosX64Test by getting
        val iosArm64Test by getting
        val iosSimulatorArm64Test by getting

    }
}

tasks {

    val updateVersion by registering(Exec::class) {
        commandLine("npm", "--allow-same-version", "--prefix", projectDir, "version", "${project.property("version")}")
    }

    val updateDependencyVersion by registering(Copy::class) {
        mustRunAfter("updateVersion")
        val from = file("package.json")
        from.writeText(
            from.readText()
                .replace("version\": \"([^\"]+)".toRegex(), "version\": \"${project.property("version")}")
                .replace("authentication-common\": \"([^\"]+)".toRegex(), "authentication-common\": \"${project.property("version")}")
                .replace("authentication\": \"([^\"]+)".toRegex(), "authentication\": \"${project.property("version")}")
        )
    }

    val copyReadMe by registering(Copy::class) {
        from(rootProject.file("README.md"))
        into(file("$buildDir/node_module"))
    }

    val copyPackageJson by registering(Copy::class) {
        from(file("package.json"))
        into(file("$buildDir/node_module"))
    }

    val unzipJar by registering(Copy::class) {
        val zipFile = File("$buildDir/libs", "${project.name}-js-${project.version}-sources.jar")
        from(this.project.zipTree(zipFile))
        into("$buildDir/classes/kotlin/js/main/")
    }

    val copyJS by registering {
        mustRunAfter("unzipJar", "copyPackageJson")
        doLast {
            val from = File("$buildDir/classes/kotlin/js/main/${project.name}.js")
            val into = File("$buildDir/node_module/${project.name}.js")
            into.createNewFile()
            into.writeText(
                from.readText()
                    .replace("require('firebase-kotlin-sdk-", "require('@gitlive/")
//                        .replace("require('kotlinx-serialization-kotlinx-serialization-runtime')", "require('@gitlive/kotlinx-serialization-runtime')")
            )
        }
    }

    val copySourceMap by registering(Copy::class) {
        from(file("$buildDir/classes/kotlin/js/main/${project.name}.js.map"))
        into(file("$buildDir/node_module"))
    }

    val prepareForNpmPublish by registering {
        dependsOn(
            unzipJar,
            copyPackageJson,
            copySourceMap,
            copyReadMe,
            copyJS
        )
    }

    val publishToNpm by creating(Exec::class) {
        workingDir("$buildDir/node_module")
        isIgnoreExitValue = true
        commandLine("npm", "publish")
    }

}