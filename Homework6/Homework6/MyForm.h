#pragma once
#include "Header.h"

namespace Homework6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Rhomb^ A;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			A = gcnew Rhomb(1);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Домашняя работа 6. Вариант 17. Ромб";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Длина диагонали 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Длина диагонали 2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Площадь:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(251, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Длина стороны:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(372, 33);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(372, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 22);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(335, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 26);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Присвоить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(335, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 26);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Показать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 189);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "")
			A->A = 0;
		else
			A->A = Convert::ToInt32(this->textBox1->Text);

		if (this->textBox2->Text == "")
			A->B = 0;
		else
			A->B = Convert::ToInt32(this->textBox2->Text);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = A->A.ToString();
	this->textBox2->Text = A->B.ToString();
	this->textBox3->Text = A->Square().ToString();
	this->textBox4->Text = A->Side().ToString();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = A->A.ToString();
	this->textBox2->Text = A->B.ToString();
	this->textBox3->Text = A->Square().ToString();
	this->textBox4->Text = A->Side().ToString();
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13)
	{
		if (this->textBox1->Text == "")
			A->A = 0;
		else
			A->A = Convert::ToInt32(this->textBox1->Text);

		if (this->textBox2->Text == "")
			A->B = 0;
		else
			A->B = Convert::ToInt32(this->textBox2->Text);
		this->textBox1->Text = A->A.ToString();
		this->textBox2->Text = A->B.ToString();
		this->textBox3->Text = A->Square().ToString();
		this->textBox4->Text = A->Side().ToString();
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13)
	{
		if (this->textBox1->Text == "")
			A->A = 0;
		else
			A->A = Convert::ToInt32(this->textBox1->Text);

		if (this->textBox2->Text == "")
			A->B = 0;
		else
			A->B = Convert::ToInt32(this->textBox2->Text);
		this->textBox1->Text = A->A.ToString();
		this->textBox2->Text = A->B.ToString();
		this->textBox3->Text = A->Square().ToString();
		this->textBox4->Text = A->Side().ToString();
	}
}
};
}
