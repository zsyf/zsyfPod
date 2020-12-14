Pod::Spec.new do |spec|

    spec.name         = "ZSDK"
    spec.version      = "1.0"
    spec.summary      = "A short description of ZSDK."
    spec.homepage     = "https://github.com/zsyf/zsyfPod"
    spec.license      = "MIT"
    spec.author       = "zsyf"
    spec.platform     = :ios
    spec.source       = { :git => "https://github.com/zsyf/zsyfPod.git", :tag => spec.version }

    spec.ios.deployment_target = '9.0'
    spec.requires_arc = true
 
    spec.vendored_frameworks = 'ZSDK.framework'
    spec.frameworks = 'UIKit', 'Foundation'
    
end
