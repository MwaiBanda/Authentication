package io.github.mwaibanda.authentication.service

import dev.gitlive.firebase.auth.ActionCodeSettings
import dev.gitlive.firebase.auth.EmailAuthProvider
import dev.gitlive.firebase.auth.FirebaseAuth
import io.github.mwaibanda.authentication.domain.model.UserResponse
import io.github.mwaibanda.authentication.domain.service.AuthenticationService
import io.github.mwaibanda.authentication.utils.AuthResult
import io.github.mwaibanda.authentication.utils.DefaultAuthResult

internal class AuthenticationService(
    private val firebaseAuth: FirebaseAuth
): AuthenticationService {
    override suspend fun resetPassword(email: String): DefaultAuthResult {
        return try {
            firebaseAuth.sendPasswordResetEmail(email)
            DefaultAuthResult.Success()
        } catch (e: Exception) {
            DefaultAuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun signInWithEmail(email: String, password: String): AuthResult<UserResponse> {
        if ((firebaseAuth.currentUser != null) && (firebaseAuth.currentUser?.isAnonymous == true))
            deleteUser()
        return try {
            val res =
                firebaseAuth.signInWithEmailAndPassword(email = email, password = password).user
            AuthResult.Success(
                UserResponse(
                    uid = res?.uid ?: "",
                    email = res?.email,
                    isAnonymous = res?.isAnonymous ?: false
                )
            )
        } catch (e: Exception) {
            AuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun signUpWithEmail(email: String, password: String): AuthResult<UserResponse> {
        val credential = EmailAuthProvider.credential(email = email, password = password)
        if (firebaseAuth.currentUser == null)
            firebaseAuth.signInAnonymously()
        return try {

            val res = firebaseAuth.currentUser?.linkWithCredential(credential)?.user
            AuthResult.Success(
                UserResponse(
                    uid = res?.uid ?: "",
                    email = res?.email,
                    isAnonymous = res?.isAnonymous ?: false
                )
            )
        } catch (e: Exception) {
            AuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun signInAsGuest(): AuthResult<UserResponse> {
        return try {
            val res = firebaseAuth.signInAnonymously().user
            AuthResult.Success(
                UserResponse(
                    uid = res?.uid ?: "",
                    email = res?.email,
                    isAnonymous = res?.isAnonymous ?: false
                )
            )
        } catch (e: Exception) {
            AuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun isUserSignedIn(): AuthResult<Boolean> {
        return try {
            AuthResult.Success(firebaseAuth.currentUser != null)
        } catch (e: Exception) {
            AuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun getCurrentUser(): AuthResult<UserResponse> {
        return try {
            val res = firebaseAuth.currentUser
            AuthResult.Success(
                UserResponse(
                    uid = res?.uid ?: "",
                    email = res?.email,
                    isAnonymous = res?.isAnonymous ?: false
                )
            )
        } catch (e: Exception) {
            AuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun deleteUser(): DefaultAuthResult {
        return try {
            firebaseAuth.currentUser?.delete()
            DefaultAuthResult.Success()
        } catch (e: Exception) {
            DefaultAuthResult.Failure(e.message.toString())
        }
    }

    override suspend fun signOut(): DefaultAuthResult {
        return try {
            firebaseAuth.signOut()
            DefaultAuthResult.Success()
        } catch (e: Exception) {
            DefaultAuthResult.Failure(e.message.toString())
        }
    }
}