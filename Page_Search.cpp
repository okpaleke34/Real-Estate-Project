#include "Page_Search.h"
#include "Page_ItemDetails.h"
#include "Home.h"
#include <string>

using namespace RealEstateProject;

System::Void Page_Search::Back2Home_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Home Home;
	Home.ShowDialog();
}

//Event that happens when any of the home page labels are clicked
System::Void Page_Search::Page_Search_Load(System::Object^ sender, System::EventArgs^ e) {
	
	info_label->Text = "Search " + estate_type + " by location, price and dimension:";
	try {
		if (estate_type == "apartment") {
			estate_type_label->Text = "apartment";
			Apartment* apartment = new Apartment(APARTMENT);
			vector<vector<string>> apartments = apartment->fetchAll();
			for (int i = 0; i < apartments.size(); i++)
			{
				ListViewItem^ item = (gcnew System::Windows::Forms::ListViewItem(utils->toSystemString(to_string(i + 1)), 0));
				item->SubItems->Add(utils->toSystemString(apartments[i][0]));
				item->SubItems->Add(utils->toSystemString(apartments[i][1]));
				item->SubItems->Add(utils->toSystemString(apartments[i][2]));
				item->SubItems->Add(utils->toSystemString(apartment->moneyFormat<string>(apartments[i][3])));

				data_list->Items->Add(item);
			}
		}
		else if (estate_type == "land") {
			estate_type_label->Text = "land";

		}
	}
	catch (const std::runtime_error& ex) {
		//if there is an error opening a file, go back to the home page
		System::String^ managedString = gcnew System::String(ex.what());
		MessageBox::Show("There is an error: " + managedString, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->Hide();
		RealEstateProject::Home Home;
		Home.ShowDialog();
	}

}

//evenmt that happens when 1 element is selected and clicked
System::Void Page_Search::ViewData_Click(System::Object^ sender, System::EventArgs^ e) {

	//MessageBox::Show(estate_type_label->Text, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

	/*String^ selectedIndex = data_list->SelectedItems[0]->SubItems[0]->Text;
	String^ selectedLocation = data_list->SelectedItems[0]->SubItems[2]->Text;*/
	int id = System::Int32::Parse(data_list->SelectedItems[0]->SubItems[0]->Text); 

	RealEstateProject::Page_ItemDetails^ page_item_details = gcnew Page_ItemDetails(id, estate_type_label->Text);
	this->Hide();
	page_item_details->ShowDialog();
}