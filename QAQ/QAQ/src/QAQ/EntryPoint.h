#pragma once
#include "Application.h"

extern QAQ::Application* QAQ::CreateApplication();

int main(int argc, char** argv)
{
	auto app = QAQ::CreateApplication();
	app->Run();
	delete app;
}