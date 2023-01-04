Pod::Spec.new do |spec|
    spec.name                     = 'Authentication'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/MwaiBanda/Authentication'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Mwai Banda'
    spec.license                  = 'mit'
    spec.summary                  = 'iOS Firebase Auth Wrapper'
    spec.vendored_frameworks      = 'build/cocoapods/framework/Authentication.framework'
                
    spec.ios.deployment_target = '13.5'
                
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':',
        'PRODUCT_MODULE_NAME' => 'Authentication',
    }
                
    spec.script_phases = [
        {
            :name => 'Build Authentication',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
                  echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/../../../../../../private/var/folders/hz/78xz1fln26940hs7x9vqwv3c0000gp/T/wrap5loc/gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
    spec.libraries = 'c++'
end