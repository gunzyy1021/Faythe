#pragma once

#ifdef FA_PLATFORM_WINDOWS

extern Faythe::Application* Faythe::CreateApplication();
//将main函数放在头文件中，为客户端省去这一步骤
int main(int argc, char** argv) {

	Faythe::Log::Init();
	Faythe::Log::GetCoreLogger()->warn("Initialized Log!");
	Faythe::Log::GetClientLogger()->info("Good mate!");
	auto app = Faythe::CreateApplication();
	app->Run();
	delete app;

};
#endif // 
