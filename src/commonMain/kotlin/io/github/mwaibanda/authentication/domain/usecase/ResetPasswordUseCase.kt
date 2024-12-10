package io.github.mwaibanda.authentication.domain.usecase

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult
import io.github.mwaibanda.authentication.utils.DefaultAuthResult

class ResetPasswordUseCase(
    private val authenticationService: AuthenticationService
) {
    suspend operator fun invoke(
        email: String,
        onCompletion: (DefaultAuthResult) -> Unit
    ){
        onCompletion(authenticationService.resetPassword(email))
    }
}