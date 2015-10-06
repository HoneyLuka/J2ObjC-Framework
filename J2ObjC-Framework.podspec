@version = "0.9.8.2.1"

Pod::Spec.new do |s|
  s.name         		= "J2ObjC-Framework"
  s.version      		= @version
  s.summary      		= "Frameworked version of J2ObjC"
  s.homepage        = "https://actor.im/"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author       		= { "Actor LLC" => "steve@actor.im" }
  s.source          = { :git => "https://github.com/actorapp/J2ObjC-Framework.git", :tag => "v#{s.version}" }

  s.platform     		= :ios, "8.0"
  s.requires_arc 		= true

  s.frameworks      = 'Security'
  s.libraries       = 'icucore', 'z'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.frameworks = 'j2objc'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/J2ObjC-Framework/Franeworks"' }
end