#pragma once
#include "Windows.h"
#include <stdio.h>
#include <string>
#include "String.h"
#pragma comment(lib, "user32.lib") 
#include <msclr\marshal_cppstd.h>
#include "cstring"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{


	public:

		int schet = 0;
		int n_sc = 0;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}


	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Äîáàâèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(282, 132);
			this->listBox1->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Òàéìåð";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Î÷èñòèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(45, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Çàïóñòèòü";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(173, 230);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 34);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Îñòàíîâèòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 276);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
//			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"AWCi";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//start
			String^ path;
			if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				path = openFileDialog1->FileName;
				listBox1->Items->Add(path);
			}
			schet++;
			//PVOID z = &path;
			//SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)&path, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
			//SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, z, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
			//SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)&path, (SPIF_SENDWININICHANGE + SPIF_UPDATEINIFILE));
			//SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)path.operator LPCTSTR(), (SPIF_SENDWININICHANGE + SPIF_UPDATEINIFILE));


			std::string s = msclr::interop::marshal_as<std::string>(path);
			char* str = new char[s.size() + 1];
			strcpy(str, s.c_str());
			SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, str, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
		}
		catch (...) {
			return;
		}

	}
	
	
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// clear listbox
		listBox1->Items->Clear();


	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	// timer
	if (n_sc == schet) {
		n_sc = 0;
	}

	String^ path = System::Convert::ToString(listBox1->Items[n_sc]);
	n_sc++;
	

	std::string s = msclr::interop::marshal_as<std::string>(path);
	char* str = new char[s.size() + 1];
	strcpy(str, s.c_str());
	SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, str, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// start
	if (textBox1->Text == "") {
		timer1->Interval = 10000;
	}
	try{
		timer1->Interval = System::Convert::ToInt32(textBox1->Text);
		timer1->Enabled = true;
	} catch (...) {
		return;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
