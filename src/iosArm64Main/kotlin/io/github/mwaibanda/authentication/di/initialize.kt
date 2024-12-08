package io.github.mwaibanda.authentication.di

import cocoapods.FirebaseCore.FIRApp
import kotlinx.cinterop.ExperimentalForeignApi

actual fun Authentication.initialize(factory: AppFactory) {
    factory.initializeApp()
}

actual class AppFactory {
    @OptIn(ExperimentalForeignApi::class)
    actual fun initializeApp() {
        FIRApp.configure()
    }
}

fun Authentication.initialize() {
    initialize(AppFactory())
}
