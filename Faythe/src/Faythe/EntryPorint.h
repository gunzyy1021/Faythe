#pragma once

#ifdef FA_PLATFORM_WINDOWS

extern Faythe::Application* Faythe::CreateApplication();
//��main��������ͷ�ļ��У�Ϊ�ͻ���ʡȥ��һ����
int main(int argc, char** argv) {

	auto app = Faythe::CreateApplication();
	app->Run();
	delete app;

};
#endif // 
