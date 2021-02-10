#pragma once

#ifdef SM_PLATFORM_WINDOWS

extern Sigma::Application* Sigma::CreateApplication();

int main(int argc, char** argv) {
	printf("wabalaba");
	auto app = Sigma::CreateApplication();
	app->Run();
	delete app;
}

#endif