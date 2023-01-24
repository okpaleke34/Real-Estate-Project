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
	/// Summary for Page_Admin_ListProperty
	/// </summary>
	public ref class Page_Admin_ListProperty : public System::Windows::Forms::Form
	{
	private: 
		String^ estate_type;
		RealEstate* utils = new RealEstate(LAND);
	public:
		Page_Admin_ListProperty(String^ type)
		{
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
		~Page_Admin_ListProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ data_list;
	protected:
	private: System::Windows::Forms::ColumnHeader^ index;
	private: System::Windows::Forms::ColumnHeader^ type;
	private: System::Windows::Forms::ColumnHeader^ dimension;
	private: System::Windows::Forms::ColumnHeader^ location;
	private: System::Windows::Forms::ColumnHeader^ price;
	private: System::Windows::Forms::Label^ estate_type_label;
	private: System::Windows::Forms::Label^ info_label;
	private: System::Windows::Forms::Button^ DeleteItem;
	private: System::Windows::Forms::Button^ Back2Dashboard;

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
			this->data_list = (gcnew System::Windows::Forms::ListView());
			this->index = (gcnew System::Windows::Forms::ColumnHeader());
			this->type = (gcnew System::Windows::Forms::ColumnHeader());
			this->dimension = (gcnew System::Windows::Forms::ColumnHeader());
			this->location = (gcnew System::Windows::Forms::ColumnHeader());
			this->price = (gcnew System::Windows::Forms::ColumnHeader());
			this->estate_type_label = (gcnew System::Windows::Forms::Label());
			this->info_label = (gcnew System::Windows::Forms::Label());
			this->DeleteItem = (gcnew System::Windows::Forms::Button());
			this->Back2Dashboard = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// data_list
			// 
			this->data_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->index, this->type,
					this->dimension, this->location, this->price
			});
			this->data_list->HideSelection = false;
			this->data_list->Location = System::Drawing::Point(74, 145);
			this->data_list->MultiSelect = false;
			this->data_list->Name = L"data_list";
			this->data_list->Size = System::Drawing::Size(1096, 697);
			this->data_list->TabIndex = 8;
			this->data_list->UseCompatibleStateImageBehavior = false;
			this->data_list->View = System::Windows::Forms::View::Details;
			// 
			// index
			// 
			this->index->Text = L"#";
			this->index->Width = 37;
			// 
			// type
			// 
			this->type->Text = L"Type";
			this->type->Width = 200;
			// 
			// dimension
			// 
			this->dimension->Text = L"Dimension";
			this->dimension->Width = 150;
			// 
			// location
			// 
			this->location->Text = L"Location";
			this->location->Width = 300;
			// 
			// price
			// 
			this->price->Text = L"Price(zl)";
			this->price->Width = 100;
			// 
			// estate_type_label
			// 
			this->estate_type_label->AutoSize = true;
			this->estate_type_label->Location = System::Drawing::Point(646, 32);
			this->estate_type_label->Name = L"estate_type_label";
			this->estate_type_label->Size = System::Drawing::Size(51, 20);
			this->estate_type_label->TabIndex = 14;
			this->estate_type_label->Text = L"label1";
			this->estate_type_label->Visible = false;
			// 
			// info_label
			// 
			this->info_label->AutoSize = true;
			this->info_label->Location = System::Drawing::Point(70, 32);
			this->info_label->Name = L"info_label";
			this->info_label->Size = System::Drawing::Size(17, 20);
			this->info_label->TabIndex = 13;
			this->info_label->Text = L"..";
			// 
			// DeleteItem
			// 
			this->DeleteItem->BackColor = System::Drawing::SystemColors::Highlight;
			this->DeleteItem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DeleteItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DeleteItem->Location = System::Drawing::Point(1000, 881);
			this->DeleteItem->Name = L"DeleteItem";
			this->DeleteItem->Size = System::Drawing::Size(170, 46);
			this->DeleteItem->TabIndex = 10;
			this->DeleteItem->Text = L"Delete Item";
			this->DeleteItem->UseVisualStyleBackColor = false;
			this->DeleteItem->Click += gcnew System::EventHandler(this, &Page_Admin_ListProperty::DeleteItem_Click);
			// 
			// Back2Dashboard
			// 
			this->Back2Dashboard->BackColor = System::Drawing::Color::IndianRed;
			this->Back2Dashboard->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Back2Dashboard->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Back2Dashboard->Location = System::Drawing::Point(74, 881);
			this->Back2Dashboard->Name = L"Back2Dashboard";
			this->Back2Dashboard->Size = System::Drawing::Size(170, 46);
			this->Back2Dashboard->TabIndex = 9;
			this->Back2Dashboard->Text = L"Back";
			this->Back2Dashboard->UseVisualStyleBackColor = false;
			this->Back2Dashboard->Click += gcnew System::EventHandler(this, &Page_Admin_ListProperty::Back2Dashboard_Click);
			// 
			// Page_Admin_ListProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 959);
			this->Controls->Add(this->data_list);
			this->Controls->Add(this->estate_type_label);
			this->Controls->Add(this->info_label);
			this->Controls->Add(this->DeleteItem);
			this->Controls->Add(this->Back2Dashboard);
			this->Name = L"Page_Admin_ListProperty";
			this->Text = L"Admin List Items";
			this->Load += gcnew System::EventHandler(this, &Page_Admin_ListProperty::Page_Admin_ListProperty_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page_Admin_ListProperty_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DeleteItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Back2Dashboard_Click(System::Object^ sender, System::EventArgs^ e);
};
}
