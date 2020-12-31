#pragma once

namespace Train_Ticketing_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Superviser
	/// </summary>
	public ref class Superviser : public System::Windows::Forms::Form
	{
	public:
		Superviser(void)
		{
			InitializeComponent();
			Stimer->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Superviser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  Stab;
	private: System::Windows::Forms::TabPage^  STP1;
	protected:

	protected:


	private: System::Windows::Forms::Button^  Sexit;


	private: System::Windows::Forms::Button^  Sprint;
	private: System::Windows::Forms::Button^  Sreset;


	private: System::Windows::Forms::Button^  Sbook;
	private: System::Windows::Forms::TextBox^  Sseat;


	private: System::Windows::Forms::TextBox^  Scont;

	private: System::Windows::Forms::TextBox^  Sadd;
	private: System::Windows::Forms::TextBox^  Sage;


	private: System::Windows::Forms::TextBox^  Sname;
	private: System::Windows::Forms::Label^  SLgend;


	private: System::Windows::Forms::Label^  SLtime;

	private: System::Windows::Forms::Label^  SLtrain;

	private: System::Windows::Forms::Label^  SLname;
	private: System::Windows::Forms::Label^  SLseat;


	private: System::Windows::Forms::Label^  SLadd;
	private: System::Windows::Forms::Label^  SLcont;


	private: System::Windows::Forms::Label^  SLage;
	private: System::Windows::Forms::Label^  SLdest;


	private: System::Windows::Forms::ComboBox^  Sgend;

	private: System::Windows::Forms::ComboBox^  Stime;

	private: System::Windows::Forms::ComboBox^  Strain;

	private: System::Windows::Forms::ComboBox^  Sdest;
	private: System::Windows::Forms::TabPage^  STP2;


	private: System::Windows::Forms::RichTextBox^  Srtb1;

	private: System::Windows::Forms::Button^  Slog;
	private: System::Windows::Forms::Label^  SLsuper;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog2;
	private: System::Drawing::Printing::PrintDocument^  printDocument2;
	private: System::Windows::Forms::Label^  Sclock;
	private: System::Windows::Forms::Timer^  Stimer;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Superviser::typeid));
			this->Stab = (gcnew System::Windows::Forms::TabControl());
			this->STP1 = (gcnew System::Windows::Forms::TabPage());
			this->Sexit = (gcnew System::Windows::Forms::Button());
			this->Sprint = (gcnew System::Windows::Forms::Button());
			this->Sreset = (gcnew System::Windows::Forms::Button());
			this->Sbook = (gcnew System::Windows::Forms::Button());
			this->Sseat = (gcnew System::Windows::Forms::TextBox());
			this->Scont = (gcnew System::Windows::Forms::TextBox());
			this->Sadd = (gcnew System::Windows::Forms::TextBox());
			this->Sage = (gcnew System::Windows::Forms::TextBox());
			this->Sname = (gcnew System::Windows::Forms::TextBox());
			this->SLgend = (gcnew System::Windows::Forms::Label());
			this->SLtime = (gcnew System::Windows::Forms::Label());
			this->SLtrain = (gcnew System::Windows::Forms::Label());
			this->SLname = (gcnew System::Windows::Forms::Label());
			this->SLseat = (gcnew System::Windows::Forms::Label());
			this->SLadd = (gcnew System::Windows::Forms::Label());
			this->SLcont = (gcnew System::Windows::Forms::Label());
			this->SLage = (gcnew System::Windows::Forms::Label());
			this->SLdest = (gcnew System::Windows::Forms::Label());
			this->Sgend = (gcnew System::Windows::Forms::ComboBox());
			this->Stime = (gcnew System::Windows::Forms::ComboBox());
			this->Strain = (gcnew System::Windows::Forms::ComboBox());
			this->Sdest = (gcnew System::Windows::Forms::ComboBox());
			this->STP2 = (gcnew System::Windows::Forms::TabPage());
			this->Srtb1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Slog = (gcnew System::Windows::Forms::Button());
			this->SLsuper = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog2 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->Sclock = (gcnew System::Windows::Forms::Label());
			this->Stimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Stab->SuspendLayout();
			this->STP1->SuspendLayout();
			this->STP2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Stab
			// 
			this->Stab->Controls->Add(this->STP1);
			this->Stab->Controls->Add(this->STP2);
			this->Stab->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stab->Location = System::Drawing::Point(12, 60);
			this->Stab->Name = L"Stab";
			this->Stab->SelectedIndex = 0;
			this->Stab->Size = System::Drawing::Size(569, 327);
			this->Stab->TabIndex = 7;
			// 
			// STP1
			// 
			this->STP1->BackColor = System::Drawing::Color::SlateGray;
			this->STP1->Controls->Add(this->Sexit);
			this->STP1->Controls->Add(this->Sprint);
			this->STP1->Controls->Add(this->Sreset);
			this->STP1->Controls->Add(this->Sbook);
			this->STP1->Controls->Add(this->Sseat);
			this->STP1->Controls->Add(this->Scont);
			this->STP1->Controls->Add(this->Sadd);
			this->STP1->Controls->Add(this->Sage);
			this->STP1->Controls->Add(this->Sname);
			this->STP1->Controls->Add(this->SLgend);
			this->STP1->Controls->Add(this->SLtime);
			this->STP1->Controls->Add(this->SLtrain);
			this->STP1->Controls->Add(this->SLname);
			this->STP1->Controls->Add(this->SLseat);
			this->STP1->Controls->Add(this->SLadd);
			this->STP1->Controls->Add(this->SLcont);
			this->STP1->Controls->Add(this->SLage);
			this->STP1->Controls->Add(this->SLdest);
			this->STP1->Controls->Add(this->Sgend);
			this->STP1->Controls->Add(this->Stime);
			this->STP1->Controls->Add(this->Strain);
			this->STP1->Controls->Add(this->Sdest);
			this->STP1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STP1->ForeColor = System::Drawing::Color::Cyan;
			this->STP1->Location = System::Drawing::Point(4, 24);
			this->STP1->Name = L"STP1";
			this->STP1->Padding = System::Windows::Forms::Padding(3);
			this->STP1->Size = System::Drawing::Size(561, 299);
			this->STP1->TabIndex = 0;
			this->STP1->Text = L"Input Section";
			// 
			// Sexit
			// 
			this->Sexit->BackColor = System::Drawing::Color::SkyBlue;
			this->Sexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sexit->ForeColor = System::Drawing::Color::Black;
			this->Sexit->Location = System::Drawing::Point(428, 264);
			this->Sexit->Name = L"Sexit";
			this->Sexit->Size = System::Drawing::Size(128, 23);
			this->Sexit->TabIndex = 3;
			this->Sexit->Text = L"Exit";
			this->Sexit->UseVisualStyleBackColor = false;
			this->Sexit->Click += gcnew System::EventHandler(this, &Superviser::Sexit_Click);
			// 
			// Sprint
			// 
			this->Sprint->BackColor = System::Drawing::Color::SkyBlue;
			this->Sprint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sprint->ForeColor = System::Drawing::Color::Black;
			this->Sprint->Location = System::Drawing::Point(154, 264);
			this->Sprint->Name = L"Sprint";
			this->Sprint->Size = System::Drawing::Size(125, 23);
			this->Sprint->TabIndex = 3;
			this->Sprint->Text = L"Print";
			this->Sprint->UseVisualStyleBackColor = false;
			this->Sprint->Click += gcnew System::EventHandler(this, &Superviser::Sprint_Click);
			// 
			// Sreset
			// 
			this->Sreset->BackColor = System::Drawing::Color::SkyBlue;
			this->Sreset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sreset->ForeColor = System::Drawing::Color::Black;
			this->Sreset->Location = System::Drawing::Point(294, 264);
			this->Sreset->Name = L"Sreset";
			this->Sreset->Size = System::Drawing::Size(124, 23);
			this->Sreset->TabIndex = 3;
			this->Sreset->Text = L"Reset";
			this->Sreset->UseVisualStyleBackColor = false;
			this->Sreset->Click += gcnew System::EventHandler(this, &Superviser::Sreset_Click);
			// 
			// Sbook
			// 
			this->Sbook->BackColor = System::Drawing::Color::SkyBlue;
			this->Sbook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sbook->ForeColor = System::Drawing::Color::Black;
			this->Sbook->Location = System::Drawing::Point(20, 264);
			this->Sbook->Name = L"Sbook";
			this->Sbook->Size = System::Drawing::Size(128, 23);
			this->Sbook->TabIndex = 3;
			this->Sbook->Text = L"Book now";
			this->Sbook->UseVisualStyleBackColor = false;
			this->Sbook->Click += gcnew System::EventHandler(this, &Superviser::Sbook_Click);
			// 
			// Sseat
			// 
			this->Sseat->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sseat->Location = System::Drawing::Point(93, 128);
			this->Sseat->Name = L"Sseat";
			this->Sseat->Size = System::Drawing::Size(462, 20);
			this->Sseat->TabIndex = 2;
			// 
			// Scont
			// 
			this->Scont->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Scont->Location = System::Drawing::Point(93, 102);
			this->Scont->Name = L"Scont";
			this->Scont->Size = System::Drawing::Size(462, 20);
			this->Scont->TabIndex = 2;
			// 
			// Sadd
			// 
			this->Sadd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sadd->Location = System::Drawing::Point(93, 51);
			this->Sadd->Name = L"Sadd";
			this->Sadd->Size = System::Drawing::Size(462, 20);
			this->Sadd->TabIndex = 2;
			// 
			// Sage
			// 
			this->Sage->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sage->Location = System::Drawing::Point(93, 76);
			this->Sage->Name = L"Sage";
			this->Sage->Size = System::Drawing::Size(462, 20);
			this->Sage->TabIndex = 2;
			// 
			// Sname
			// 
			this->Sname->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sname->Location = System::Drawing::Point(93, 25);
			this->Sname->Name = L"Sname";
			this->Sname->Size = System::Drawing::Size(462, 20);
			this->Sname->TabIndex = 2;
			// 
			// SLgend
			// 
			this->SLgend->AutoSize = true;
			this->SLgend->ForeColor = System::Drawing::Color::Cyan;
			this->SLgend->Location = System::Drawing::Point(16, 240);
			this->SLgend->Name = L"SLgend";
			this->SLgend->Size = System::Drawing::Size(48, 13);
			this->SLgend->TabIndex = 1;
			this->SLgend->Text = L"Gender";
			// 
			// SLtime
			// 
			this->SLtime->AutoSize = true;
			this->SLtime->ForeColor = System::Drawing::Color::Cyan;
			this->SLtime->Location = System::Drawing::Point(16, 213);
			this->SLtime->Name = L"SLtime";
			this->SLtime->Size = System::Drawing::Size(34, 13);
			this->SLtime->TabIndex = 1;
			this->SLtime->Text = L"Time";
			// 
			// SLtrain
			// 
			this->SLtrain->AutoSize = true;
			this->SLtrain->ForeColor = System::Drawing::Color::Cyan;
			this->SLtrain->Location = System::Drawing::Point(16, 186);
			this->SLtrain->Name = L"SLtrain";
			this->SLtrain->Size = System::Drawing::Size(36, 13);
			this->SLtrain->TabIndex = 1;
			this->SLtrain->Text = L"Train";
			// 
			// SLname
			// 
			this->SLname->AutoSize = true;
			this->SLname->ForeColor = System::Drawing::Color::Cyan;
			this->SLname->Location = System::Drawing::Point(16, 25);
			this->SLname->Name = L"SLname";
			this->SLname->Size = System::Drawing::Size(39, 13);
			this->SLname->TabIndex = 1;
			this->SLname->Text = L"Name";
			// 
			// SLseat
			// 
			this->SLseat->AutoSize = true;
			this->SLseat->ForeColor = System::Drawing::Color::Cyan;
			this->SLseat->Location = System::Drawing::Point(16, 132);
			this->SLseat->Name = L"SLseat";
			this->SLseat->Size = System::Drawing::Size(57, 13);
			this->SLseat->TabIndex = 1;
			this->SLseat->Text = L"Seat No.";
			// 
			// SLadd
			// 
			this->SLadd->AutoSize = true;
			this->SLadd->ForeColor = System::Drawing::Color::Cyan;
			this->SLadd->Location = System::Drawing::Point(16, 52);
			this->SLadd->Name = L"SLadd";
			this->SLadd->Size = System::Drawing::Size(52, 13);
			this->SLadd->TabIndex = 1;
			this->SLadd->Text = L"Address";
			// 
			// SLcont
			// 
			this->SLcont->AutoSize = true;
			this->SLcont->ForeColor = System::Drawing::Color::Cyan;
			this->SLcont->Location = System::Drawing::Point(16, 106);
			this->SLcont->Name = L"SLcont";
			this->SLcont->Size = System::Drawing::Size(75, 13);
			this->SLcont->TabIndex = 1;
			this->SLcont->Text = L"Contact No.";
			// 
			// SLage
			// 
			this->SLage->AutoSize = true;
			this->SLage->ForeColor = System::Drawing::Color::Cyan;
			this->SLage->Location = System::Drawing::Point(16, 79);
			this->SLage->Name = L"SLage";
			this->SLage->Size = System::Drawing::Size(29, 13);
			this->SLage->TabIndex = 1;
			this->SLage->Text = L"Age";
			// 
			// SLdest
			// 
			this->SLdest->AutoSize = true;
			this->SLdest->ForeColor = System::Drawing::Color::Cyan;
			this->SLdest->Location = System::Drawing::Point(16, 159);
			this->SLdest->Name = L"SLdest";
			this->SLdest->Size = System::Drawing::Size(71, 13);
			this->SLdest->TabIndex = 1;
			this->SLdest->Text = L"Destination";
			// 
			// Sgend
			// 
			this->Sgend->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sgend->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sgend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sgend->ForeColor = System::Drawing::Color::Indigo;
			this->Sgend->FormattingEnabled = true;
			this->Sgend->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->Sgend->Location = System::Drawing::Point(93, 237);
			this->Sgend->Name = L"Sgend";
			this->Sgend->Size = System::Drawing::Size(462, 21);
			this->Sgend->TabIndex = 0;
			this->Sgend->Text = L"Choose One...";
			// 
			// Stime
			// 
			this->Stime->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Stime->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Stime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stime->ForeColor = System::Drawing::Color::Indigo;
			this->Stime->FormattingEnabled = true;
			this->Stime->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"12:00 AM", L"06:00 AM", L"12:00 PM", L"06:00 PM" });
			this->Stime->Location = System::Drawing::Point(93, 210);
			this->Stime->Name = L"Stime";
			this->Stime->Size = System::Drawing::Size(462, 21);
			this->Stime->TabIndex = 0;
			this->Stime->Text = L"Choose One...";
			// 
			// Strain
			// 
			this->Strain->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Strain->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Strain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Strain->ForeColor = System::Drawing::Color::Indigo;
			this->Strain->FormattingEnabled = true;
			this->Strain->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Silk City", L"Dhumketu", L"Padma", L"Nilshagor" });
			this->Strain->Location = System::Drawing::Point(93, 183);
			this->Strain->Name = L"Strain";
			this->Strain->Size = System::Drawing::Size(462, 21);
			this->Strain->TabIndex = 0;
			this->Strain->Text = L"Choose One...";
			// 
			// Sdest
			// 
			this->Sdest->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Sdest->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sdest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sdest->ForeColor = System::Drawing::Color::Indigo;
			this->Sdest->FormattingEnabled = true;
			this->Sdest->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Rajshahi", L"Dhaka", L"Chittagong", L"Khulna" });
			this->Sdest->Location = System::Drawing::Point(93, 156);
			this->Sdest->Name = L"Sdest";
			this->Sdest->Size = System::Drawing::Size(462, 21);
			this->Sdest->TabIndex = 0;
			this->Sdest->Text = L"Choose One...";
			// 
			// STP2
			// 
			this->STP2->Controls->Add(this->Srtb1);
			this->STP2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STP2->Location = System::Drawing::Point(4, 24);
			this->STP2->Name = L"STP2";
			this->STP2->Padding = System::Windows::Forms::Padding(3);
			this->STP2->Size = System::Drawing::Size(561, 299);
			this->STP2->TabIndex = 1;
			this->STP2->Text = L"Print Section";
			this->STP2->UseVisualStyleBackColor = true;
			// 
			// Srtb1
			// 
			this->Srtb1->Location = System::Drawing::Point(7, 7);
			this->Srtb1->Name = L"Srtb1";
			this->Srtb1->Size = System::Drawing::Size(548, 286);
			this->Srtb1->TabIndex = 0;
			this->Srtb1->Text = L"";
			// 
			// Slog
			// 
			this->Slog->BackColor = System::Drawing::Color::SlateGray;
			this->Slog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Slog->ForeColor = System::Drawing::Color::DarkOrange;
			this->Slog->Location = System::Drawing::Point(427, 9);
			this->Slog->Name = L"Slog";
			this->Slog->Size = System::Drawing::Size(154, 31);
			this->Slog->TabIndex = 8;
			this->Slog->Text = L"Log Out";
			this->Slog->UseVisualStyleBackColor = false;
			this->Slog->Click += gcnew System::EventHandler(this, &Superviser::Slog_Click);
			// 
			// SLsuper
			// 
			this->SLsuper->AutoSize = true;
			this->SLsuper->BackColor = System::Drawing::Color::SlateGray;
			this->SLsuper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SLsuper->ForeColor = System::Drawing::Color::DarkOrange;
			this->SLsuper->Location = System::Drawing::Point(12, 9);
			this->SLsuper->Name = L"SLsuper";
			this->SLsuper->Size = System::Drawing::Size(339, 31);
			this->SLsuper->TabIndex = 9;
			this->SLsuper->Text = L"Supervisor Control Panal";
			// 
			// printPreviewDialog2
			// 
			this->printPreviewDialog2->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog2->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog2->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog2->Enabled = true;
			this->printPreviewDialog2->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog2.Icon")));
			this->printPreviewDialog2->Name = L"printPreviewDialog2";
			this->printPreviewDialog2->Visible = false;
			this->printPreviewDialog2->Load += gcnew System::EventHandler(this, &Superviser::printPreviewDialog2_Load);
			// 
			// printDocument2
			// 
			this->printDocument2->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Superviser::printDocument2_PrintPage);
			// 
			// Sclock
			// 
			this->Sclock->AutoSize = true;
			this->Sclock->BackColor = System::Drawing::Color::SlateGray;
			this->Sclock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sclock->ForeColor = System::Drawing::Color::DarkOrange;
			this->Sclock->Location = System::Drawing::Point(206, 45);
			this->Sclock->Name = L"Sclock";
			this->Sclock->Size = System::Drawing::Size(66, 24);
			this->Sclock->TabIndex = 10;
			this->Sclock->Text = L"label1";
			// 
			// Stimer
			// 
			this->Stimer->Interval = 10;
			this->Stimer->Tick += gcnew System::EventHandler(this, &Superviser::Stimer_Tick);
			// 
			// Superviser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(607, 399);
			this->Controls->Add(this->Sclock);
			this->Controls->Add(this->SLsuper);
			this->Controls->Add(this->Slog);
			this->Controls->Add(this->Stab);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Superviser";
			this->Text = L"Supervisor";
			this->Stab->ResumeLayout(false);
			this->STP1->ResumeLayout(false);
			this->STP1->PerformLayout();
			this->STP2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		DateTime dt = DateTime::Now;
