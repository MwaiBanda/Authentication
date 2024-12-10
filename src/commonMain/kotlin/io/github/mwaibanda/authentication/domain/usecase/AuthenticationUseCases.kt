package io.github.mwaibanda.authentication.domain.usecase

data class AuthenticationUseCases(
    val signInWithEmail: SignInWithEmailUseCase,
    val signUpWithEmail: SignUpWithEmailUseCase,
    val signInAsGuest: SignInAsGuestUseCase,
    val isUserSignedIn: IsUserSignedInUseCase,
    val getCurrentUser: GetCurrentUserUseCase,
    val deleteUser: DeleteUserUseCase,
    val signOut: SignOutUseCase,
    val resetPassword: ResetPasswordUseCase
)
