#include <Faythe.h>

class Sandbox : public Faythe::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};

Faythe::Application* Faythe::CreateApplication() {
	return new Sandbox();
}