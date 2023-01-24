#include "Page_Home.h"
#include "Page_Search.h"
#include "Page_ItemDetails.h"
#include "Page_ThankYou.h"
#include <string>
#using <System.dll>
//
using namespace RealEstateProject;

System::Void Page_ItemDetails::goBack_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search(this->estate_type,"all");
	this->Hide();
	page_search->ShowDialog();
}


System::Void Page_ItemDetails::purchase_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullname_ = name_input->Text;
	String^ email_ = email_input->Text;
	std::string email = utils->toStdString(email_);
	std::string fullname = utils->toStdString(fullname_);

	//Validate email and fullname input
	if (fullname.length() == 0 || email.length() == 0 || !(utils->isValid("email", email))) {
		MessageBox::Show("Please enter your Fullname and E-mail", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	else {
		if (MessageBox::Show("Are you sure you want to pay for this "+ this->estate_type +"?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			RealEstateProject::Page_ThankYou^ page_thankyou = gcnew Page_ThankYou(this->itemID, this->estate_type,fullname_, email_);
			this->Hide();
			page_thankyou->ShowDialog();
		}
		
	}
	
}
