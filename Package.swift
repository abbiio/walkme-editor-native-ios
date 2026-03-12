// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "WalkMeEditor",
    products: [
        .library(name: "WalkMeEditor", targets: ["WalkMeEditor"])
    ],
    targets: [
        .binaryTarget(
            name: "WalkMeEditor",
            path: "WalkMeEditor.xcframework"
        )
    ]
)
