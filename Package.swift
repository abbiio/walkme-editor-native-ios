// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "WalkMeEditor",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(name: "WalkMeEditor", targets: ["WalkMeEditor"])
    ],
    dependencies: [
        .package(url: "https://github.com/airbnb/lottie-spm.git", exact: "4.6.0")
    ],
    targets: [
        .binaryTarget(
            name: "WalkMeEditorBinary",
            path: "WalkMeEditor.xcframework"
        ),
        .target(
            name: "WalkMeEditor",
            dependencies: [
                "WalkMeEditorBinary",
                .product(name: "Lottie", package: "lottie-spm")
            ],
            path: "Sources/WalkMeEditor"
        )
    ]
)
