#include "FrmMain.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace taskmanagement;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew FrmMain());
	return 0;
}