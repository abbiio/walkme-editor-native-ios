// swift-tools-version: 5.9
import PackageDescription

// Note: Lottie.framework must be linked manually by the host application.

let package = Package(
    name: "WalkMeEditor",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(name: "WalkMeEditor", targets: ["WalkMeEditor"])
    ],
    targets: [
        .binaryTarget(
            name: "WalkMeEditor",
            url: "https://github.com/abbiio/walkme-editor-native-ios/releases/download/1.0.1/WalkMeEditor.xcframework.zip",
            checksum: "83d9b33a68b3247d9844f25d69cf5ed8ef31f62cc34b3ec390e537ad8302386c"
        )
    ]
)
