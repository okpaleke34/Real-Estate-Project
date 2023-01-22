#pragma once
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
using namespace System::Drawing::Printing;

namespace RealEstateProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_ThankYou
	/// </summary>
	public ref class Page_ThankYou : public System::Windows::Forms::Form
	{

	private: int itemID;
	private: String^ estate_type;
	private: String^ fullname;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ user_details_textbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ type;
	private: System::Windows::Forms::ColumnHeader^ dimension;
	private: System::Windows::Forms::ColumnHeader^ location;
	private: System::Windows::Forms::ColumnHeader^ price;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ go2Main;


	private: String^ email;
	public:
		Page_ThankYou(int item, String^ type, String^ fullname, String^ email) 
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
		~Page_ThankYou()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->user_details_textbox = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->type = (gcnew System::Windows::Forms::ColumnHeader());
			this->dimension = (gcnew System::Windows::Forms::ColumnHeader());
			this->location = (gcnew System::Windows::Forms::ColumnHeader());
			this->price = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->go2Main = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(765, 85);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(416, 171);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"Hunde Real Estate System\n44-100\nNo. 6 Kujawska, Gliwice\nPoland\n25 Jan 2023";
			// 
			// user_details_textbox
			// 
			this->user_details_textbox->BackColor = System::Drawing::SystemColors::Menu;
			this->user_details_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_details_textbox->Enabled = false;
			this->user_details_textbox->Location = System::Drawing::Point(70, 220);
			this->user_details_textbox->Name = L"user_details_textbox";
			this->user_details_textbox->Size = System::Drawing::Size(416, 129);
			this->user_details_textbox->TabIndex = 3;
			this->user_details_textbox->Text = L"[name]\n[e-mail]\nPoland";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 56);
			this->label1->TabIndex = 4;
			this->label1->Text = L"RECEIPT";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Enabled = false;
			this->richTextBox3->Location = System::Drawing::Point(70, 732);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(416, 171);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"THANK YOU FOR YOUR PATRONAGE\n";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->type, this->dimension,
					this->location, this->price
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(70, 355);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(955, 273);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Page_ThankYou::listView1_SelectedIndexChanged);
			// 
			// type
			// 
			this->type->Text = L"TYPE";
			this->type->Width = 135;
			// 
			// dimension
			// 
			this->dimension->Text = L"DIMENSION";
			this->dimension->Width = 169;
			// 
			// location
			// 
			this->location->Text = L"LOCATION";
			this->location->Width = 361;
			// 
			// price
			// 
			this->price->Text = L"PRICE";
			this->price->Width = 126;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(798, 661);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Total: ";
			// 
			// go2Main
			// 
			this->go2Main->BackColor = System::Drawing::SystemColors::Highlight;
			this->go2Main->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->go2Main->Location = System::Drawing::Point(867, 842);
			this->go2Main->Name = L"go2Main";
			this->go2Main->Size = System::Drawing::Size(158, 61);
			this->go2Main->TabIndex = 8;
			this->go2Main->Text = L"Go to Menu";
			this->go2Main->UseVisualStyleBackColor = false;
			// 
			// Page_ThankYou
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 945);
			this->Controls->Add(this->go2Main);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->user_details_textbox);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Page_ThankYou";
			this->Text = L"Thank You For Patronage";
			this->Load += gcnew System::EventHandler(this, &Page_ThankYou::Page_ThankYou_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Page_ThankYou_Load(System::Object^ sender, System::EventArgs^ e) {
		this->user_details_textbox->Text = this->fullname + "\n"+this->email + "\nPoland";
		/*PrintDocument^ printDoc = gcnew PrintDocument();
		printDoc->PrintPage += gcnew PrintPageEventHandler(this, &Page_ThankYou::printDoc_PrintPage);
		printDoc->Print();*/
	}
	private: System::Void printDoc_PrintPage(Object^ sender, PrintPageEventArgs^ e)
	{
		/*Bitmap^ bitmap = gcnew Bitmap(this->Width, this->Height);
		this->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, this->Width, this->Height));
		e->Graphics->DrawImage(bitmap, 0, 0);
		e->HasMorePages = false;*/
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
