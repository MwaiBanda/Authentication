package io.github.mwaibanda.authentication.controller

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.usecase.*
import io.github.mwaibanda.authentication.utils.AuthResult
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.launch
import org.kodein.di.DI
import org.kodein.di.DIAware
import org.kodein.di.instance

internal class AuthenticationController(
    private val signInWithEmailUseCase: SignInWithEmailUseCase,
    private val signUpWithEmailUseCase: SignUpWithEmailUseCase,
    private val signInAsGuestUseCase: SignInAsGuestUseCase,
    private val isUserSignedInUseCase: IsUserSignedInUseCase,
    private val getCurrentUserUseCase: GetCurrentUserUseCase,
    private val deleteUserUseCase: DeleteUserUseCase,
    private val signOutUseCase: SignOutUseCase,
    private val dispatcher: CoroutineDispatcher = Dispatchers.Main
) : AuthenticationController {

    private val scope = MainScope()

    override fun signInWithEmail(
        email: String,
        password: String,
        onCompletion: (AuthResult<UserResponse>) -> Unit
    ) {
        scope.launch(dispatcher) {
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
        scope.launch(dispatcher) {
            signUpWithEmailUseCase(email = email, password = password) {
                onCompletion(it)
            }
        }
    }

    override fun signInAsGuest(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch(dispatcher) {
            signInAsGuestUseCase {
                onCompletion(it)
            }
        }
    }

    override fun isUserSignedIn(onCompletion: (Boolean) -> Unit)  {
        scope.launch(dispatcher) {
            onCompletion(isUserSignedInUseCase())
        }
    }

    override fun getCurrentUser(onCompletion: (AuthResult<UserResponse>) -> Unit) {
        scope.launch(dispatcher) {
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
        scope.launch(dispatcher) {
            deleteUserUseCase()
        }
    }

    override fun signOut(){
        scope.launch(dispatcher) {
            signOutUseCase()
        }
    }
}