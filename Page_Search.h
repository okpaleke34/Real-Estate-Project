#pragma once
#include <vector>
#include <list>
#include <string>
#include <msclr/marshal.h>
//#include "Home.h"
#include "Apartment.h"
#include "Land.h"
#include "House.h"

#define LAND "lands.csv"
#define HOUSE "houses.csv"
#define APARTMENT "apartments.csv"

using namespace std;
//class Home;

namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Page_Search
	/// </summary>
	public ref class Page_Search : public System::Windows::Forms::Form
	{
	private: String^ estate_type;
	public:

		RealEstate* utils = new RealEstate(LAND);
		Page_Search(String^ type)
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
		~Page_Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ data_list;
	protected:
	private: System::Windows::Forms::ColumnHeader^ type;
	private: System::Windows::Forms::ColumnHeader^ dimension;
	private: System::Windows::Forms::ColumnHeader^ location;
	private: System::Windows::Forms::ColumnHeader^ price;
	private: System::Windows::Forms::Button^ Back2Home;
	private: System::Windows::Forms::Button^ ViewData;
	private: System::Windows::Forms::TextBox^ search_box;
	private: System::Windows::Forms::Button^ search_button;
	private: System::Windows::Forms::Label^ info_label;
	private: System::Windows::Forms::ColumnHeader^ index;
	private: System::Windows::Forms::Label^ estate_type_label;


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
			this->data_list = (gcnew System::Windows::Forms::ListView());
			this->index = (gcnew System::Windows::Forms::ColumnHeader());
			this->type = (gcnew System::Windows::Forms::ColumnHeader());
			this->dimension = (gcnew System::Windows::Forms::ColumnHeader());
			this->location = (gcnew System::Windows::Forms::ColumnHeader());
			this->price = (gcnew System::Windows::Forms::ColumnHeader());
			this->Back2Home = (gcnew System::Windows::Forms::Button());
			this->ViewData = (gcnew System::Windows::Forms::Button());
			this->search_box = (gcnew System::Windows::Forms::TextBox());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->info_label = (gcnew System::Windows::Forms::Label());
			this->estate_type_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// data_list
			// 
			this->data_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->index, this->type,
					this->dimension, this->location, this->price
			});
			this->data_list->HideSelection = false;
			this->data_list->Location = System::Drawing::Point(90, 141);
			this->data_list->MultiSelect = false;
			this->data_list->Name = L"data_list";
			this->data_list->Size = System::Drawing::Size(1096, 697);
			this->data_list->TabIndex = 1;
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
			// Back2Home
			// 
			this->Back2Home->BackColor = System::Drawing::Color::IndianRed;
			this->Back2Home->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Back2Home->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Back2Home->Location = System::Drawing::Point(90, 877);
			this->Back2Home->Name = L"Back2Home";
			this->Back2Home->Size = System::Drawing::Size(170, 46);
			this->Back2Home->TabIndex = 2;
			this->Back2Home->Text = L"Back";
			this->Back2Home->UseVisualStyleBackColor = false;
			this->Back2Home->Click += gcnew System::EventHandler(this, &Page_Search::Back2Home_Click);
			// 
			// ViewData
			// 
			this->ViewData->BackColor = System::Drawing::SystemColors::Highlight;
			this->ViewData->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewData->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ViewData->Location = System::Drawing::Point(1016, 867);
			this->ViewData->Name = L"ViewData";
			this->ViewData->Size = System::Drawing::Size(170, 46);
			this->ViewData->TabIndex = 3;
			this->ViewData->Text = L"View Item";
			this->ViewData->UseVisualStyleBackColor = false;
			this->ViewData->Click += gcnew System::EventHandler(this, &Page_Search::ViewData_Click);
			// 
			// search_box
			// 
			this->search_box->Location = System::Drawing::Point(90, 69);
			this->search_box->Multiline = true;
			this->search_box->Name = L"search_box";
			this->search_box->Size = System::Drawing::Size(781, 53);
			this->search_box->TabIndex = 4;
			// 
			// search_button
			// 
			this->search_button->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->search_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->search_button->Location = System::Drawing::Point(1005, 69);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(181, 53);
			this->search_button->TabIndex = 5;
			this->search_button->Text = L"Search List";
			this->search_button->UseVisualStyleBackColor = false;
			// 
			// info_label
			// 
			this->info_label->AutoSize = true;
			this->info_label->Location = System::Drawing::Point(86, 28);
			this->info_label->Name = L"info_label";
			this->info_label->Size = System::Drawing::Size(17, 20);
			this->info_label->TabIndex = 6;
			this->info_label->Text = L"..";
			// 
			// estate_type_label
			// 
			this->estate_type_label->AutoSize = true;
			this->estate_type_label->Location = System::Drawing::Point(662, 28);
			this->estate_type_label->Name = L"estate_type_label";
			this->estate_type_label->Size = System::Drawing::Size(51, 20);
			this->estate_type_label->TabIndex = 7;
			this->estate_type_label->Text = L"label1";
			this->estate_type_label->Visible = false;
			// 
			// Page_Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 952);
			this->Controls->Add(this->estate_type_label);
			this->Controls->Add(this->info_label);
			this->Controls->Add(this->search_button);
			this->Controls->Add(this->search_box);
			this->Controls->Add(this->ViewData);
			this->Controls->Add(this->Back2Home);
			this->Controls->Add(this->data_list);
			this->Name = L"Page_Search";
			this->Text = L"Search Items";
			this->Load += gcnew System::EventHandler(this, &Page_Search::Page_Search_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page_Search_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ViewData_Click(System::Object^ sender, System::EventArgs^ e);
	
	private:System::Void Back2Home_Click(System::Object^ sender, System::EventArgs^ e);
};
}
