#pragma once

#ifdef  RK_PLATFORM_WINDOWS
	#ifdef RUUKU_BUILD_DLL
		#define RUUKU_API __declspec(dllexport)
	#else
		#define RUUKU_API __declspec(dllimport)
	#endif
#else
	#error Ruuku Engine only Support Windows
#endif