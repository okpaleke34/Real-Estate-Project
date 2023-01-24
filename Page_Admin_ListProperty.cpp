#include "Page_Admin_ListProperty.h"
#include "Page_Admin_Dashboard.h"
#include <string>

using namespace RealEstateProject;

System::Void Page_Admin_ListProperty::Back2Dashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RealEstateProject::Page_Admin_Dashboard page_admin_dashboard;
	page_admin_dashboard.ShowDialog();
}

//Event that happens when any of the Page_Home page labels are clicked
System::Void Page_Admin_ListProperty::Page_Admin_ListProperty_Load(System::Object^ sender, System::EventArgs^ e) {

	info_label->Text = "Click a(n) " + estate_type + " ID and Click on the Delete Button to delete a property.";
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
			Land* land = new Land(LAND);
			vector<vector<string>> lands = land->fetchAll();
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
			vector<vector<string>> houses = house->fetchAll();
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
		RealEstateProject::Page_Admin_Dashboard page_admin_dashboard;
		page_admin_dashboard.ShowDialog();
	}

}

//evenmt that happens when 1 element is selected and clicked
System::Void Page_Admin_ListProperty::DeleteItem_Click(System::Object^ sender, System::EventArgs^ e) {
	

	if (MessageBox::Show("Are you sure you want to delete "+data_list->SelectedItems[0]->SubItems[1]->Text+"  located at " + data_list->SelectedItems[0]->SubItems[3]->Text + " ? ", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		int id = System::Int32::Parse(data_list->SelectedItems[0]->SubItems[0]->Text);
		id -= 1;//remove 1 to suit the row id
		try {

			if (estate_type == "apartment") {
				Apartment* apartment = new Apartment(APARTMENT);
				apartment->removeRow(id);
			}
			else if (estate_type == "land") {
				Land* land = new Land(LAND);
				land->removeRow(id);
			}
			else if (estate_type == "house") {
				House* house = new House(HOUSE);
				house->removeRow(id);
			}
			else {
				MessageBox::Show("Failed to delete item", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}

			MessageBox::Show("Property deleted successfully", "Alert", MessageBoxButtons::OK);
			//refresh page after deleting
			RealEstateProject::Page_Admin_ListProperty^ page_admin_list_property = gcnew Page_Admin_ListProperty(estate_type_label->Text);
			this->Hide();
			page_admin_list_property->ShowDialog();
		}
		catch (const std::runtime_error& ex) {
			//if there is an error deleting  a row, refresh the page
			System::String^ managedString = gcnew System::String(ex.what());
			MessageBox::Show("There is an error: " + managedString, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			RealEstateProject::Page_Admin_ListProperty^ page_admin_list_property = gcnew Page_Admin_ListProperty(estate_type_label->Text);
			this->Hide();
			page_admin_list_property->ShowDialog();
		}

		
	}
}