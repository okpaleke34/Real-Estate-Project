#pragma once


namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Home
	/// </summary>
	public ref class Page_Home : public System::Windows::Forms::Form
	{
	public:
		Page_Home(void)
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
		~Page_Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ apartement_label;
	private: System::Windows::Forms::Label^ house_label;
	protected:


	private: System::Windows::Forms::Label^ land_label;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ link_to_admin;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->apartement_label = (gcnew System::Windows::Forms::Label());
			this->house_label = (gcnew System::Windows::Forms::Label());
			this->land_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->link_to_admin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// apartement_label
			// 
			this->apartement_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->apartement_label->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->apartement_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->apartement_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apartement_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->apartement_label->Location = System::Drawing::Point(101, 165);
			this->apartement_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->apartement_label->Name = L"apartement_label";
			this->apartement_label->Size = System::Drawing::Size(1081, 272);
			this->apartement_label->TabIndex = 0;
			this->apartement_label->Text = L"APARTMENT";
			this->apartement_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->apartement_label->Click += gcnew System::EventHandler(this, &Page_Home::apartment_label_Click);
			// 
			// house_label
			// 
			this->house_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->house_label->BackColor = System::Drawing::Color::Navy;
			this->house_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->house_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->house_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->house_label->Location = System::Drawing::Point(97, 471);
			this->house_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->house_label->Name = L"house_label";
			this->house_label->Size = System::Drawing::Size(503, 349);
			this->house_label->TabIndex = 1;
			this->house_label->Text = L"HOUSES";
			this->house_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->house_label->Click += gcnew System::EventHandler(this, &Page_Home::house_label_Click);
			// 
			// land_label
			// 
			this->land_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->land_label->BackColor = System::Drawing::Color::DarkRed;
			this->land_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->land_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->land_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->land_label->Location = System::Drawing::Point(629, 471);
			this->land_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->land_label->Name = L"land_label";
			this->land_label->Size = System::Drawing::Size(553, 349);
			this->land_label->TabIndex = 2;
			this->land_label->Text = L"LAND";
			this->land_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->land_label->Click += gcnew System::EventHandler(this, &Page_Home::land_label_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(266, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(700, 50);
			this->label1->TabIndex = 3;
			this->label1->Text = L"WELCOME TO HUNDE REAL ESTATE SYSTEM.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(157, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(879, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"We offer wide range of services such as buying apartment, buying houses and buyin"
				L"g land";
			// 
			// link_to_admin
			// 
			this->link_to_admin->AutoSize = true;
			this->link_to_admin->Location = System::Drawing::Point(1091, 862);
			this->link_to_admin->Name = L"link_to_admin";
			this->link_to_admin->Size = System::Drawing::Size(143, 30);
			this->link_to_admin->TabIndex = 6;
			this->link_to_admin->TabStop = true;
			this->link_to_admin->Text = L"Admin Page";
			this->link_to_admin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Page_Home::link_to_admin_LinkClicked);
			// 
			// Page_Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 955);
			this->Controls->Add(this->link_to_admin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->land_label);
			this->Controls->Add(this->house_label);
			this->Controls->Add(this->apartement_label);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Page_Home";
			this->Text = L"Page_Home";
			this->Load += gcnew System::EventHandler(this, &Page_Home::Page_Home_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page_Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void apartment_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void land_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void house_label_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void admin_page_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void link_to_admin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}
