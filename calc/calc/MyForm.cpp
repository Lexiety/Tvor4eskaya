#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include <math.h>
#include <msclr\marshal_cppstd.h>

using namespace calc; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
