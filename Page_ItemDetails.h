#pragma once
#include "Apartment.h"
#include "Land.h"
#include "House.h"

#define LAND "lands.csv"
#define HOUSE "houses.csv"
#define APARTMENT "apartments.csv"

namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_ItemDetails
	/// </summary>
	public ref class Page_ItemDetails : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::TextBox^ name_input;
	private: System::Windows::Forms::TextBox^ email_input;
	private: System::Windows::Forms::Label^ email_label;
	private: String^ estate_type;
	private: int itemID;
	public:

		RealEstate* utils = new RealEstate(LAND);
		Page_ItemDetails(int item, String^ type)
		{
			this->itemID = item;
			this->estate_type = type;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_ItemDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ purchase_button;
	protected:

	private: System::Windows::Forms::Label^ type_label;

	private: System::Windows::Forms::Label^ dimension_label;

	private: System::Windows::Forms::Label^ location_label;
	private: System::Windows::Forms::Label^ price_label;
	private: System::Windows::Forms::Button^ goBack;
	private: System::Windows::Forms::Label^ title_label;



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->purchase_button = (gcnew System::Windows::Forms::Button());
			this->type_label = (gcnew System::Windows::Forms::Label());
			this->dimension_label = (gcnew System::Windows::Forms::Label());
			this->location_label = (gcnew System::Windows::Forms::Label());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->goBack = (gcnew System::Windows::Forms::Button());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->name_input = (gcnew System::Windows::Forms::TextBox());
			this->email_input = (gcnew System::Windows::Forms::TextBox());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// purchase_button
			// 
			this->purchase_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->purchase_button->ForeColor = System::Drawing::SystemColors::Control;
			this->purchase_button->Location = System::Drawing::Point(1057, 825);
			this->purchase_button->Name = L"purchase_button";
			this->purchase_button->Size = System::Drawing::Size(144, 59);
			this->purchase_button->TabIndex = 0;
			this->purchase_button->Text = L"Purchase";
			this->purchase_button->UseVisualStyleBackColor = false;
			this->purchase_button->Click += gcnew System::EventHandler(this, &Page_ItemDetails::purchase_button_Click);
			// 
			// type_label
			// 
			this->type_label->BackColor = System::Drawing::SystemColors::Highlight;
			this->type_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->type_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->type_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->type_label->Location = System::Drawing::Point(1, 78);
			this->type_label->Name = L"type_label";
			this->type_label->Size = System::Drawing::Size(1263, 80);
			this->type_label->TabIndex = 1;
			this->type_label->Text = L"Type:";
			this->type_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dimension_label
			// 
			this->dimension_label->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dimension_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dimension_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dimension_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dimension_label->Location = System::Drawing::Point(1, 158);
			this->dimension_label->Name = L"dimension_label";
			this->dimension_label->Size = System::Drawing::Size(1263, 76);
			this->dimension_label->TabIndex = 2;
			this->dimension_label->Text = L"Dimension:";
			this->dimension_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// location_label
			// 
			this->location_label->BackColor = System::Drawing::SystemColors::Highlight;
			this->location_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->location_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->location_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->location_label->Location = System::Drawing::Point(1, 234);
			this->location_label->Name = L"location_label";
			this->location_label->Size = System::Drawing::Size(1263, 80);
			this->location_label->TabIndex = 3;
			this->location_label->Text = L"Location:";
			this->location_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// price_label
			// 
			this->price_label->BackColor = System::Drawing::SystemColors::ControlDark;
			this->price_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->price_label->Location = System::Drawing::Point(1, 314);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(1263, 79);
			this->price_label->TabIndex = 4;
			this->price_label->Text = L"Price: ";
			this->price_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// goBack
			// 
			this->goBack->BackColor = System::Drawing::Color::IndianRed;
			this->goBack->ForeColor = System::Drawing::SystemColors::Control;
			this->goBack->Location = System::Drawing::Point(38, 825);
			this->goBack->Name = L"goBack";
			this->goBack->Size = System::Drawing::Size(144, 59);
			this->goBack->TabIndex = 5;
			this->goBack->Text = L"Go back";
			this->goBack->UseVisualStyleBackColor = false;
			this->goBack->Click += gcnew System::EventHandler(this, &Page_ItemDetails::goBack_Click);
			// 
			// title_label
			// 
			this->title_label->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_label->Location = System::Drawing::Point(442, 17);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(306, 51);
			this->title_label->TabIndex = 6;
			this->title_label->Text = L"ESTATE DETAILS";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(442, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 51);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CUSTOMER DETAILS";
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(53, 566);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(209, 38);
			this->name_label->TabIndex = 8;
			this->name_label->Text = L"FULLNAME: ";
			// 
			// name_input
			// 
			this->name_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->name_input->Location = System::Drawing::Point(252, 556);
			this->name_input->Multiline = true;
			this->name_input->Name = L"name_input";
			this->name_input->Size = System::Drawing::Size(581, 48);
			this->name_input->TabIndex = 9;
			// 
			// email_input
			// 
			this->email_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->email_input->Location = System::Drawing::Point(252, 651);
			this->email_input->Multiline = true;
			this->email_input->Name = L"email_input";
			this->email_input->Size = System::Drawing::Size(581, 48);
			this->email_input->TabIndex = 11;
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(53, 661);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(147, 38);
			this->email_label->TabIndex = 10;
			this->email_label->Text = L"E-MAIL: ";
			// 
			// Page_ItemDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 954);
			this->Controls->Add(this->email_input);
			this->Controls->Add(this->email_label);
			this->Controls->Add(this->name_input);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->title_label);
			this->Controls->Add(this->goBack);
			this->Controls->Add(this->price_label);
			this->Controls->Add(this->location_label);
			this->Controls->Add(this->dimension_label);
			this->Controls->Add(this->type_label);
			this->Controls->Add(this->purchase_button);
			this->Name = L"Page_ItemDetails";
			this->Text = L"Item Details";
			this->Load += gcnew System::EventHandler(this, &Page_ItemDetails::Page_ItemDetails_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void goBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Page_ItemDetails_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->estate_type == "apartment") {
			Apartment* apartment = new Apartment(APARTMENT);
			vector<vector<string>> apartments = apartment->fetchAll();
			vector<string> row = apartment->fetchRow(apartments, this->itemID);
			if (!row.empty()) {
				title_label->Text = "APARTMENT DETAILS";
				type_label->Text = "TYPE: "+utils->toSystemString(row[0]);
				dimension_label->Text = "DIMENSION: " + utils->toSystemString(row[1]);
				location_label->Text = "LOCATION: " + utils->toSystemString(row[2]);
				price_label->Text = "PRICE: " + utils->toSystemString(apartment->moneyFormat<string>(row[3])+ " PLN");
			}
		}
		

	}
	private: System::Void purchase_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
