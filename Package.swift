// swift-tools-version: 5.9
import PackageDescription

// WalkMeEditor iOS SDK 0.1.0

let package = Package(
    name: "WalkMeEditor",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(name: "WalkMeEditor", targets: ["WalkMeEditorBinary"])
    ],
    targets: [
        .binaryTarget(
            name: "WalkMeEditorBinary",
            url: "https://github.com/abbiio/walkme-editor-native-ios/releases/download/0.1.0/WalkMeEditor.xcframework.zip",
            checksum: "6fab0061994881eebed33f78ca6eecbef2cb94754874f5d73a41eb53c72266c3"
        )
    ]
)
