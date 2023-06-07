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
            path: "./Authentication.xcframework"
        ),
    ]
)
