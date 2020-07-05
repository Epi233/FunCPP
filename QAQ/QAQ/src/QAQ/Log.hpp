#pragma once

#include "Core.h"
#include "../Vendor/spdlog/spdlog.h"

namespace QAQ
{
	class QAQ_API Log
	{
	public:
		

	private:
		static std::shared_ptr<spdlog::logger> _coreLogger;
		static std::shared_ptr<spdlog::logger> _clientLogger;
	};
}