#include "Page_Search.h"
#include "Page_ItemDetails.h"
#include "Page_Home.h"
#include <string>

using namespace RealEstateProject;

System::Void Page_Search::Back2Page_Home_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Home Page_Home;
	Page_Home.ShowDialog();
}

//Event that happens when any of the Page_Home page labels are clicked
System::Void Page_Search::Page_Search_Load(System::Object^ sender, System::EventArgs^ e) {
	if (this->search_by == "all") {
		info_label->Text = "Search " + estate_type + " by location, price and dimension:";
	}
	else {
		info_label->Text = "Search results for `" + this->search_by + "`";
	}
	try {
		
		if (estate_type == "apartment") {
			estate_type_label->Text = "apartment";
			Apartment* apartment = new Apartment(APARTMENT);
			vector<vector<string>> apartments;
			if (this->search_by == "all") {
				apartments = apartment->fetchAll();
			}
			else {
				apartments = apartment->fetchWhere(utils->toStdString(this->search_by));
			}
			
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
			Land* land = new Land(LAND);
			vector<vector<string>> lands;
			if (this->search_by == "all") {
				lands = land->fetchAll();
			}
			else {
				lands = land->fetchWhere(utils->toStdString(this->search_by));
			}

			for (int i = 0; i < lands.size(); i++)
			{
				ListViewItem^ item = (gcnew System::Windows::Forms::ListViewItem(utils->toSystemString(to_string(i + 1)), 0));
				item->SubItems->Add(utils->toSystemString(lands[i][0]));
				item->SubItems->Add(utils->toSystemString(lands[i][1]));
				item->SubItems->Add(utils->toSystemString(lands[i][2]));
				item->SubItems->Add(utils->toSystemString(land->moneyFormat<string>(lands[i][3])));

				data_list->Items->Add(item);
			}
		}

		else{
			estate_type_label->Text = "house";
			House* house = new House(HOUSE);
			vector<vector<string>> houses;
			if (this->search_by == "all") {
				houses = house->fetchAll();
			}
			else {
				houses = house->fetchWhere(utils->toStdString(this->search_by));
			}

			for (int i = 0; i < houses.size(); i++)
			{
				ListViewItem^ item = (gcnew System::Windows::Forms::ListViewItem(utils->toSystemString(to_string(i + 1)), 0));
				item->SubItems->Add(utils->toSystemString(houses[i][0]));
				item->SubItems->Add(utils->toSystemString(houses[i][1]));
				item->SubItems->Add(utils->toSystemString(houses[i][2]));
				item->SubItems->Add(utils->toSystemString(house->moneyFormat<string>(houses[i][3])));

				data_list->Items->Add(item);
			}
		}
	}
	catch (const std::runtime_error& ex) {
		//if there is an error opening a file, go back to the Page_Home page
		System::String^ managedString = gcnew System::String(ex.what());
		MessageBox::Show("There is an error: " + managedString, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->Hide();
		RealEstateProject::Page_Home Page_Home;
		Page_Home.ShowDialog();
	}

}

//evenmt that happens when 1 element is selected and clicked
System::Void Page_Search::ViewData_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = System::Int32::Parse(data_list->SelectedItems[0]->SubItems[0]->Text); 

	RealEstateProject::Page_ItemDetails^ page_item_details = gcnew Page_ItemDetails(id, estate_type_label->Text);
	this->Hide();
	page_item_details->ShowDialog();
}

System::Void Page_Search::search_button_Click(System::Object^ sender, System::EventArgs^ e) {	
	RealEstateProject::Page_Search^ page_search = gcnew Page_Search(estate_type, search_box->Text);
	this->Hide();
	page_search->ShowDialog();
}