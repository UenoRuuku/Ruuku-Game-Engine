#include <RuukuEngine.h>

class Sandbox : public Ruuku::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};


Ruuku::Application* Ruuku::CreateApplication() {
	return new Sandbox();
}