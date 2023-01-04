plugins {
    id("com.android.library") version "7.2.0"
    kotlin("multiplatform") version "1.6.21"
    kotlin("native.cocoapods")  version "1.6.21"
    kotlin("plugin.serialization") version "1.6.21"
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    id("plugin.publication")
}



multiplatformSwiftPackage {
    packageName("Authentication")
    outputDirectory(File(projectDir, "package"))
    swiftToolsVersion("5.3")
    targetPlatforms {
        iOS { v("13") }
    }
}

group = "io.github.mwaibanda"
version = "1.0.0"

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

    js {
        useCommonJs()
        browser {
            testTask {
                useKarma {
                    useChromeHeadless()
                    webpackConfig.cssSupport.enabled = true
                }
            }
        }
        nodejs()
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
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                api("org.kodein.di:kodein-di:7.10.0")
                implementation("dev.gitlive:firebase-auth:1.6.2")
                implementation ("org.jetbrains.kotlinx:kotlinx-serialization-json:1.3.2")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting
        val androidTest by getting {
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
        val iosMain by getting
        val iosTest by getting
        val iosSimulatorArm64Main by getting
        val iosSimulatorArm64Test by getting

    }
}