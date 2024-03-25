#pragma once
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufen.
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
	private: System::Windows::Forms::CheckBox^ monitorControl;
	private: System::Windows::Forms::CheckBox^ upControl;


	private: System::Windows::Forms::CheckBox^ selectCopyControl;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f die Designerunterstzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge鄚dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->english = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chinese = (gcnew System::Windows::Forms::TextBox());
			this->accessCopyPaste = (gcnew System::Windows::Forms::Timer(this->components));
			this->monitorControl = (gcnew System::Windows::Forms::CheckBox());
			this->upControl = (gcnew System::Windows::Forms::CheckBox());
			this->selectCopyControl = (gcnew System::Windows::Forms::CheckBox());
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
			this->label2->Text = L"英文輸入";
			// 
			// english
			// 
			this->english->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
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
			this->label1->Text = L"中文翻譯";
			// 
			// chinese
			// 
			this->chinese->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chinese->Location = System::Drawing::Point(17, 387);
			this->chinese->Multiline = true;
			this->chinese->Name = L"chinese";
			this->chinese->ReadOnly = true;
			this->chinese->Size = System::Drawing::Size(1000, 250);
			this->chinese->TabIndex = 4;
			// 
			// accessCopyPaste
			// 
			this->accessCopyPaste->Interval = 500;
			this->accessCopyPaste->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// monitorControl
			// 
			this->monitorControl->AutoSize = true;
			this->monitorControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->monitorControl->Location = System::Drawing::Point(1086, 48);
			this->monitorControl->Name = L"monitorControl";
			this->monitorControl->Size = System::Drawing::Size(134, 29);
			this->monitorControl->TabIndex = 5;
			this->monitorControl->Text = L"監聽剪貼簿";
			this->monitorControl->UseVisualStyleBackColor = true;
			this->monitorControl->CheckedChanged += gcnew System::EventHandler(this, &Form1::monitorControl_CheckedChanged);
			// 
			// upControl
			// 
			this->upControl->AutoSize = true;
			this->upControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->upControl->Location = System::Drawing::Point(1086, 113);
			this->upControl->Name = L"upControl";
			this->upControl->Size = System::Drawing::Size(154, 29);
			this->upControl->TabIndex = 6;
			this->upControl->Text = L"顯示在最上層";
			this->upControl->UseVisualStyleBackColor = true;
			// 
			// selectCopyControl
			// 
			this->selectCopyControl->AutoSize = true;
			this->selectCopyControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->selectCopyControl->Location = System::Drawing::Point(1086, 184);
			this->selectCopyControl->Name = L"selectCopyControl";
			this->selectCopyControl->Size = System::Drawing::Size(114, 29);
			this->selectCopyControl->TabIndex = 7;
			this->selectCopyControl->Text = L"框選複製";
			this->selectCopyControl->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 679);
			this->Controls->Add(this->selectCopyControl);
			this->Controls->Add(this->upControl);
			this->Controls->Add(this->monitorControl);
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
	private: System::Void monitorControl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		accessCopyPaste->Enabled = monitorControl->Checked;
	}
};
}
