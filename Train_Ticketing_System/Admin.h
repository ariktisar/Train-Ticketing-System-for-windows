#pragma once
#include "Allinfo.h"
namespace Train_Ticketing_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			list();
			Atimer->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  exit;

	private: System::Windows::Forms::Button^  book;



	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  rtb1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Timer^  Atimer;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Label^  SLsuper;
	private: System::Windows::Forms::Label^  Aclock;
	private: System::Windows::Forms::ComboBox^  clearcomb;
	private: System::Windows::Forms::Button^  clear;
	private: System::Windows::Forms::Button^  button7;
	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->book = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->rtb1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->Atimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->SLsuper = (gcnew System::Windows::Forms::Label());
			this->Aclock = (gcnew System::Windows::Forms::Label());
			this->clearcomb = (gcnew System::Windows::Forms::ComboBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 63);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(569, 327);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::SlateGray;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->exit);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->book);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->comboBox4);
			this->tabPage1->Controls->Add(this->comboBox3);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->ForeColor = System::Drawing::Color::Cyan;
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(561, 299);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Input Section";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(19, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::SkyBlue;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(468, 264);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(87, 23);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Admin::exit_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(106, 264);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SkyBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(289, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 23);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Print";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Admin::button6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(379, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// book
			// 
			this->book->BackColor = System::Drawing::Color::SkyBlue;
			this->book->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->book->ForeColor = System::Drawing::Color::Black;
			this->book->Location = System::Drawing::Point(196, 264);
			this->book->Name = L"book";
			this->book->Size = System::Drawing::Size(87, 23);
			this->book->TabIndex = 3;
			this->book->Text = L"Book now";
			this->book->UseVisualStyleBackColor = false;
			this->book->Click += gcnew System::EventHandler(this, &Admin::book_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(93, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(462, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox6->Location = System::Drawing::Point(93, 102);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(462, 20);
			this->textBox6->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Location = System::Drawing::Point(93, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(462, 20);
			this->textBox4->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox5->Location = System::Drawing::Point(93, 76);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(462, 20);
			this->textBox5->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Location = System::Drawing::Point(93, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(462, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Cyan;
			this->label6->Location = System::Drawing::Point(16, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Cyan;
			this->label5->Location = System::Drawing::Point(16, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Time";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Cyan;
			this->label4->Location = System::Drawing::Point(16, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Train";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Cyan;
			this->label9->Location = System::Drawing::Point(16, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Cyan;
			this->label1->Location = System::Drawing::Point(16, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Seat No.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Cyan;
			this->label8->Location = System::Drawing::Point(16, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Address";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Cyan;
			this->label10->Location = System::Drawing::Point(16, 106);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Contact No.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Cyan;
			this->label7->Location = System::Drawing::Point(16, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Cyan;
			this->label3->Location = System::Drawing::Point(16, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Destination";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::Indigo;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox4->Location = System::Drawing::Point(93, 237);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(462, 21);
			this->comboBox4->TabIndex = 0;
			this->comboBox4->Text = L"Choose One...";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::Indigo;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"12:00 AM", L"06:00 AM", L"12:00 PM", L"06:00 PM" });
			this->comboBox3->Location = System::Drawing::Point(93, 210);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(462, 21);
			this->comboBox3->TabIndex = 0;
			this->comboBox3->Text = L"Choose One...";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Indigo;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Silk City", L"Dhumketu", L"Padma", L"Nilshagor" });
			this->comboBox2->Location = System::Drawing::Point(93, 183);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(462, 21);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->Text = L"Choose One...";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Indigo;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Rajshahi", L"Dhaka", L"Chittagong", L"Khulna" });
			this->comboBox1->Location = System::Drawing::Point(93, 156);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(462, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Choose One...";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::comboBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->rtb1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(561, 299);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Print Section";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// rtb1
			// 
			this->rtb1->Location = System::Drawing::Point(7, 7);
			this->rtb1->Name = L"rtb1";
			this->rtb1->Size = System::Drawing::Size(548, 286);
			this->rtb1->TabIndex = 0;
			this->rtb1->Text = L"";
			this->rtb1->TextChanged += gcnew System::EventHandler(this, &Admin::rtb1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::SlateGray;
			this->listBox1->ForeColor = System::Drawing::Color::Cyan;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(595, 113);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(185, 277);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::listBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Location = System::Drawing::Point(595, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(98, 20);
			this->textBox2->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SkyBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(699, 85);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Admin::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &Admin::printPreviewDialog1_Load);
			// 
			// Atimer
			// 
			this->Atimer->Interval = 10;
			this->Atimer->Tick += gcnew System::EventHandler(this, &Admin::Atimer_Tick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SlateGray;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(595, 396);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(185, 28);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Refresh";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::SlateGray;
			this->logout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout->ForeColor = System::Drawing::Color::DarkOrange;
			this->logout->Location = System::Drawing::Point(595, 53);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(185, 28);
			this->logout->TabIndex = 11;
			this->logout->Text = L"Log Out";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &Admin::logout_Click);
			// 
			// SLsuper
			// 
			this->SLsuper->AutoSize = true;
			this->SLsuper->BackColor = System::Drawing::Color::SlateGray;
			this->SLsuper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SLsuper->ForeColor = System::Drawing::Color::DarkOrange;
			this->SLsuper->Location = System::Drawing::Point(206, 9);
			this->SLsuper->Name = L"SLsuper";
			this->SLsuper->Size = System::Drawing::Size(372, 31);
			this->SLsuper->TabIndex = 12;
			this->SLsuper->Text = L"Administrator Control Panal";
			// 
			// Aclock
			// 
			this->Aclock->AutoSize = true;
			this->Aclock->BackColor = System::Drawing::Color::SlateGray;
			this->Aclock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aclock->ForeColor = System::Drawing::Color::DarkOrange;
			this->Aclock->Location = System::Drawing::Point(270, 45);
			this->Aclock->Name = L"Aclock";
			this->Aclock->Size = System::Drawing::Size(66, 24);
			this->Aclock->TabIndex = 13;
			this->Aclock->Text = L"label2";
			// 
			// clearcomb
			// 
			this->clearcomb->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->clearcomb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearcomb->ForeColor = System::Drawing::Color::Indigo;
			this->clearcomb->FormattingEnabled = true;
			this->clearcomb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Dhumketu", L"Nilshagor", L"Padma", L"Silk City" });
			this->clearcomb->Location = System::Drawing::Point(12, 396);
			this->clearcomb->Name = L"clearcomb";
			this->clearcomb->Size = System::Drawing::Size(194, 28);
			this->clearcomb->TabIndex = 14;
			this->clearcomb->Text = L"Choose a train...";
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::SkyBlue;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::Black;
			this->clear->Location = System::Drawing::Point(212, 396);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(369, 28);
			this->clear->TabIndex = 15;
			this->clear->Text = L"Clear all seats of this train";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Admin::clear_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SkyBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(12, 430);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(768, 33);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Show information of all passangers";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Admin::button7_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(792, 475);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->clearcomb);
			this->Controls->Add(this->Aclock);
			this->Controls->Add(this->SLsuper);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::Color::Cyan;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
			 DateTime dt = DateTime::Now;
private: System::Void book_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ a = textBox1->Text;
	//char b[50]= a->ToCharArray;
	//array<Char>^ arr = a->ToCharArray();
	//char s = arr[0];
	//char ss[2] = { arr[1],arr[2] };
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into login.`user info`(UID,Name,Address,Age,`Contact No.`,`Seat No.`,Destination,Train,Time,Gender) values('" + this->textBox1->Text+" " +dt.ToString() + "','"+this->textBox3->Text+"','" + this->textBox4->Text + "','" + this->textBox5->Text + "','" + this->textBox6->Text + "','" + this->textBox1->Text + "','" + this->comboBox1->Text + "','" + this->comboBox2->Text + "','" + this->comboBox3->Text + "','" + this->comboBox4->Text + "') ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		//MessageBox::Show("All data has been saved successfully");
		while (myReader->Read())
		{
			
		}
		
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	String^ train = this->comboBox2->Text;
	String^ aconstring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ aconDataBase = gcnew MySqlConnection(aconstring);
	MySqlCommand^ acmdDataBase = gcnew MySqlCommand("Update train."+this->comboBox2->Text+" set "+train[0] + a[1]+a[2] + "='" + this->textBox1->Text + dt.ToString() + "' where Boggie='" + a[0] + "' ;", aconDataBase);
	MySqlDataReader^ amyReader;
	try {
		aconDataBase->Open();
		amyReader = acmdDataBase->ExecuteReader();
		MessageBox::Show("All data has been saved successfully");
		while (amyReader->Read())
		{

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	rtb1->AppendText("--------------Ticket---------------\n");
	rtb1->AppendText("Name: ");
	rtb1->AppendText(textBox3->Text);
	rtb1->AppendText("\nAddress: ");
	rtb1->AppendText(textBox4->Text);
	rtb1->AppendText("\nAge: ");
	rtb1->AppendText(textBox5->Text);
	rtb1->AppendText("\nContact No.: ");
	rtb1->AppendText(textBox6->Text);
	rtb1->AppendText("\nSeat No.: ");
	rtb1->AppendText(textBox1->Text);
	rtb1->AppendText("\nDestination: ");
	rtb1->AppendText(comboBox1->Text);
	rtb1->AppendText("\nTrain: ");
	rtb1->AppendText(comboBox2->Text);
	rtb1->AppendText("\nTime: ");
	rtb1->AppendText(comboBox3->Text);
	rtb1->AppendText("\nGender: ");
	rtb1->AppendText(comboBox4->Text);
	rtb1->AppendText("\nTicket Price: 500 Taka");
}
private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox1->Text = "";
	comboBox1->Text = "Choose One...";
	comboBox2->Text = "Choose One...";
	comboBox3->Text = "Choose One...";
	comboBox4->Text = "Choose One...";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	{
		int index = listBox1->FindString(textBox2->Text, -1);
		if (index != -1)
		{
			listBox1->SetSelected(index, true);
		}
	}
}
private: void list(void){
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" SELECT * from login.`user info`;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{
			String^ ID;
			String^ name= myReader->GetString("Name");
			ID = myReader->GetString("UID");
			listBox1->Items->Add(ID);
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ select = listBox1->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" SELECT * from login.`user info` where UID='"+select+"';", conDataBase);
	MySqlDataReader^ myReader;
	textBox2->Text = listBox1->Text;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if(myReader->Read())
		{
			String^ name = myReader->GetString("Name");
			textBox3->Text = name;
			String^ ads = myReader->GetString("Address");
			textBox4->Text = ads;
			String^ age = myReader->GetString("Age");
			textBox5->Text = age;
			String^ cont = myReader->GetString("Contact No.");
			textBox6->Text = cont;
			String^ seat = myReader->GetString("Seat No.");
			textBox1->Text = seat;
			String^ dest = myReader->GetString("Destination");
			comboBox1->Text = dest;
			String^ train = myReader->GetString("Train");
			comboBox2->Text = train;
			String^ time = myReader->GetString("Time");
			comboBox3->Text = time;
			String^ gend = myReader->GetString("Gender");
			comboBox4->Text = gend;
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from login.`user info` where UID='" + this->textBox2->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Selected data has been deleted successfully");
		while (myReader->Read())
		{

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update login.`user info`set Name='" + this->textBox3->Text + "',Address='" + this->textBox4->Text + "',Age='" + this->textBox5->Text + "',`Contact No.`='" + this->textBox6->Text + "',`Seat No.`='" + this->textBox1->Text + "',Destination='" + this->comboBox1->Text + "',Train='" + this->comboBox2->Text + "',Time='" + this->comboBox3->Text + "',Gender='" + this->comboBox4->Text + "'where UID='" + this->textBox2->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("All data has been saved successfully");
		while (myReader->Read())
		{

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void rtb1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	String^ doc = rtb1->Text;
	System::Drawing::Font^ docf = gcnew System::Drawing::Font("Arial",20);
	SolidBrush^ drawb = gcnew SolidBrush(Color::Black);
	PointF drawp = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(doc,docf,drawb,drawp);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
	list();
}
private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void printPreviewDialog1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Atimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime Adt = DateTime::Now;
	this->Aclock->Text = Adt.ToString();
}
private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from train." + this->clearcomb->Text + " where Boggie='A' or Boggie='B' or Boggie='C' or Boggie='D' or Boggie='E' or Boggie='F' or Boggie='G' or Boggie='H' or Boggie='I';", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Selected data has been deleted successfully");
		while (myReader->Read())
		{

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Allinfo^ f1 = gcnew Allinfo();
	f1->ShowDialog();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		comboBox2->SelectedIndex = comboBox1->SelectedIndex;
		comboBox3->SelectedIndex = comboBox1->SelectedIndex;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex = comboBox2->SelectedIndex;
	comboBox3->SelectedIndex = comboBox2->SelectedIndex;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex = comboBox3->SelectedIndex;
	comboBox2->SelectedIndex = comboBox3->SelectedIndex;
}

};
}
