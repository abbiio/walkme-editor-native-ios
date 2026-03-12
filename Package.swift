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
            url: "https://github.com/abbiio/walkme-editor-native-ios/releases/download/1.0.0/WalkMeEditor.xcframework.zip",
            checksum: "70f274018f68760eccfbcd62893967056f017950c0c58373e2e6a84d569d5fbb"
        ),
        .target(
            name: "WalkMeEditor",
            dependencies: [
                "WalkMeEditorBinary",
                .product(name: "Lottie", package: "lottie-spm")
            ]
        )
    ]
)
