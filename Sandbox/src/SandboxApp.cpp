#include <ALLI.h>

class Sandbox : public ALLI::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

ALLI::Application* ALLI::CreateApplication()
{
	return new Sandbox();
}