#pragma once

#ifdef AL_PLATFORM_WINDOWS
	#ifdef AL_BUILD_DLL
		#define ALLI_API __declspec(dllexport)
	#else
		#define ALLI_API __declspec(dllimport)
	#endif // AL_BUILD_DLL
#else
	#error ALLI ONLY SUPPORTS WINDOWS AT THE MOMENT!
#endif AL_PLATFORM_WINDOWS

