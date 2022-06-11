#pragma once

#include "Core.h"

namespace ALLI
{

	class ALLI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}


