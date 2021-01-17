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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				resources->GetString(L"checkedListBox1.Items"),
					resources->GetString(L"checkedListBox1.Items1")
			});
			resources->ApplyResources(this->checkedListBox1, L"checkedListBox1");
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::checkedListBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"25";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { resources->GetString(L"comboBox1.Items") });
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->ValueMember = L"25";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// domainUpDown1
			// 
			resources->ApplyResources(this->domainUpDown1, L"domainUpDown1");
			this->domainUpDown1->Name = L"domainUpDown1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->Name = L"listBox1";
			// 
			// monthCalendar1
			// 
			resources->ApplyResources(this->monthCalendar1, L"monthCalendar1");
			this->monthCalendar1->Name = L"monthCalendar1";
			// 
			// numericUpDown1
			// 
			resources->ApplyResources(this->numericUpDown1, L"numericUpDown1");
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// vScrollBar1
			// 
			resources->ApplyResources(this->vScrollBar1, L"vScrollBar1");
			this->vScrollBar1->Name = L"vScrollBar1";
			// 
			// webBrowser1
			// 
			this->webBrowser1->AccessibleRole = System::Windows::Forms::AccessibleRole::List;
			this->webBrowser1->AllowWebBrowserDrop = false;
			resources->ApplyResources(this->webBrowser1, L"webBrowser1");
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Form1::webBrowser1_DocumentCompleted);
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
};
}
