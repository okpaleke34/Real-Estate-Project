#include "Page_Home.h"
#include "Page_Search.h"
#include "Page_Admin_Login.h"

using namespace RealEstateProject;

System::Void Page_Home::apartment_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("apartment");
	this->Hide();
	page_search->ShowDialog();
}

System::Void Page_Home::land_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("land");
	this->Hide();
	page_search->ShowDialog();
}

System::Void Page_Home::house_label_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search("house");
	this->Hide();
	page_search->ShowDialog();
}


System::Void Page_Home::link_to_admin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
	RealEstateProject::Page_Admin_Login page_admin_login;
	this->Hide();
	page_admin_login.ShowDialog();
}