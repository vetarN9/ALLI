#pragma once

#ifdef AL_PLATFORM_WINDOWS

extern ALLI::Application* ALLI::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = ALLI::CreateApplication();
	app->Run();
	delete app;
}
#endif