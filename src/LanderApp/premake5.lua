project "LanderApp"
    --kind "WindowedApp"
    kind "ConsoleApp"
    language "C++"

    files {
        "**.cpp",
        "**.h"
    }
    
    includedirs {
        "../../Dependencies/Graphics-Engine/src/Engine",
        "../../Dependencies/Graphics-Engine/Dependencies/spdlog",
        "../../Dependencies/Graphics-Engine/Dependencies/glad/include",
        "../../Dependencies/Graphics-Engine/Dependencies/glm"
    }

    links {
        "Engine",
        "opengl32"
    }

    --defines {
    --}

    --pchheader "PulsePCH.h"
    --pchsource "Source/PulsePCH.cpp"

    targetdir ("../../Bin/" .. outputdir .. "LanderApp")
    objdir ("../../Build/" .. outputdir .. "LanderApp")