#include "Page_Home.h"
#include "Page_Admin_Dashboard.h"
#include "Page_Admin_AddProperty.h"
#include <string>

using namespace RealEstateProject;


System::Void Page_Admin_AddProperty::submit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type_input->Text == "" || dimension_input->Text == "" || location_input->Text == "" || price_input->Text == "") {
		MessageBox::Show("Please fill all the text area", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		String^ property_data = type_input->Text + "," + dimension_input->Text + "," + location_input->Text + "," + price_input->Text + "\n";
		string property = utils->toStdString(property_data);

		if (type_apartment->Checked) {
			Apartment* apartment = new Apartment(APARTMENT);
			apartment->addRow(property);
			delete apartment;
		}
		else if (type_land->Checked) {
			Land* land = new Land(LAND);
			land->addRow(property);
			delete land;
		}
		else {
			House* house = new House(HOUSE);
			house->addRow(property);
			delete house;
		}

		MessageBox::Show("Property added successfully", "Alert", MessageBoxButtons::OK);
		type_input->Text = "";
		dimension_input->Text = "";
		location_input->Text = "";
		price_input->Text = "";

		return;
	}
}


System::Void Page_Admin_AddProperty::goBack_Click(System::Object^ sender, System::EventArgs^ e) {
	RealEstateProject::Page_Admin_Dashboard^ page_admin_dashboard = gcnew Page_Admin_Dashboard;
	this->Hide();
	page_admin_dashboard->ShowDialog();
}