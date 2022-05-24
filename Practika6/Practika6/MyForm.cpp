#include "MyForm.h" 	// Имя h-файла формы.
#include "My_Point.h"
using namespace Practika6; // Имя проекта.
[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm()); // Имя формы.
    return 0;
}


