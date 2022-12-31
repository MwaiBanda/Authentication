package io.github.mwaibanda.authentication.domain.usecase

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult

class IsUserSignedInUseCase (
    private val authenticationService: AuthenticationService
) {
    suspend operator fun invoke(): Boolean {
        return authenticationService.isUserSignedIn()
    }
}