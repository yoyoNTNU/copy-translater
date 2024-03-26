#pragma once
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "User32.lib")
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
		String^ lastText="";
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
	private: System::Windows::Forms::CheckBox^ autoTranslate;



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
			this->autoTranslate = (gcnew System::Windows::Forms::CheckBox());
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
			this->english->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->chinese->Location = System::Drawing::Point(17, 388);
			this->chinese->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			// monitorControl
			// 
			this->monitorControl->AutoSize = true;
			this->monitorControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->monitorControl->Location = System::Drawing::Point(1085, 48);
			this->monitorControl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->monitorControl->Name = L"monitorControl";
			this->monitorControl->Size = System::Drawing::Size(134, 29);
			this->monitorControl->TabIndex = 5;
			this->monitorControl->Text = L"監聽剪貼簿";
			this->monitorControl->UseVisualStyleBackColor = true;
			// 
			// upControl
			// 
			this->upControl->AutoSize = true;
			this->upControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->upControl->Location = System::Drawing::Point(1085, 112);
			this->upControl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->upControl->Name = L"upControl";
			this->upControl->Size = System::Drawing::Size(154, 29);
			this->upControl->TabIndex = 6;
			this->upControl->Text = L"顯示在最上層";
			this->upControl->UseVisualStyleBackColor = true;
			this->upControl->CheckedChanged += gcnew System::EventHandler(this, &Form1::upControl_CheckedChanged);
			// 
			// selectCopyControl
			// 
			this->selectCopyControl->AutoSize = true;
			this->selectCopyControl->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->selectCopyControl->Location = System::Drawing::Point(1085, 184);
			this->selectCopyControl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->selectCopyControl->Name = L"selectCopyControl";
			this->selectCopyControl->Size = System::Drawing::Size(114, 29);
			this->selectCopyControl->TabIndex = 7;
			this->selectCopyControl->Text = L"框選複製";
			this->selectCopyControl->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(1085, 323);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"翻譯";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// autoTranslate
			// 
			this->autoTranslate->AutoSize = true;
			this->autoTranslate->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->autoTranslate->Location = System::Drawing::Point(1085, 248);
			this->autoTranslate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->autoTranslate->Name = L"autoTranslate";
			this->autoTranslate->Size = System::Drawing::Size(114, 29);
			this->autoTranslate->TabIndex = 9;
			this->autoTranslate->Text = L"自動翻譯";
			this->autoTranslate->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 679);
			this->Controls->Add(this->autoTranslate);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->selectCopyControl);
			this->Controls->Add(this->upControl);
			this->Controls->Add(this->monitorControl);
			this->Controls->Add(this->chinese);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->english);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
	void sendCtrlC() {
		INPUT inputs[4] = {};
		ZeroMemory(inputs, sizeof(inputs));

		inputs[0].type = INPUT_KEYBOARD;
		inputs[0].ki.wVk = VK_CONTROL;

		inputs[1].type = INPUT_KEYBOARD;
		inputs[1].ki.wVk = 'C';

		inputs[2].type = INPUT_KEYBOARD;
		inputs[2].ki.wVk = VK_CONTROL;
		inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

		inputs[3].type = INPUT_KEYBOARD;
		inputs[3].ki.wVk = 'C';
		inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

		UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
		if (uSent != ARRAYSIZE(inputs)) {
			int err = GetLastError();
		}
	}
	void HttpPostRequest() {
		// 初始化WinINet服務
		HINTERNET hInternet = InternetOpen(L"MyApp", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
		if (hInternet) {
			System::String^ en = english->Text;
			array<Byte>^ bytes = System::Text::Encoding::UTF8->GetBytes(en);
			System::String^ encoded_en = System::Text::Encoding::UTF8->GetString(bytes);
			msclr::interop::marshal_context context;
			std::string nativeString = context.marshal_as<std::string>(encoded_en);
			std::string postData = "text=" + nativeString + "&target_lang=ZH";
			std::string url = "https://api-free.deepl.com/v2/translate?";
			url += postData;
			HINTERNET hConnect = InternetOpenUrlA(hInternet, url.c_str(), NULL, 0, INTERNET_FLAG_RELOAD, 0);
			if (hConnect) {
				// 設置HTTP請求標頭
				BOOL setHeaderResult = HttpAddRequestHeaders(hConnect,
					L"Authorization: DeepL-Auth-Key 82d6fa7f-3a2a-4028-986c-9f4ca52049c1:fx\r\n"
					L"User-Agent: CopyTranslater/0.0.1\r\n",
					-1,
					HTTP_ADDREQ_FLAG_ADD | HTTP_ADDREQ_FLAG_REPLACE);
				if (setHeaderResult) {
					BOOL sendRequestResult = HttpSendRequest(hConnect, NULL, 0, NULL, 0);
					if (sendRequestResult) {
						DWORD dwStatusCode = 0;
						DWORD dwSize = sizeof(dwStatusCode);
						BOOL bResult = HttpQueryInfo(hConnect, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER,
							&dwStatusCode, &dwSize, NULL);
						if (bResult) {
							if (dwStatusCode == HTTP_STATUS_NOT_FOUND || dwStatusCode == HTTP_STATUS_BAD_REQUEST) {
								chinese->Text = L"異常錯誤!請告知WEIYU";
							}
						}
						std::stringstream responseStream;
						char buffer[1024];
						DWORD bytesRead;
						while (InternetReadFile(hConnect, buffer, sizeof(buffer), &bytesRead) && bytesRead > 0) {
							responseStream.write(buffer, bytesRead);
						}
						// 解析JSON響應
						json responseJson;
						responseStream >> responseJson;
						try {
							responseJson = json::parse(responseStream.str());
						}
						catch (const std::exception& e) {
							chinese->Text = L"解析JSON錯誤，請聯繫WEIYU!";
						}
						if (responseJson.contains("translations")) {
							auto translations = responseJson["translations"];
							if (!translations.empty() && translations.is_array()) {
								auto translation = translations[0];
								if (translation.contains("text")) {
									std::string translatedText = translation["text"];
									array<Byte>^ bytes = gcnew array<Byte>(translatedText.size());
									Runtime::InteropServices::Marshal::Copy(IntPtr(&translatedText[0]), bytes, 0, translatedText.size());
									System::Text::UTF8Encoding^ utf8 = gcnew System::Text::UTF8Encoding(true);
									System::String^ zh = utf8->GetString(bytes);
									chinese->Text = zh;
								}
								else {
									chinese->Text = L"伺服器端異常，請稍後再試!";
								}
							}
							else {
								chinese->Text = L"伺服器端異常，請稍後再試!";
							}
						}
						else {
							chinese->Text = L"伺服器端異常，請稍後再試!";
						}
					}
					else {
						chinese->Text = L"請求發送失敗，請聯繫WEIYU!";
					}
				}
				else {
					chinese->Text = L"標頭設定異常，請聯繫WEIYU!";
				}
				InternetCloseHandle(hConnect);
			}
			else {
				chinese->Text = L"無網際網路，請確認您的網路連線!";
			}
			// 關閉WinINet服務
			InternetCloseHandle(hInternet);
		}
		else {
			chinese->Text = L"無網際網路，請確認您的網路連線!";
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (selectCopyControl->Checked) {
			sendCtrlC();
		}
		if (monitorControl->Checked) {
			if (Clipboard::ContainsText()) {
				String^ clipboardText = Clipboard::GetText();
				english->Text = clipboardText;
			}
		}
		if (autoTranslate->Checked) {
			if (english->Text != lastText) {
				HttpPostRequest();
				lastText = english->Text;
			}
		}
	}
	private: System::Void upControl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->TopMost = upControl->Checked;
	}
	

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		HttpPostRequest();
	}

};
}
