package io.github.mwaibanda.authentication.di

import android.content.Context
import com.google.firebase.FirebaseApp
import io.github.mwaibanda.utils.AppContext

actual fun Authentication.initialize(factory: AppFactory) {
    factory.initializeApp()
}

actual class AppFactory() {
    actual fun initializeApp() {
        FirebaseApp.initializeApp(AppContext.get())
    }
}

fun Authentication.initialize() {
    initialize(AppFactory())
}
