#pragma once

#include "Core.h"

namespace Ruuku {
	class RUUKU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}