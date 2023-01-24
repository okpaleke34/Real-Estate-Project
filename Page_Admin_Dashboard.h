#pragma once

namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Admin_Dashboard
	/// </summary>
	public ref class Page_Admin_Dashboard : public System::Windows::Forms::Form
	{
	public:
		Page_Admin_Dashboard(void)
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
		~Page_Admin_Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ manage_land_label;
	protected:
	private: System::Windows::Forms::Label^ manage_house_label;
	private: System::Windows::Forms::Label^ manage_apartement_label;
	private: System::Windows::Forms::Label^ add_property_label;

	private: System::Windows::Forms::Button^ logout;



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
			this->manage_land_label = (gcnew System::Windows::Forms::Label());
			this->manage_house_label = (gcnew System::Windows::Forms::Label());
			this->manage_apartement_label = (gcnew System::Windows::Forms::Label());
			this->add_property_label = (gcnew System::Windows::Forms::Label());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// manage_land_label
			// 
			this->manage_land_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->manage_land_label->BackColor = System::Drawing::Color::DarkRed;
			this->manage_land_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->manage_land_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manage_land_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->manage_land_label->Location = System::Drawing::Point(622, 463);
			this->manage_land_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manage_land_label->Name = L"manage_land_label";
			this->manage_land_label->Size = System::Drawing::Size(553, 349);
			this->manage_land_label->TabIndex = 5;
			this->manage_land_label->Text = L"MANAGE LANDS";
			this->manage_land_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->manage_land_label->Click += gcnew System::EventHandler(this, &Page_Admin_Dashboard::manage_land_label_Click);
			// 
			// manage_house_label
			// 
			this->manage_house_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->manage_house_label->BackColor = System::Drawing::Color::Navy;
			this->manage_house_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->manage_house_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manage_house_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->manage_house_label->Location = System::Drawing::Point(55, 463);
			this->manage_house_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manage_house_label->Name = L"manage_house_label";
			this->manage_house_label->Size = System::Drawing::Size(538, 349);
			this->manage_house_label->TabIndex = 4;
			this->manage_house_label->Text = L"MANAGE HOUSES";
			this->manage_house_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->manage_house_label->Click += gcnew System::EventHandler(this, &Page_Admin_Dashboard::manage_house_label_Click);
			// 
			// manage_apartement_label
			// 
			this->manage_apartement_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->manage_apartement_label->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->manage_apartement_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->manage_apartement_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->manage_apartement_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->manage_apartement_label->Location = System::Drawing::Point(627, 143);
			this->manage_apartement_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manage_apartement_label->Name = L"manage_apartement_label";
			this->manage_apartement_label->Size = System::Drawing::Size(548, 286);
			this->manage_apartement_label->TabIndex = 3;
			this->manage_apartement_label->Text = L"MANAGE APARTMENTS";
			this->manage_apartement_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->manage_apartement_label->Click += gcnew System::EventHandler(this, &Page_Admin_Dashboard::manage_apartement_label_Click);
			// 
			// add_property_label
			// 
			this->add_property_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->add_property_label->BackColor = System::Drawing::Color::LimeGreen;
			this->add_property_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_property_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_property_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->add_property_label->Location = System::Drawing::Point(61, 143);
			this->add_property_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_property_label->Name = L"add_property_label";
			this->add_property_label->Size = System::Drawing::Size(532, 286);
			this->add_property_label->TabIndex = 6;
			this->add_property_label->Text = L"ADD PROPERTY";
			this->add_property_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->add_property_label->Click += gcnew System::EventHandler(this, &Page_Admin_Dashboard::add_property_label_Click);
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::IndianRed;
			this->logout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->logout->Location = System::Drawing::Point(72, 889);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(123, 48);
			this->logout->TabIndex = 7;
			this->logout->Text = L"Log Out";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &Page_Admin_Dashboard::Logout_Click);
			// 
			// Page_Admin_Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1265, 969);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->add_property_label);
			this->Controls->Add(this->manage_land_label);
			this->Controls->Add(this->manage_house_label);
			this->Controls->Add(this->manage_apartement_label);
			this->Name = L"Page_Admin_Dashboard";
			this->Text = L"Admin Dashboard";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Logout_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void manage_apartement_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void manage_land_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void manage_house_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_property_label_Click(System::Object^ sender, System::EventArgs^ e);
};
}
