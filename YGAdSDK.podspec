Pod::Spec.new do |spec|
  spec.name         = "YGAdSDK"
  spec.version      = "0.0.1"
  spec.summary      = "The framework provided by Longyun Technology."
  spec.description  = <<-DESC
                      The framework provided by Longyun Technology,provide Yunlong SSP platform advertising display.
                   DESC
  spec.homepage     = "https://github.com/LongYunGit/YGAdSDK"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "zhangbao" => "zhangbao@ly.group" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/LongYunGit/YGAdSDK.git", :tag => "#{spec.version}" }
  spec.frameworks           = "Foundation", "UIKit", "SystemConfiguration", "MobileCoreServices", "AdSupport", "WebKit", "CoreTelephony", "CoreMotion"
  spec.exclude_files = "README.md"
  spec.requires_arc = true
  spec.vendored_frameworks = "Frameworks/*.framework"
  spec.resource = 'YGAdSDK.bundle'
  spec.dependency "YGNet", "0.0.3"

end
