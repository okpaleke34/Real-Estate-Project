#include "Page_Admin_Dashboard.h"
#include "Page_Home.h"
#include "Page_Admin_AddProperty.h"
#include "Page_Admin_ListProperty.h"
#include <string>

using namespace RealEstateProject;

System::Void Page_Admin_Dashboard::Logout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Home Page_Home;
	Page_Home.ShowDialog();
}

System::Void Page_Admin_Dashboard::manage_apartement_label_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Admin_ListProperty^ Page_admin_list_item = gcnew Page_Admin_ListProperty("apartment");
	Page_admin_list_item->ShowDialog();
}


System::Void Page_Admin_Dashboard::manage_house_label_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Admin_ListProperty^ Page_admin_list_item = gcnew Page_Admin_ListProperty("house");
	Page_admin_list_item->ShowDialog();
}


System::Void Page_Admin_Dashboard::manage_land_label_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Admin_ListProperty^ Page_admin_list_item = gcnew Page_Admin_ListProperty("land");
	Page_admin_list_item->ShowDialog();
}


System::Void Page_Admin_Dashboard::add_property_label_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Admin_AddProperty page_admin_add_property;
	page_admin_add_property.ShowDialog();
}

