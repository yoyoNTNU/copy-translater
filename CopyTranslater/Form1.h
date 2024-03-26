#pragma once
#pragma comment(lib, "wininet.lib")
#include <nlohmann/json.hpp>
using json = nlohmann::json;
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
	private: System::Windows::Forms::Button^ button1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(9, 7);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"英文輸入";
			// 
			// english
			// 
			this->english->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->english->Location = System::Drawing::Point(13, 38);
			this->english->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->english->Multiline = true;
			this->english->Name = L"english";
			this->english->Size = System::Drawing::Size(751, 201);
			this->english->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(9, 275);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"中文翻譯";
			// 
			// chinese
			// 
			this->chinese->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chinese->Location = System::Drawing::Point(13, 310);
			this->chinese->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chinese->Multiline = true;
			this->chinese->Name = L"chinese";
			this->chinese->ReadOnly = true;
			this->chinese->Size = System::Drawing::Size(751, 201);
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
			this->monitorControl->Location = System::Drawing::Point(814, 38);
			this->monitorControl->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->monitorControl->Name = L"monitorControl";
			this->monitorControl->Size = System::Drawing::Size(109, 25);
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
			this->upControl->Location = System::Drawing::Point(814, 90);
			this->upControl->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->upControl->Name = L"upControl";
			this->upControl->Size = System::Drawing::Size(125, 25);
			this->upControl->TabIndex = 6;
			this->upControl->Text = L"顯示在最上層";
			this->upControl->UseVisualStyleBackColor = true;
			// 
			// selectCopyControl
			// 
			this->selectCopyControl->AutoSize = true;
			this->selectCopyControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->selectCopyControl->Location = System::Drawing::Point(814, 147);
			this->selectCopyControl->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->selectCopyControl->Name = L"selectCopyControl";
			this->selectCopyControl->Size = System::Drawing::Size(93, 25);
			this->selectCopyControl->TabIndex = 7;
			this->selectCopyControl->Text = L"框選複製";
			this->selectCopyControl->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(814, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(971, 543);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->selectCopyControl);
			this->Controls->Add(this->upControl);
			this->Controls->Add(this->monitorControl);
			this->Controls->Add(this->chinese);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->english);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"CopyTranslater";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::String^ ToSystemString(std::wstring const& input)
	{
		return gcnew System::String(input.c_str());
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (Clipboard::ContainsText()) {
			String^ clipboardText = Clipboard::GetText();
			english->Text = clipboardText;
		}
	}
	private: System::Void monitorControl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		accessCopyPaste->Enabled = monitorControl->Checked;
	}


	void HttpPostRequest() {
		// 初始化WinINet服務
		HINTERNET hInternet = InternetOpen(L"MyApp", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
		if (hInternet) {
			// 打開URL
			HINTERNET hConnect = InternetOpenUrl(hInternet, L"https://api-free.deepl.com/v2/translate", NULL, 0, INTERNET_FLAG_RELOAD, 0);
			if (hConnect) {
				// 設置HTTP請求標頭
				BOOL setHeaderResult = HttpAddRequestHeaders(hConnect,
					L"Authorization: DeepL-Auth-Key 82d6fa7f-3a2a-4028-986c-9f4ca52049c1:fx\r\n"
					L"User-Agent: YourApp/1.2.3\r\n"
					L"Content-Type: application/json\r\n",
					-1,
					HTTP_ADDREQ_FLAG_ADD | HTTP_ADDREQ_FLAG_REPLACE);
				if (setHeaderResult) {
					// 設置POST資料
					System::String^ en = english->Text;
					std::wstring nativeString = msclr::interop::marshal_as<std::wstring>(en);
					std::wstringstream postDataStream;
					postDataStream << L"{\"text\":[\"" << nativeString << L"\"],\"target_lang\":\"ZH\"}";
					std::wstring postData = postDataStream.str();
					// 發送POST請求
					BOOL sendRequestResult = HttpSendRequest(hConnect, NULL, 0, (LPVOID)postData.c_str(), postData.length());
					if (sendRequestResult) {
						// 讀取響應
						std::stringstream responseStream;
						char buffer[1024];
						DWORD bytesRead;
						while (InternetReadFile(hConnect, buffer, sizeof(buffer), &bytesRead) && bytesRead > 0) {
							responseStream.write(buffer, bytesRead);
						}
						// 解析JSON響應
						json responseJson;
						responseStream >> responseJson;
						if (!responseJson["translations"].empty()) {
							//std::cout << "Detected Source Language: " << responseJson["translations"][0]["detected_source_language"] << std::endl;
							//std::cout << "Translated Text: " << responseJson["translations"][0]["text"] << std::endl;
							System::String^ zh = ToSystemString(responseJson["translations"][0]["text"]);
							chinese->Text = zh;
						}
						else {
							//std::cerr << "No translations found in response." << std::endl;
							chinese->Text = "1";
						}
					}
					else {
						//std::cerr << "Failed to send request." << std::endl;
						chinese->Text = "2";
					}
				}
				else {
					//std::cerr << "Failed to set request headers." << std::endl;
					chinese->Text = "3";
				}
				InternetCloseHandle(hConnect);
			}
			else {
				//std::cerr << "Failed to connect." << std::endl;
				chinese->Text = "4";
			}
			// 關閉WinINet服務
			InternetCloseHandle(hInternet);
		}
		else {
			//std::cerr << "Failed to open internet." << std::endl;
			chinese->Text = "5";
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	HttpPostRequest();
}
};
}
