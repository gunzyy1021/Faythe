#pragma once
#include "Core.h"
namespace Faythe {
	class FAYTHE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in Client
	Application* CreateApplication();
}
