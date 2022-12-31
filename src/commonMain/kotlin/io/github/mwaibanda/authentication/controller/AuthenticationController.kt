package io.github.mwaibanda.authentication.controller

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.usecase.*
import io.github.mwaibanda.authentication.utils.AuthResult
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.launch
import org.kodein.di.DI
import org.kodein.di.DIAware
import org.kodein.di.instance

internal class AuthenticationController(override val di: DI) : AuthenticationController, DIAware {
    private val signInWithEmailUseCase: SignInWithEmailUseCase by instance()
    private val signUpWithEmailUseCase: SignUpWithEmailUseCase by instance()
    private val signInAsGuestUseCase: SignInAsGuestUseCase by instance()
    private val isUserSignedInUseCase: IsUserSignedInUseCase by instance()
    private val getCurrentUserUseCase: GetCurrentUserUseCase by instance()
    private val deleteUserUseCase: DeleteUserUseCase by instance()
    private val signOutUseCase: SignOutUseCase by instance()
    private val scope = MainScope()

    override fun signInWithEmail(
        email: String,
        password: String,
        onCompletion: (AuthResult<UserResponse>) -> Unit
    ) {
        scope.launch {
            signInWithEmailUseCase(email = email, password = password) {
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
            signUpWithEmailUseCase(email = email, password = password) {
                onCompletion(it)
            }
        }
    }

    override fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch {
            signInAsGuestUseCase {
                onCompletion(it)
            }
        }
    }

    override fun isUserSignedIn(onCompletion: (Boolean) -> Unit)  {
        scope.launch {
            onCompletion(isUserSignedInUseCase())
        }
    }

    override fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch {
            getCurrentUserUseCase {
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
            deleteUserUseCase()
        }
    }

    override fun signOut(){
        scope.launch {
            signOutUseCase()
        }
    }
}