package io.github.mwaibanda.authentication.domain.usecase

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult

class SignInAsGuestUseCase (
    private val authenticationService: AuthenticationService
) {
    suspend operator fun invoke(onCompletion: (AuthResult<UserResponse>) -> Unit){
        onCompletion(authenticationService.signInAsGuest())
    }
}