package io.github.mwaibanda.authentication.domain.usecase

import io.github.mwaibanda.authentication.domain.service.AuthenticationService

class SignOutUseCase(
    private val authenticationService: AuthenticationService
) {
    suspend operator fun invoke() {
        authenticationService.signOut()
    }
}