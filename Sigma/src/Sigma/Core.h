#pragma once

#ifdef SM_PLATFORM_WINDOWS
	#ifdef SM_BUILD_DLL
		#define SIGMA_API __declspec(dllexport)
	#else
		#define SIGMA_API __declspec(dllimport)
	#endif
#else
	#error Sigma only supports windows!
#endif