#pragma once

#include "RealEstate.h"

#define LAND "lands.csv"

namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Admin_Login
	/// </summary>
	public ref class Page_Admin_Login : public System::Windows::Forms::Form
	{
	public:
		RealEstate* utils = new RealEstate(LAND);
		Page_Admin_Login(void)
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
		~Page_Admin_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ password_input;
	protected:
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::TextBox^ username_input;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ goBack;
	private: System::Windows::Forms::Button^ login_button;

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
			this->password_input = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_input = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->goBack = (gcnew System::Windows::Forms::Button());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// password_input
			// 
			this->password_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password_input->Location = System::Drawing::Point(276, 468);
			this->password_input->Multiline = true;
			this->password_input->Name = L"password_input";
			this->password_input->PasswordChar = '*';
			this->password_input->Size = System::Drawing::Size(581, 48);
			this->password_input->TabIndex = 18;
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->Location = System::Drawing::Point(77, 478);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(151, 25);
			this->password_label->TabIndex = 17;
			this->password_label->Text = L"PASSWORD: ";
			// 
			// username_input
			// 
			this->username_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->username_input->Location = System::Drawing::Point(276, 373);
			this->username_input->Multiline = true;
			this->username_input->Name = L"username_input";
			this->username_input->Size = System::Drawing::Size(581, 48);
			this->username_input->TabIndex = 16;
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(77, 383);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(145, 25);
			this->username_label->TabIndex = 15;
			this->username_label->Text = L"USERNAME: ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(382, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 51);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ADMIN AUTHENTICATOR";
			// 
			// goBack
			// 
			this->goBack->BackColor = System::Drawing::Color::IndianRed;
			this->goBack->ForeColor = System::Drawing::SystemColors::Control;
			this->goBack->Location = System::Drawing::Point(62, 642);
			this->goBack->Name = L"goBack";
			this->goBack->Size = System::Drawing::Size(144, 59);
			this->goBack->TabIndex = 13;
			this->goBack->Text = L"Go back";
			this->goBack->UseVisualStyleBackColor = false;
			this->goBack->Click += gcnew System::EventHandler(this, &Page_Admin_Login::goBack_Click);
			// 
			// login_button
			// 
			this->login_button->BackColor = System::Drawing::SystemColors::Highlight;
			this->login_button->ForeColor = System::Drawing::SystemColors::Control;
			this->login_button->Location = System::Drawing::Point(965, 642);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(144, 59);
			this->login_button->TabIndex = 12;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = false;
			this->login_button->Click += gcnew System::EventHandler(this, &Page_Admin_Login::login_button_Click);
			// 
			// Page_Admin_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1286, 970);
			this->Controls->Add(this->password_input);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_input);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->goBack);
			this->Controls->Add(this->login_button);
			this->Name = L"Page_Admin_Login";
			this->Text = L"Admin Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void goBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
