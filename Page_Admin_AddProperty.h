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
	/// Summary for Page_Admin_AddProperty
	/// </summary>
	public ref class Page_Admin_AddProperty : public System::Windows::Forms::Form
	{
	public:
		RealEstate* utils = new RealEstate(LAND);
		Page_Admin_AddProperty(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Admin_AddProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ type_input;
	protected:

	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ goBack;
	private: System::Windows::Forms::Button^ submit_button;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ location_input;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ price_input;

	private: System::Windows::Forms::TextBox^ dimension_input;

	private: System::Windows::Forms::RadioButton^ type_apartment;
	private: System::Windows::Forms::RadioButton^ type_land;


	private: System::Windows::Forms::RadioButton^ type_house;

	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->type_input = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->goBack = (gcnew System::Windows::Forms::Button());
			this->submit_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->location_input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->price_input = (gcnew System::Windows::Forms::TextBox());
			this->dimension_input = (gcnew System::Windows::Forms::TextBox());
			this->type_apartment = (gcnew System::Windows::Forms::RadioButton());
			this->type_land = (gcnew System::Windows::Forms::RadioButton());
			this->type_house = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(68, 310);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(140, 25);
			this->password_label->TabIndex = 24;
			this->password_label->Text = L"DIMENSION:";
			// 
			// type_input
			// 
			this->type_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->type_input->Location = System::Drawing::Point(267, 212);
			this->type_input->Multiline = true;
			this->type_input->Name = L"type_input";
			this->type_input->Size = System::Drawing::Size(662, 49);
			this->type_input->TabIndex = 23;
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(68, 226);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(81, 25);
			this->username_label->TabIndex = 22;
			this->username_label->Text = L"TYPE: ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(373, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(441, 83);
			this->label1->TabIndex = 21;
			this->label1->Text = L"ADD PROPERTY";
			// 
			// goBack
			// 
			this->goBack->BackColor = System::Drawing::Color::IndianRed;
			this->goBack->ForeColor = System::Drawing::SystemColors::Control;
			this->goBack->Location = System::Drawing::Point(64, 792);
			this->goBack->Name = L"goBack";
			this->goBack->Size = System::Drawing::Size(144, 59);
			this->goBack->TabIndex = 20;
			this->goBack->Text = L"Go back";
			this->goBack->UseVisualStyleBackColor = false;
			this->goBack->Click += gcnew System::EventHandler(this, &Page_Admin_AddProperty::goBack_Click);
			// 
			// submit_button
			// 
			this->submit_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->submit_button->ForeColor = System::Drawing::SystemColors::Control;
			this->submit_button->Location = System::Drawing::Point(953, 781);
			this->submit_button->Name = L"submit_button";
			this->submit_button->Size = System::Drawing::Size(144, 59);
			this->submit_button->TabIndex = 19;
			this->submit_button->Text = L"Submit";
			this->submit_button->UseVisualStyleBackColor = false;
			this->submit_button->Click += gcnew System::EventHandler(this, &Page_Admin_AddProperty::submit_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 471);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 25);
			this->label2->TabIndex = 28;
			this->label2->Text = L"PRICE(PLN):";
			// 
			// location_input
			// 
			this->location_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->location_input->Location = System::Drawing::Point(267, 376);
			this->location_input->Multiline = true;
			this->location_input->Name = L"location_input";
			this->location_input->Size = System::Drawing::Size(662, 49);
			this->location_input->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 391);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 25);
			this->label3->TabIndex = 26;
			this->label3->Text = L"LOCATION: ";
			// 
			// price_input
			// 
			this->price_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->price_input->Location = System::Drawing::Point(267, 458);
			this->price_input->Multiline = true;
			this->price_input->Name = L"price_input";
			this->price_input->Size = System::Drawing::Size(662, 52);
			this->price_input->TabIndex = 29;
			// 
			// dimension_input
			// 
			this->dimension_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dimension_input->Location = System::Drawing::Point(267, 294);
			this->dimension_input->Multiline = true;
			this->dimension_input->Name = L"dimension_input";
			this->dimension_input->Size = System::Drawing::Size(662, 54);
			this->dimension_input->TabIndex = 30;
			// 
			// type_apartment
			// 
			this->type_apartment->AutoSize = true;
			this->type_apartment->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->type_apartment->Checked = true;
			this->type_apartment->Location = System::Drawing::Point(54, 47);
			this->type_apartment->Name = L"type_apartment";
			this->type_apartment->Size = System::Drawing::Size(131, 24);
			this->type_apartment->TabIndex = 31;
			this->type_apartment->TabStop = true;
			this->type_apartment->Text = L"APARTMENT";
			this->type_apartment->UseVisualStyleBackColor = true;
			// 
			// type_land
			// 
			this->type_land->AutoSize = true;
			this->type_land->Location = System::Drawing::Point(54, 129);
			this->type_land->Name = L"type_land";
			this->type_land->Size = System::Drawing::Size(77, 24);
			this->type_land->TabIndex = 32;
			this->type_land->TabStop = true;
			this->type_land->Text = L"LAND";
			this->type_land->UseVisualStyleBackColor = true;
			// 
			// type_house
			// 
			this->type_house->AutoSize = true;
			this->type_house->Location = System::Drawing::Point(54, 86);
			this->type_house->Name = L"type_house";
			this->type_house->Size = System::Drawing::Size(81, 24);
			this->type_house->TabIndex = 33;
			this->type_house->TabStop = true;
			this->type_house->Text = L"House";
			this->type_house->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->type_land);
			this->groupBox1->Controls->Add(this->type_apartment);
			this->groupBox1->Controls->Add(this->type_house);
			this->groupBox1->Location = System::Drawing::Point(267, 544);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(412, 194);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Property Type";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Page_Admin_AddProperty::groupBox1_Enter);
			// 
			// Page_Admin_AddProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1260, 954);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dimension_input);
			this->Controls->Add(this->price_input);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->location_input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->type_input);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->goBack);
			this->Controls->Add(this->submit_button);
			this->Name = L"Page_Admin_AddProperty";
			this->Text = L"Admin Add Property";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void submit_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void goBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
