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
            url: "https://github.com/MwaiBanda/Authentication/releases/download/1.0.5/Authentication-1.0.5.zip",
            checksum:"99a5b9799e8e8524c6690f220afcc4bd428f3f32cbdaed88ed88e0c1f4641421"
       )
    ]
)
