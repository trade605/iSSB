
#include "GameEngine.h"
#include "Util/String.h"

#if defined(__APPLE__)
#include "TargetConditionals.h"
#endif

namespace GameEngine
{
	double random()
	{
		return (double)rand()/RAND_MAX;
	}
	
	bool isOnPlatform(const char*platform)
	{
		String plat = String(platform).toLowerCase();
		
#if defined(TARGET_OS_IPHONE)
		if(plat.equals("iphoneos") || plat.equals("iphone") || plat.equals("ios"))
		{
			return true;
		}
#elif defined(TARGET_IPHONE_SIMULATOR)
		if(plat.equals("iphonesimulator") || plat.equals("iphone") || plat.equals("ios"))
		{
			return true;
		}
#elif defined(__ANDROID__)
		if(plat.equals("android"))
		{
			return true;
		}
#elif defined(_WIN64)
		if(plat.equals("windows") || plat.equals("win64"))
		{
			return true;
		}
#elif defined(_WIN32)
		if(plat.equals("windows") || plat.equals("win32"))
		{
			return true;
		}
#elif defined(TARGET_OS_MAC)
		if(plat.equals("mac") || plat.equals("macos") || plat.equals("macosx"))
		{
			return true;
		}
#elif defined(__linux)
		if(plat.equals("linux"))
		{
			return true;
		}
#elif defined(__unix)
		if(plat.equals("unix"))
		{
			return true;
		}
#elif defined(__posix)
		if(plat.equals("posix"))
		{
			return true;
		}
#endif
		return false;
	}
}