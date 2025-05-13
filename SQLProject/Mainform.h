#pragma once
#include "LoginForm.h"






namespace SQLProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{


			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			LoginForm^ form = gcnew LoginForm();
			form->ShowDialog();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbEnrollment;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbFname;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbLName;
	private: System::Windows::Forms::TextBox^ tbSem;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbDOB;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbFatherName;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbAltPhone;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::TextBox^ outputText;

	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ opUpper;



		   TextBox^ OPbox;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->tbEnrollment = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->tbFname = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->tbLName = (gcnew System::Windows::Forms::TextBox());
			   this->tbSem = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->tbDOB = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->tbFatherName = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->tbAltPhone = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->outputText = (gcnew System::Windows::Forms::TextBox());
			   this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   this->opUpper = (gcnew System::Windows::Forms::TextBox());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(1126, 46);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Welcome to Dashboard";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // label2
			   // 
			   this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(19, 94);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(1119, 25);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Enter data.";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(31, 166);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(111, 20);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Enrollment ID";
			   // 
			   // tbEnrollment
			   // 
			   this->tbEnrollment->Location = System::Drawing::Point(179, 164);
			   this->tbEnrollment->Name = L"tbEnrollment";
			   this->tbEnrollment->Size = System::Drawing::Size(143, 22);
			   this->tbEnrollment->TabIndex = 5;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(31, 220);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(92, 20);
			   this->label5->TabIndex = 6;
			   this->label5->Text = L"First Name";
			   // 
			   // tbFname
			   // 
			   this->tbFname->Location = System::Drawing::Point(179, 218);
			   this->tbFname->Name = L"tbFname";
			   this->tbFname->Size = System::Drawing::Size(143, 22);
			   this->tbFname->TabIndex = 7;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(31, 274);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(91, 20);
			   this->label6->TabIndex = 8;
			   this->label6->Text = L"Last Name";
			   this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			   // 
			   // tbLName
			   // 
			   this->tbLName->Location = System::Drawing::Point(179, 272);
			   this->tbLName->Name = L"tbLName";
			   this->tbLName->Size = System::Drawing::Size(143, 22);
			   this->tbLName->TabIndex = 9;
			   // 
			   // tbSem
			   // 
			   this->tbSem->Location = System::Drawing::Point(532, 272);
			   this->tbSem->Name = L"tbSem";
			   this->tbSem->Size = System::Drawing::Size(143, 22);
			   this->tbSem->TabIndex = 15;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(384, 220);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(47, 20);
			   this->label7->TabIndex = 14;
			   this->label7->Text = L"DOB";
			   // 
			   // tbDOB
			   // 
			   this->tbDOB->Location = System::Drawing::Point(532, 218);
			   this->tbDOB->Name = L"tbDOB";
			   this->tbDOB->Size = System::Drawing::Size(143, 22);
			   this->tbDOB->TabIndex = 13;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(384, 274);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(81, 20);
			   this->label8->TabIndex = 12;
			   this->label8->Text = L"Semester";
			   // 
			   // tbFatherName
			   // 
			   this->tbFatherName->Location = System::Drawing::Point(532, 164);
			   this->tbFatherName->Name = L"tbFatherName";
			   this->tbFatherName->Size = System::Drawing::Size(143, 22);
			   this->tbFatherName->TabIndex = 11;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(384, 166);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(106, 20);
			   this->label9->TabIndex = 10;
			   this->label9->Text = L"Father Name";
			   // 
			   // tbAltPhone
			   // 
			   this->tbAltPhone->Location = System::Drawing::Point(896, 216);
			   this->tbAltPhone->Name = L"tbAltPhone";
			   this->tbAltPhone->Size = System::Drawing::Size(143, 22);
			   this->tbAltPhone->TabIndex = 19;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(735, 218);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(132, 20);
			   this->label10->TabIndex = 18;
			   this->label10->Text = L"Alternate_Phone";
			   this->label10->Click += gcnew System::EventHandler(this, &MyForm1::label10_Click);
			   // 
			   // tbPhone
			   // 
			   this->tbPhone->Location = System::Drawing::Point(896, 162);
			   this->tbPhone->Name = L"tbPhone";
			   this->tbPhone->Size = System::Drawing::Size(143, 22);
			   this->tbPhone->TabIndex = 17;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(735, 164);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(81, 20);
			   this->label11->TabIndex = 16;
			   this->label11->Text = L"PhoneNo.";
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(896, 274);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(118, 33);
			   this->button1->TabIndex = 20;
			   this->button1->Text = L"View data.";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(739, 274);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(118, 33);
			   this->button2->TabIndex = 21;
			   this->button2->Text = L"Enter data";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			   // 
			   // outputText
			   // 
			   this->outputText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->outputText->Location = System::Drawing::Point(87, 398);
			   this->outputText->Multiline = true;
			   this->outputText->Name = L"outputText";
			   this->outputText->Size = System::Drawing::Size(991, 113);
			   this->outputText->TabIndex = 22;
			   // 
			   // vScrollBar1
			   // 
			   this->vScrollBar1->Location = System::Drawing::Point(1091, 398);
			   this->vScrollBar1->Name = L"vScrollBar1";
			   this->vScrollBar1->Size = System::Drawing::Size(21, 100);
			   this->vScrollBar1->TabIndex = 23;
			   this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm1::vScrollBar1_Scroll);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(102, 379);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(20, 16);
			   this->label3->TabIndex = 24;
			   this->label3->Text = L"ID";
			   this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label12->Location = System::Drawing::Point(196, 379);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(49, 16);
			   this->label12->TabIndex = 25;
			   this->label12->Text = L"Fname";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label13->Location = System::Drawing::Point(274, 379);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(48, 16);
			   this->label13->TabIndex = 26;
			   this->label13->Text = L"Lname";
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label14->Location = System::Drawing::Point(328, 379);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(82, 16);
			   this->label14->TabIndex = 27;
			   this->label14->Text = L"FatherName";
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label15->Location = System::Drawing::Point(454, 379);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(36, 16);
			   this->label15->TabIndex = 28;
			   this->label15->Text = L"DOB";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label16->Location = System::Drawing::Point(572, 379);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(65, 16);
			   this->label16->TabIndex = 29;
			   this->label16->Text = L"Semester";
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label17->Location = System::Drawing::Point(657, 379);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(94, 16);
			   this->label17->TabIndex = 30;
			   this->label17->Text = L"PhoneNumber";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label18->Location = System::Drawing::Point(769, 379);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(68, 16);
			   this->label18->TabIndex = 31;
			   this->label18->Text = L"Alt_Phone";
			   // 
			   // opUpper
			   // 
			   this->opUpper->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->opUpper->Location = System::Drawing::Point(695, -4);
			   this->opUpper->Multiline = true;
			   this->opUpper->Name = L"opUpper";
			   this->opUpper->Size = System::Drawing::Size(10, 10);
			   this->opUpper->TabIndex = 32;
			   // 
			   // MyForm1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->ClientSize = System::Drawing::Size(1150, 534);
			   this->Controls->Add(this->opUpper);
			   this->Controls->Add(this->label18);
			   this->Controls->Add(this->label17);
			   this->Controls->Add(this->label16);
			   this->Controls->Add(this->label15);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->vScrollBar1);
			   this->Controls->Add(this->outputText);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->tbAltPhone);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->tbPhone);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->tbSem);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->tbDOB);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->tbFatherName);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->tbLName);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->tbFname);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->tbEnrollment);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"MyForm1";
			   this->Text = L"MyForm1";
			   this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Enrollment = this->tbEnrollment->Text;
		String^ Fname = this->tbFname->Text;
		String^ Lname = this->tbLName->Text;
		String^ FatherName = this->tbFatherName->Text;
		String^ DOB = this->tbDOB->Text;
		String^ SEM = this->tbSem->Text;
		String^ Phonenumber = this->tbPhone->Text;
		String^ alt_phone = this->tbAltPhone->Text;
		if (Enrollment->Length == 0 || Fname->Length == 0 || Lname->Length == 0 || FatherName->Length == 0 || DOB->Length == 0 || SEM->Length == 0 || Phonenumber->Length == 0)
		{
			MessageBox::Show("Incorrect data entered.", "Entering data error", MessageBoxButtons::OK);
			return;
		}

		try
		{
			String^ connString = "Data Source=DIVYA;Initial Catalog=myproject;Integrated Security=True;Encrypt=False";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ query = "insert into student_info values(@Enrollment,@FirstName,@LastName,@FatherName,@DOB,@Sem,@Phone,@altPhone)";
			SqlCommand command(query, % sqlConn);
			command.Parameters->AddWithValue("@Enrollment", Enrollment);
			command.Parameters->AddWithValue("@FirstName", Fname);
			command.Parameters->AddWithValue("@LastName", Lname);
			command.Parameters->AddWithValue("@FatherName", FatherName);
			command.Parameters->AddWithValue("@DOB", DOB);
			command.Parameters->AddWithValue("@Phone", Phonenumber);
			command.Parameters->AddWithValue("@altPhone", alt_phone);
			command.Parameters->AddWithValue("@Sem", SEM);

			SqlDataReader^ reader = command.ExecuteReader();

			MessageBox::Show("Data entered.", "Entering data", MessageBoxButtons::OK);



		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to connect to Database" + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ connString = "Data Source=DIVYA;Initial Catalog=myproject;Integrated Security=True;Encrypt=False";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ query = "select * from student_info";
			SqlCommand command(query, % sqlConn);
			outputText->Text = "";
			opUpper->Text = "";

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				for (int i = 0; i < reader->FieldCount; i++)
				{
					opUpper->Text += reader->GetName(i) + "\t";
				}
				opUpper->Text += Environment::NewLine;
				while (reader->Read())
				{
					for (int i = 0; i < reader->FieldCount; i++)
					{
						outputText->Text += reader[i]->ToString() + "\t";
					}
					outputText->Text += Environment::NewLine;
				}
			}
			else
			{
				MessageBox::Show("No data available.", "Error", MessageBoxButtons::OK);


			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to connect to Database" + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
};
/*
SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				for (int i = 0; i < reader->FieldCount; i++)
				{
					opUpper->Text += reader->GetName(i) + "\t";
				}
				opUpper->Text += Environment::NewLine;
				while (reader->Read())
				{
					for (int i = 0; i < reader->FieldCount; i++)
					{
						outputText->Text += reader[i]->ToString() + "\t";
					}
					outputText->Text += Environment::NewLine;
				}
			}*/
