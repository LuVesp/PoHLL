#include "MyForm.h" 	// ��� h-����� �����.
#include "My_Point.h"
using namespace Practika6; // ��� �������.
[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm()); // ��� �����.
    return 0;
}


