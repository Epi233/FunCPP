#pragma once

#include "Core.h"

namespace QAQ
{
	class QAQ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	Application* CreateApplication();
	
}


