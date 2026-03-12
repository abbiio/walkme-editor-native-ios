// swift-tools-version: 5.9
  import PackageDescription
                                                                                                                                          
  // WalkMeEditor iOS SDK 1.0.0
                               
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
              url: "https://github.com/abbiio/walkme-editor-native-ios/releases/download/1.0.0/WalkMeEditor.xcframework.zip",
              checksum: "70f274018f68760eccfbcd62893967056f017950c0c58373e2e6a84d569d5fbb"
          )
      ]
  )
