# Authentication

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/joffrey-bion/krossbow/blob/main/LICENSE)
![badge][badge-android]
![badge][badge-ios]
![badge][badge-js]


Multiplatform Firebase Auth Wrapper For Android, iOS & Js. This library can be used either as a KMM dependency or installed as a standalone library for Android via Maven, iOS with the `Swift package manager` and Js with `npm`

# Usage
The library exposes a kotlin object called `Authentication` that provides instances of the `AuthentionController`, a class that makes thread safe asynchronous calls to the `AuthenticationService`. A class that makes calls to the Kotlin Firebase SDK [@gitlive/firebase-kotlin-sdk](https://github.com/GitLiveApp/firebase-kotlin-sdk)
## Kotlin
### Firebase Initilization
```kotlin
   import io.github.mwaibanda.authentication.di.Authentication 
   import io.github.mwaibanda.authentication.di.initialize
        
   override fun onCreate() {
        super.onCreate()
        Authentication.initializeApp(this) // <- Intialize FirebaseApp
    }
```

Use the Authetication object to access the shared AuthenticationController.
```kotlin
    val auth: AuthenticationController = Authentication.controller

    auth.signInWithEmail(email, password) { authResult ->
        when(authResult) {
            is AuthResult.Success -> {
                onSuccess(authResult.data)
            }
            is AuthResult.Failure -> {
                onFailure(authResult.message)
            }
        }
    }
```

## Swift
The standalone swift package comes bundled with Firebase Auth 
```swift

@main
struct iOSApp: App {
    init() {
        Authentication.initialize() // <-- Call `initialize` to init FirebaseApp
    }
    var body: some Scene {
        WindowGroup {
            ContentView()
...
```
Use the Authetication class to access the shared instance of the AuthenticationController.
```swift
    val controller = Authentication.shared.controller
    controller.signInWithEmail(email: email, password: password) { authResult in
        if let user = authResult.data {
            onSuccess(user)
        } else if let error = authResult.message {
            // Handle error
        }
    }
    
...
```

### AuthenticationController
Use the to access the shared instance of the AuthenticationController
```kotlin
interface AuthenticationController {
    fun signInWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun signUpWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun checkAuthAndSignAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun isUserSignedIn(onCompletion: (Boolean) -> Unit)
    fun deleteUser()
    fun signOut()
}
```
### UserResponse
Some calls to the AuthenticationController return this response Object
```kotlin
data class UserResponse(
    val uid: String,
    val email: String?,
    val isAnonymous: Boolean
)
```


# Installation

Check the table below for the compatibilty across Kotlin versions

| Library | Kotlin |
|---------|--------|
| 1.0.0   | 1.6.21 |
| 1.0.5+  | 1.8.21 |
## Android & KMM

Add the repository on your Project-level gradle
```kotlin
allprojects {
    repositories {
        ...
        maven {
          name = "GitHubPackages"
          url = uri("https://maven.pkg.github.com/MwaiBanda/Authentication")
          credentials {
              username = \* GITHUB ACCESS EMAIL *\
              password = \* GITHUB ACCESS TOKEN *\
          }
       }
...    
```

### KMM

On the module-level, add the library as a dependency

```kotlin
kotlin {
    ...
    sourceSets["commonMain"].dependencies {
        api("io.github.mwaibanda:authentication:1.0.0")
    }
}
```




## JS
### npm
npm i https://github.com/MwaiBanda/authentication   

## Maintainers

- Mwai Banda - [mwai.developer@gmail.com](mailto:mwai.developer@gmail.com)

## Contributing

Feel free to dive in! [Open an issue](https://github.com/MwaiBanda/Authentication/issues) or submit PRs.

## License

[MIT license](LICENSE) © Mwai Banda


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
