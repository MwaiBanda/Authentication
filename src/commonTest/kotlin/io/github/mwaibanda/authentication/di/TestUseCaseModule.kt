package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.domain.usecase.*
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val testUseCaseModule = DI.Module("Test/UseCase") {
    bind<SignInWithEmailUseCase>() with singleton { SignInWithEmailUseCase(authenticationService = instance()) }
    bind<SignUpWithEmailUseCase>() with singleton { SignUpWithEmailUseCase(authenticationService = instance()) }
    bind<SignInAsGuestUseCase>() with singleton { SignInAsGuestUseCase(authenticationService = instance()) }
    bind<IsUserSignedInUseCase>() with singleton { IsUserSignedInUseCase(authenticationService = instance()) }
    bind<GetCurrentUserUseCase>() with singleton { GetCurrentUserUseCase(authenticationService = instance()) }
    bind<DeleteUserUseCase>() with singleton { DeleteUserUseCase(authenticationService = instance()) }
    bind<SignOutUseCase>() with singleton { SignOutUseCase(authenticationService = instance()) }
}