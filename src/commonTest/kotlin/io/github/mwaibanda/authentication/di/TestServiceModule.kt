package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.service.FakeAuthenticationService
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.singleton

val testAuthServiceModule =  DI.Module("Test/Service") {
    bind<AuthenticationService>() with singleton { FakeAuthenticationService() }
}