#pragma endregion
	private: System::Void Sbook_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ a = Sseat->Text;
		//char b[50]= a->ToCharArray;
		//array<Char>^ arr = a->ToCharArray();
		//char s = arr[0];
		//char ss[2] = { arr[1],arr[2] };
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into login.`user info`(UID,Name,Address,Age,`Contact No.`,`Seat No.`,Destination,Train,Time,Gender) values('" + this->Sseat->Text + " " + dt.ToString() + "','" + this->Sname->Text + "','" + this->Sadd->Text + "','" + this->Sage->Text + "','" + this->Scont->Text + "','" + this->Sseat->Text + "','" + this->Sdest->Text + "','" + this->Strain->Text + "','" + this->Stime->Text + "','" + this->Sgend->Text + "') ;", conDataBase);
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
		String^ train = this->Strain->Text;
		String^ aconstring = L"datasource=localhost;port=3306;username=root;password=Myhotmail5";
		MySqlConnection^ aconDataBase = gcnew MySqlConnection(aconstring);
		MySqlCommand^ acmdDataBase = gcnew MySqlCommand("Update train." + this->Strain->Text + " set " + train[0] + a[1] + a[2] + "='" + this->Sseat->Text + dt.ToString() + "' where Boggie='" + a[0] + "' ;", aconDataBase);
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
	}
private: System::Void Sprint_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog2->Document = printDocument2;
	printPreviewDialog2->ShowDialog();
}
private: System::Void Sreset_Click(System::Object^  sender, System::EventArgs^  e) {
	Sname->Text = "";
	Sadd->Text = "";
	Scont->Text = "";
	Sseat->Text = "";
	Sage->Text = "";
	Strain->Text = "Choose One...";
	Sdest->Text = "Choose One...";
	Stime->Text = "Choose One...";
	Sgend->Text = "Choose One...";
}
private: System::Void Sexit_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void Slog_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}

private: System::Void printDocument2_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	String^ doc = Srtb1->Text;
	System::Drawing::Font^ Sdocf = gcnew System::Drawing::Font("Arial", 20);
	SolidBrush^ Sdrawb = gcnew SolidBrush(Color::Black);
	PointF Sdrawp = PointF(300.0F, 300.0F);
	e->Graphics->DrawString(doc, Sdocf, Sdrawb, Sdrawp);
}
private: System::Void printPreviewDialog2_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Stimer_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime Sdt = DateTime::Now;
	this->Sclock->Text = Sdt.ToString();
}
};
}
