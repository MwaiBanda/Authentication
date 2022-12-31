package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.controller.AuthenticationController as AuthenticationControllerImpl
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.singleton

val authControllerModule =  DI.Module("Auth/Controller") {
    bind<AuthenticationController>() with singleton { AuthenticationControllerImpl(di) }
}