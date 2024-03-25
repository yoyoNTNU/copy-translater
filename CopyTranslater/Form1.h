#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ english;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ chinese;

	private: System::Windows::Forms::Timer^ accessCopyPaste;

	private: System::ComponentModel::IContainer^ components;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->english = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chinese = (gcnew System::Windows::Forms::TextBox());
			this->accessCopyPaste = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"­^¤å¿é¤J";
			// 
			// english
			// 
			this->english->Location = System::Drawing::Point(17, 48);
			this->english->Multiline = true;
			this->english->Name = L"english";
			this->english->Size = System::Drawing::Size(1000, 250);
			this->english->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 344);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"¤¤¤åÂ½Ä¶";
			// 
			// chinese
			// 
			this->chinese->Location = System::Drawing::Point(17, 387);
			this->chinese->Multiline = true;
			this->chinese->Name = L"chinese";
			this->chinese->ReadOnly = true;
			this->chinese->Size = System::Drawing::Size(1000, 250);
			this->chinese->TabIndex = 4;
			// 
			// accessCopyPaste
			// 
			this->accessCopyPaste->Enabled = true;
			this->accessCopyPaste->Interval = 500;
			this->accessCopyPaste->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 679);
			this->Controls->Add(this->chinese);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->english);
			this->Controls->Add(this->label2);
			this->Name = L"Form1";
			this->Text = L"CopyTranslater";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (Clipboard::ContainsText()) {
			String^ clipboardText = Clipboard::GetText();
			english->Text = clipboardText;
		}
	}
};
}
