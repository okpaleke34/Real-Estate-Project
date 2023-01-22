#include "Home.h"
#include "Page_Search.h"

using namespace RealEstateProject;

System::Void Home::apartment_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("apartment");
	this->Hide();
	page_search->ShowDialog();
}

System::Void Home::land_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("land");
	this->Hide();
	page_search->ShowDialog();
}

System::Void Home::house_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("house");
	this->Hide();
	page_search->ShowDialog();
}