package io.github.mwaibanda.authentication.domain.service

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.utils.AuthResult
import io.github.mwaibanda.authentication.utils.DefaultAuthResult

interface AuthenticationService {
    suspend fun resetPassword(email: String): DefaultAuthResult
    suspend fun signInWithEmail(email: String, password: String): AuthResult<UserResponse>
    suspend fun signUpWithEmail(email: String, password: String): AuthResult<UserResponse>
    suspend fun signInAsGuest(): AuthResult<UserResponse>
    suspend fun getCurrentUser(): AuthResult<UserResponse>
    suspend fun isUserSignedIn(): AuthResult<Boolean>
    suspend fun deleteUser(): DefaultAuthResult
    suspend fun signOut(): DefaultAuthResult
}