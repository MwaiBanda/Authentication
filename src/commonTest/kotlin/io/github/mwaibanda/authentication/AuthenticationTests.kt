package io.github.mwaibanda.authentication

import io.github.mwaibanda.authentication.di.*
import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.utils.AuthResult
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.test.*
import org.kodein.di.DI
import org.kodein.di.DIAware
import org.kodein.di.instance
import kotlin.test.*

@OptIn(ExperimentalCoroutinesApi::class)
internal class AuthenticationTests : DIAware {
    override val di: DI by DI.lazy {
        import(testAuthServiceModule)
        import(testUseCaseModule)
        import(testAuthControllerModule)
    }

    @Test
    fun testSignInWithEmail() = runTest {
        val controller: AuthenticationController by instance()
        var res: UserResponse? = null
        controller.signInWithEmail("dev@authenticaion.com", "") {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("dev@authenticaion.com", res!!.email)
    }

    @Test
    fun testSignUpWithEmail() = runTest {
        val controller: AuthenticationController by instance()
        var res: UserResponse? = null
        controller.signUpWithEmail("dev@authenticaion.com", "") {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("dev@authenticaion.com", res!!.email)
    }
    @Test
    fun testSignUpAsGuest() = runTest {
        val controller: AuthenticationController by instance()
        var res: UserResponse? = null
        controller.signInAsGuest {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("guest@authentication.com", res!!.email)
    }

    @Test
    fun isUserSignedIn() {
        val controller: AuthenticationController by instance()
        var isSignedIn = true
        controller.isUserSignedIn { isSignedIn = it }
        assertFalse(isSignedIn)
        controller.signUpWithEmail("dev@authenticaion.com", "") {}
        controller.isUserSignedIn { isSignedIn = it }
        assertTrue(isSignedIn)
    }

    @Test
    fun testSignOut() = runTest {
        val controller: AuthenticationController by instance()
        var res: UserResponse? = null
        controller.signInWithEmail("dev@authenticaion.com", "") {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("dev@authenticaion.com", res!!.email)
        controller.signOut()
        controller.getCurrentUser {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("", res!!.email)
    }

    @Test
    fun testDeleteCurrentUser() = runTest {
        val controller: AuthenticationController by instance()
        var res: UserResponse? = null
        controller.signInWithEmail("dev@authenticaion.com", "") {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("dev@authenticaion.com", res!!.email)
        controller.deleteUser()
        controller.getCurrentUser {
            when (it) {
                is AuthResult.Failure -> {}
                is AuthResult.Success -> {
                    res = it.data
                }
            }
        }
        assertNotNull(res)
        assertEquals("", res!!.email)
    }
}