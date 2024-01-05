#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace KursovaHushanArtem10;

[STAThreadAttribute]

int main(int argc, char* argv[]) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KursovaHushanArtem10::MyForm form;
	Application::Run(% form);
	return 0;
}
