// swift-tools-version:5.3
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
    targets: [
        .binaryTarget(
            name: "Authentication",
            path: "./package/Authentication.xcframework",
            url: "https://github.com/MwaiBanda/Authentication/releases/download/1.0.0/Authentication-1.0.0.zip"
        ),
    ]
)
