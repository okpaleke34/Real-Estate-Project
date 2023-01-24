#include "Page_Home.h"
#include "Page_Search.h"

using namespace System;
using namespace System::Windows::Forms; 
//using namespace RealEstateProject; //project name

//void main(array<String^>^ args) {
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RealEstateProject::Page_Home Page_Home;
	Page_Home.ShowDialog();
}