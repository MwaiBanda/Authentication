plugins {
    id("com.android.library") version "7.2.0"
    kotlin("multiplatform") version "1.6.20"
    kotlin("native.cocoapods")  version "1.6.20"
    kotlin("plugin.serialization") version "1.6.20"
    id("co.touchlab.faktory.kmmbridge") version "0.3.4"
    id("plugin.publication")
}


kmmbridge {
    githubReleaseArtifacts()
    githubReleaseVersions()
    spm()
//    cocoapods("git@github.com:MwaiBanda/Authentication/blob/development/authentication.podspec")
    versionPrefix.set("1.0.0")
}

group = "io.github.mwaibanda"
version = "1.0.0-beta03"

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
//        extraSpecAttributes["libraries"] = "'c++', 'sqlite3'"
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
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.4")
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