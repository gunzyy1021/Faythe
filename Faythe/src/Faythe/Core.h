#pragma once

#ifdef FA_PLATFORM_WINDOWS
	#ifdef FA_BUILD_DLL
		#define FAYTHE_API __declspec(dllexport)
	#else
		#define FAYTHE_API __declspec(dllimport)
	#endif
#else
	#error Faythe only support Window.
#endif // 
