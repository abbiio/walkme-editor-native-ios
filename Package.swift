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
            name: "WalkMeEditor",
            path: "WalkMeEditor.xcframework"
        )
    ]
)
