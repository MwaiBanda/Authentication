import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    id("com.android.library") version "8.5.2"
    alias(libs.plugins.kotlinMultiplatform)
    kotlin("native.cocoapods")  version libs.versions.kotlin
    kotlin("plugin.serialization") version libs.versions.kotlin
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    id("plugin.publication")
}



multiplatformSwiftPackage {
    packageName("Authentication")
    outputDirectory(File(rootDir, "/artifacts"))
    distributionMode { remote("https://github.com/MwaiBanda/AuthenticationSwift") }
    swiftToolsVersion("5.3")
    targetPlatforms {
        iOS { v("13") }
    }
}

group = "io.github.mwaibanda"
version = "1.0.8"

repositories {
    google()
    mavenCentral()
}

android {
    namespace = "io.github.mwaibanda.authentication.android"
    compileSdk = 34
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }

    dependencies {
        implementation(libs.androidx.startup.runtime)
    }
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
}


kotlin {
    applyDefaultHierarchyTemplate()
    androidTarget {
        compilations {
            compilerOptions {
                jvmTarget.set(JvmTarget.JVM_17)
            }
        }
        publishAllLibraryVariants()
    }

    iosArm64()
    iosX64()
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
            version = "11.6.0"
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                api(libs.kodein.di)
                api(libs.firebase.auth)
                implementation (libs.kotlinx.serialization.json)
                implementation(libs.kotlinx.coroutines.core)
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val commonTest by getting {
            dependencies {
                api(libs.kodein.di)
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation(libs.kotlinx.coroutines.core)
                implementation(libs.kotlinx.coroutines.test)
            }
        }
        val androidMain by getting {
            dependencies {
                implementation(libs.firebase.auth)
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
        into(layout.buildDirectory.dir("/node_module").get().asFile)
    }

    val copyPackageJson by registering(Copy::class) {
        from(file("package.json"))
        into(layout.buildDirectory.dir("/node_module").get().asFile)
    }

    val unzipJar by registering(Copy::class) {
        val zipFile = layout.buildDirectory.dir("/libs/${project.name}-js-${project.version}-sources.jar").get().asFile
        from(this.project.zipTree(zipFile))
        into(layout.buildDirectory.dir("/classes/kotlin/js/main/").get())
    }

    val copyJS by registering {
        mustRunAfter("unzipJar", "copyPackageJson")
        doLast {
            val from = layout.buildDirectory.dir("classes/kotlin/js/main/${project.name}.js").get().asFile
            val into = layout.buildDirectory.dir("node_module/${project.name}.js").get().asFile
            into.createNewFile()
            into.writeText(
                from.readText()
                    .replace("require('firebase-kotlin-sdk-", "require('@gitlive/")
//                        .replace("require('kotlinx-serialization-kotlinx-serialization-runtime')", "require('@gitlive/kotlinx-serialization-runtime')")
            )
        }
    }

    val copySourceMap by registering(Copy::class) {
        from(layout.buildDirectory.dir("/classes/kotlin/js/main/${project.name}.js.map").get().asFile)
        into(layout.buildDirectory.dir("/node_module").get().asFile)
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
        workingDir(layout.buildDirectory.dir("/node_module").get())
        isIgnoreExitValue = true
        commandLine("npm", "publish")
    }

}