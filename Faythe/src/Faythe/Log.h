#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace Faythe{
class FAYTHE_API Log
{
public:
	static void Init();
	static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
	static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };
private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;
};
}

//Core log macros
#define FA_CORE_ERROR(...) ::Faythe::Log::GetCoreLogger()->error(__VA_ARGS_)
#define FA_CORE_WARN(...)  ::Faythe::Log::GetCoreLogger()->warn(__VA_ARGS_)
#define FA_CORE_INFO(...)  ::Faythe::Log::GetCoreLogger()->info(__VA_ARGS_)
#define FA_CORE_TRACE(...) ::Faythe::Log::GetCoreLogger()->trace(__VA_ARGS_)
#define FA_CORE_FATAL(...) ::Faythe::Log::GetCoreLogger()->fatal(__VA_ARGS_)

//Client log macros
#define FA_CLIENT_ERROR(...) ::Faythe::Log::GetClientLogger()->error(__VA_ARGS_)
#define FA_CLIENT_WARN(...)  ::Faythe::Log::GetClientLogger()->warn(__VA_ARGS_)
#define FA_CLIENT_INFO(...)  ::Faythe::Log::GetClientLogger()->info(__VA_ARGS_)
#define FA_CLIENT_TRACE(...) ::Faythe::Log::GetClientLogger()->trace(__VA_ARGS_)
#define FA_CLIENT_FATAL(...) ::Faythe::Log::GetClientLogger()->fatal(__VA_ARGS_)
