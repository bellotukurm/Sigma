#include <Sigma.h>

class Sandbox : public Sigma::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Sigma::Application* Sigma::CreateApplication() {
	return new Sandbox();
}