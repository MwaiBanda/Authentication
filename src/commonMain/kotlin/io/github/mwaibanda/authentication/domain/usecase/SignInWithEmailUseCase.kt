package io.github.mwaibanda.authentication.domain.usecase

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult

class SignInWithEmailUseCase(
    private val authenticationService: AuthenticationService
) {
    suspend operator fun invoke(
        email: String,
        password: String,
        onCompletion: (AuthResult<UserResponse>) -> Unit
    ){
        onCompletion(authenticationService.signInWithEmail(email, password))
    }
}