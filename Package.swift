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
            url: "https://github.com/MwaiBanda/Authentication/package/Authentication-1.0.0.zip",
            checksum: "f764fbe7dbef393a9f88c4da20a8039ead017540cc13a712757598d855cb0692"
        ),
    ]
)
