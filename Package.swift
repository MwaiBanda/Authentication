// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "Authentication",
     platforms: [
         .iOS(.v13)
     ],
     products: [
         .library(
             name: "Authentication",
             targets: ["Authentication"]
         ),
     ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
        .package(url: "https://github.com/firebase/firebase-ios-sdk.git", .upToNextMajor(from: "8.10.0"))
    ], targets: [
        .binaryTarget(
            name: "Authentication",
            path: "./artifacts/Authentication-1.0.5.zip"
        ),
        .testTarget(
            name: "AuthenticationTests",
            dependencies: ["Authentication"],
            path: "./package/tests"
        )
    ]
)
