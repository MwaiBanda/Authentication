package io.github.mwaibanda.authentication.domain.controller
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.utils.AuthResult

interface AuthenticationController {
    fun signInWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun signUpWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun checkAuthAndSignAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit)
    fun isUserSignedIn(onCompletion: (Boolean) -> Unit)
    fun deleteUser()
    fun signOut()
}