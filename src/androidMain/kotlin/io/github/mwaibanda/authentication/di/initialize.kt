package io.github.mwaibanda.authentication.di

import android.content.Context
import com.google.firebase.FirebaseApp

actual fun Authentication.initialize(factory: AppFactory) {
    factory.initializeApp()
}

actual class AppFactory(private val context: Context) {
    actual fun initializeApp() {
        FirebaseApp.initializeApp(context)
    }
}

fun Authentication.initialize(context: Context) {
    initialize(AppFactory(context))
}
