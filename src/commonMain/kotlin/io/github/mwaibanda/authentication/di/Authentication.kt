package io.github.mwaibanda.authentication.di

import io.github.mwaibanda.authentication.domain.controller.AuthenticationController
import org.kodein.di.DI
import org.kodein.di.DIAware
import org.kodein.di.instance

object Authentication: DIAware {
    override val di: DI by DI.lazy {
        import(authSingletonModule)
        import(authServiceModule)
        import(authUseCasesModule)
        import(authControllerModule)
    }
    val controller: AuthenticationController by di.instance()
}