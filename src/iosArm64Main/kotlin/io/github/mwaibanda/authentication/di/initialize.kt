package io.github.mwaibanda.authentication.di

import cocoapods.FirebaseCore.FIRApp

actual fun Authentication.initialize(factory: AppFactory) {
    factory.initializeApp()
}

actual class AppFactory {
    actual fun initializeApp() {
        FIRApp.configure()
    }
}

fun Authentication.initialize() {
    initialize(AppFactory())
}
