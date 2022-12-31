package io.github.mwaibanda.authentication.controller

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.utils.AuthResult

class AuthenticationController:
    AuthenticationController {
    override fun signInWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun signUpWithEmail(email: String, password: String, onCompletion: (AuthResult<UserResponse>) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun checkAuthAndSignAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun isUserSignedIn(onCompletion: (Boolean) -> Unit) {
        TODO("Not yet implemented")
    }

    override fun deleteUser() {
        TODO("Not yet implemented")
    }

    override fun signOut() {
        TODO("Not yet implemented")
    }
}