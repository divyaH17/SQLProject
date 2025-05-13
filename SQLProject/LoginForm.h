#pragma once
#include "User.h"
#include "RegisterForm.h"

namespace SQLProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RegisterForm^ form = gcnew RegisterForm();
			form->ShowDialog();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbemail;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Button^ btnlogin;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::LinkLabel^ lkRegister;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnlogin = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->lkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Management System";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email :";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// tbemail
			// 
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(17, 134);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(686, 27);
			this->tbemail->TabIndex = 2;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password :";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(17, 218);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(686, 27);
			this->tbPassword->TabIndex = 4;
			// 
			// btnlogin
			// 
			this->btnlogin->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnlogin->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnlogin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnlogin->Location = System::Drawing::Point(17, 276);
			this->btnlogin->Name = L"btnlogin";
			this->btnlogin->Size = System::Drawing::Size(292, 62);
			this->btnlogin->TabIndex = 5;
			this->btnlogin->Text = L"Login";
			this->btnlogin->UseVisualStyleBackColor = false;
			this->btnlogin->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(733, 71);
			this->panel1->TabIndex = 6;
			// 
			// btncancel
			// 
			this->btncancel->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btncancel->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btncancel->Location = System::Drawing::Point(362, 276);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(310, 62);
			this->btncancel->TabIndex = 7;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = false;
			this->btncancel->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// lkRegister
			// 
			this->lkRegister->AutoSize = true;
			this->lkRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lkRegister->Location = System::Drawing::Point(568, 353);
			this->lkRegister->Name = L"lkRegister";
			this->lkRegister->Size = System::Drawing::Size(104, 29);
			this->lkRegister->TabIndex = 8;
			this->lkRegister->TabStop = true;
			this->lkRegister->Text = L"Register";
			this->lkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::lkRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 419);
			this->Controls->Add(this->lkRegister);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnlogin);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this-> tbemail->Text;
		String^ Password = this->tbPassword->Text;
		if (email->Length == 0 || Password->Length == 0) {
			MessageBox :: Show("Please enter Username and Password" );
			return;
		}
		try {
			String^ connString = "Data Source=DIVYA;Initial Catalog=myproject;Integrated Security=True;Encrypt=False";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = " SELECT * FROM users WHERE email=@email AND Password=@Pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@Pwd", Password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->Close();
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader ->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password= reader->GetString(5);
			}
			else {
				MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK);

			}
		}
		catch(Exception^ e){
			MessageBox::Show("Failed to Connect to Database","Database Connection Error",MessageBoxButtons::OK);
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public: bool switchToRegister = false;
private: System::Void lkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
