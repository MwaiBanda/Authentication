package io.github.mwaibanda.authentication.service

import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult

class FakeAuthenticationService: AuthenticationService {
    private var currentUser: UserResponse = UserResponse(
        uid = "",
        email = "",
        isAnonymous = true
    )

    override suspend fun signInWithEmail(email: String, password: String): AuthResult<UserResponse> {
        currentUser = UserResponse(
            uid = "1001-01",
            email = email,
            isAnonymous = false
        )
        return AuthResult.Success(currentUser)
    }

    override suspend fun signUpWithEmail(email: String, password: String): AuthResult<UserResponse> {
        currentUser = UserResponse(
            uid = "1001-01",
            email = email,
            isAnonymous = false
        )
        return AuthResult.Success(currentUser)
    }

    override suspend fun signInAsGuest(): AuthResult<UserResponse> {
        currentUser = UserResponse(
            uid = "1001-01",
            email = "guest@authentication.com",
            isAnonymous = true
        )
        return AuthResult.Success(currentUser)
    }

    override suspend fun getCurrentUser(): AuthResult<UserResponse> {
        return AuthResult.Success(currentUser)
    }

    override suspend fun isUserSignedIn(): Boolean {
        return !(currentUser.isAnonymous || currentUser.email.orEmpty().isEmpty())
    }

    override suspend fun deleteUser() {
        currentUser = UserResponse(
            uid = "",
            email = "",
            isAnonymous = true
        )
    }

    override suspend fun signOut() {
        currentUser = UserResponse(
            uid = "",
            email = "",
            isAnonymous = true
        )
    }
}