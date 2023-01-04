# Authentication

![badge][badge-android]
![badge][badge-ios]
![badge][badge-js]

Multiplatform Firebase Auth Wrapper For Android, iOS & Js. This library can be used either as a KMM dependency or installed as a standalone library for Android via Maven, iOS with the `Swift package manager` and Js with `npm`

# Installation

Check the table below for the compatibilty across Kotlin versions

| Library    | Kotlin  |
| ---------- | ------- |
| 1.0.+      | 1.6.21  |

## Android & KMM

Add the repository on your Project-level gradle
```kotlin
allprojects {
    repositories {
        ...
        maven(url = "https://maven.pkg.github.com/MwaiBanda/Multiplatform-Auth")
    }
}
```

### KMM

On the module-level, add the library as a dependency

```kotlin
kotlin {
    ...
    sourceSets["commonMain"].dependencies {
        implementation("io.github.mwaibanda:authentication:1.0.0")
    }
}
```

### Standalone Android 

On the module-level, add the library as a dependency

```kotlin
kotlin {
    ...
    sourceSets["commonMain"].dependencies {
        implementation("io.github.mwaibanda:authentication-android:1.0.0")
    }
}
```

## iOS

### Swift Package Manager
File > Swift Packages > Add Package Dependency <br>
Add https://github.com/MwaiBanda/Authentication.git <br>
branch origin

## Maintainers

- Mwai Banda - [mwai.developer@gmail.com](mailto:mwai.developer@gmail.com)

## Contributing

Feel free to dive in! [Open an issue](https://github.com/MwaiBanda/Authentication/issues) or submit PRs.

## License

[MIT](LICENSE) © Mwai Banda


[badge-android]: http://img.shields.io/badge/-android-6EDB8D.svg?style=flat
[badge-jvm]: http://img.shields.io/badge/-jvm-DB413D.svg?style=flat
[badge-js]: http://img.shields.io/badge/-js-F8DB5D.svg?style=flat
[badge-js-ir]: https://img.shields.io/badge/support-[IR]-AAC4E0.svg?style=flat
[badge-nodejs]: https://img.shields.io/badge/-nodejs-68a063.svg?style=flat
[badge-linux]: http://img.shields.io/badge/-linux-2D3F6C.svg?style=flat 
[badge-windows]: http://img.shields.io/badge/-windows-4D76CD.svg?style=flat
[badge-wasm]: https://img.shields.io/badge/-wasm-624FE8.svg?style=flat
[badge-apple-silicon]: http://img.shields.io/badge/support-[AppleSilicon]-43BBFF.svg?style=flat
[badge-ios]: http://img.shields.io/badge/-ios-CDCDCD.svg?style=flat
[badge-mac]: http://img.shields.io/badge/-macos-111111.svg?style=flat
[badge-watchos]: http://img.shields.io/badge/-watchos-C0C0C0.svg?style=flat
[badge-tvos]: http://img.shields.io/badge/-tvos-808080.svg?style=flat
