#pragma once
#include "Core.h"

namespace Sigma {

	class SIGMA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}
