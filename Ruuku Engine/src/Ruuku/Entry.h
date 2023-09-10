#pragma once

#ifdef RK_PLATFORM_WINDOWS

extern Ruuku::Application* Ruuku::CreateApplication();

int main(int argc, char** argv) {
	auto app = Ruuku::CreateApplication();
	app->Run();
	delete app;
}

#endif