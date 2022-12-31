package io.github.mwaibanda.authentication.service

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult

internal class AuthenticationService: AuthenticationService {
    override suspend fun signInWithEmail(email: String, password: String): AuthResult<UserResponse> {
        TODO("Not yet implemented")
    }

    override suspend fun signUpWithEmail(email: String, password: String): AuthResult<UserResponse> {
        TODO("Not yet implemented")
    }

    override suspend fun signInAsGuest(): AuthResult<UserResponse> {
        TODO("Not yet implemented")
    }

    override suspend fun getCurrentUser(): AuthResult<UserResponse> {
        TODO("Not yet implemented")
    }

    override suspend fun isUserSignedIn(): Boolean {
        TODO("Not yet implemented")
    }

    override suspend fun deleteUser() {
        TODO("Not yet implemented")
    }

    override suspend fun signOut() {
        TODO("Not yet implemented")
    }
}