package io.github.mwaibanda.authentication.domain.model

import kotlinx.serialization.Serializable

@Serializable
data class UserResponse(
    val uid: String,
    val email: String?,
    val isAnonymous: Boolean
)