#pragma once


namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
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
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// apartement_label
			// 
			this->apartement_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->apartement_label->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->apartement_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->apartement_label->Location = System::Drawing::Point(95, 92);
			this->apartement_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->apartement_label->Name = L"apartement_label";
			this->apartement_label->Size = System::Drawing::Size(1087, 333);
			this->apartement_label->TabIndex = 0;
			this->apartement_label->Text = L"APARTMENT";
			this->apartement_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->apartement_label->Click += gcnew System::EventHandler(this, &Home::apartment_label_Click);
			// 
			// house_label
			// 
			this->house_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->house_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->house_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->house_label->Location = System::Drawing::Point(97, 446);
			this->house_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->house_label->Name = L"house_label";
			this->house_label->Size = System::Drawing::Size(502, 429);
			this->house_label->TabIndex = 1;
			this->house_label->Text = L"HOUSES";
			this->house_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->house_label->Click += gcnew System::EventHandler(this, &Home::house_label_Click);
			// 
			// land_label
			// 
			this->land_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->land_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->land_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->land_label->Location = System::Drawing::Point(629, 446);
			this->land_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->land_label->Name = L"land_label";
			this->land_label->Size = System::Drawing::Size(553, 429);
			this->land_label->TabIndex = 2;
			this->land_label->Text = L"LAND";
			this->land_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->land_label->Click += gcnew System::EventHandler(this, &Home::land_label_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(93, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(941, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome to Hunde Real Estate Software. We offer wide range of services such as bu"
				L"ying apartment, buying houses and buying land";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(1087, 894);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(95, 20);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Admin Page";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 955);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->land_label);
			this->Controls->Add(this->house_label);
			this->Controls->Add(this->apartement_label);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void apartment_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void land_label_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void house_label_Click(System::Object^ sender, System::EventArgs^ e);
};
}
