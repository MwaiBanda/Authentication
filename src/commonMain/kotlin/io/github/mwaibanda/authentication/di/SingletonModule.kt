package io.github.mwaibanda.authentication.di

import dev.gitlive.firebase.Firebase
import dev.gitlive.firebase.auth.FirebaseAuth
import dev.gitlive.firebase.auth.auth
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.singleton

val authSingletonModule = DI.Module("Auth/Singleton") {
    bind<FirebaseAuth>() with singleton { Firebase.auth }
}