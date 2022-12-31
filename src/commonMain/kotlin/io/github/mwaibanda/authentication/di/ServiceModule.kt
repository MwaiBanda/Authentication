package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.service.AuthenticationService as AuthenticationServiceImpl
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val authServiceModule =  DI.Module("Auth/Service") {
    bind<AuthenticationService>() with singleton { AuthenticationServiceImpl(firebaseAuth = instance()) }

}