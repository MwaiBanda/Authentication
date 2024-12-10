package io.github.mwaibanda.authentication.controller

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.usecase.*
import io.github.mwaibanda.authentication.utils.AuthResult
import io.github.mwaibanda.authentication.utils.DefaultAuthResult
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.launch

internal class AuthenticationController(
    private val authenticationUseCases: AuthenticationUseCases,
) : AuthenticationController {

    private val scope = MainScope()

    override fun resetPassword(email: String, onCompletion: (DefaultAuthResult) -> Unit) {
        scope.launch {
            authenticationUseCases.resetPassword(email) {
                onCompletion(it)
            }
        }
    }

    override fun signInWithEmail(
        email: String,
        password: String,
        onCompletion: (AuthResult<UserResponse>) -> Unit
    ) {
        scope.launch {
            authenticationUseCases.signInWithEmail(email = email, password = password) {
                onCompletion(it)
            }
        }
    }

    override fun signUpWithEmail(
        email: String,
        password: String,
        onCompletion: (AuthResult<UserResponse>) -> Unit
    ) {
        scope.launch {
            authenticationUseCases.signUpWithEmail(email = email, password = password) {
                onCompletion(it)
            }
        }
    }

    override fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch {
            authenticationUseCases.signInAsGuest {
                onCompletion(it)
            }
        }
    }

    override fun isUserSignedIn(onCompletion: (Boolean) -> Unit)  {
        scope.launch {
            onCompletion(authenticationUseCases.isUserSignedIn())
        }
    }

    override fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch {
            authenticationUseCases.getCurrentUser {
                onCompletion(it)
            }
        }
    }

    override fun checkAuthAndSignAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        isUserSignedIn { isSignedIn ->
            if (isSignedIn.not()) {
                signInAsGuest {
                    onCompletion(it)
                }
            } else {
                getCurrentUser {
                    onCompletion(it)
                }
            }
        }
    }

    override fun deleteUser() {
        scope.launch {
            authenticationUseCases.deleteUser()
        }
    }

    override fun signOut(){
        scope.launch {
            authenticationUseCases.signOut()
        }
    }
}