package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.controller.AuthenticationController as AuthenticationControllerImpl
import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import kotlinx.coroutines.Dispatchers
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.singleton

val testAuthControllerModule =  DI.Module("Test/Controller") {
    bind<AuthenticationController>() with singleton { AuthenticationControllerImpl(di, Dispatchers.Unconfined) }
}