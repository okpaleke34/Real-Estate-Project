
#include "Page_Home.h"
#include "Page_ThankYou.h"
//
using namespace RealEstateProject;

System::Void Page_ThankYou::go2Main_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Home Page_Home;
	this->Hide();
	Page_Home.ShowDialog();
}