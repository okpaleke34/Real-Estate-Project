#include "Page_Admin_Login.h"
#include "Page_Admin_Dashboard.h"
#include "Page_Home.h"
#include <string>
//
using namespace RealEstateProject;

System::Void Page_Admin_Login::login_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username_ = username_input->Text;
	String^ password_ = password_input->Text;
	std::string username = utils->toStdString(username_);
	std::string password = utils->toStdString(password_);

	//Validate email and fullname input
	if (username.length() == 0 || password.length() == 0) {
		MessageBox::Show("Please enter your username and Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	else {
		if (username == "admin" && password == "pass123") {
			RealEstateProject::Page_Admin_Dashboard^ page_admin_dashboard = gcnew Page_Admin_Dashboard;
			this->Hide();
			page_admin_dashboard->ShowDialog();
		}
		else {
			MessageBox::Show("Email or Password is wrong. Try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			return;
		}

	}
}


System::Void Page_Admin_Login::goBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Home Page_Home;
	Page_Home.ShowDialog();
}