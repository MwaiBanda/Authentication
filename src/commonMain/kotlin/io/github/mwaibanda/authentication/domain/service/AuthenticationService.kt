package io.github.mwaibanda.authentication.domain.service

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.utils.AuthResult

internal interface AuthenticationService {
    suspend fun signInWithEmail(email: String, password: String): AuthResult<UserResponse>
    suspend fun signUpWithEmail(email: String, password: String): AuthResult<UserResponse>
    suspend fun signInAsGuest(): AuthResult<UserResponse>
    suspend fun getCurrentUser(): AuthResult<UserResponse>
    suspend fun isUserSignedIn(): Boolean
    suspend fun deleteUser()
    suspend fun signOut()
}