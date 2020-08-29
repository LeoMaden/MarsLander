workspace "MarsLander"
    configurations { "Debug", "Release"}
    platforms { "Win32", "Win64" }

    startproject "LanderApp" 

    staticruntime "On"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    filter "platforms:Win32"
        system "Windows"
        architecture "x86"

    filter "platforms:Win64"
        system "Windows"
        architecture "x86_64"


outputdir = "%{cfg.platform}-%{cfg.buildcfg}/"

include "Dependencies/Graphics-Engine/src/Engine/premake5.lua"
include "src/LanderApp/premake5.lua"

group "Dependencies"
    include "Dependencies/Graphics-Engine/Dependencies/glad/premake5.lua"
group ""
