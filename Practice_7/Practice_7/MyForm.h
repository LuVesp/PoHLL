#pragma once
#include "Point_Go.h"
namespace Practice7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Point_Go^ A;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			A = gcnew Point_Go(100, 100);
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ íàïğàâëåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ââåğõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âíèçToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ñòîïToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñêîğîñòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåäëåííîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áûñòğîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìîëíèåíîñíîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ íàëåâîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàïğàâîToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáğûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çëîéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òóïîéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäèâë¸ííûéToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íàïğàâëåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââåğõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âíèçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàëåâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàïğàâîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòîïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñêîğîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåäëåííîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áûñòğîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìîëíèåíîñíîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáğûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çëîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òóïîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäèâë¸ííûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íàïğàâëåíèåToolStripMenuItem,
					this->ñêîğîñòüToolStripMenuItem, this->âèäToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(732, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íàïğàâëåíèåToolStripMenuItem
			// 
			this->íàïğàâëåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ââåğõToolStripMenuItem,
					this->âíèçToolStripMenuItem, this->íàëåâîToolStripMenuItem, this->íàïğàâîToolStripMenuItem, this->ñòîïToolStripMenuItem
			});
			this->íàïğàâëåíèåToolStripMenuItem->Name = L"íàïğàâëåíèåToolStripMenuItem";
			this->íàïğàâëåíèåToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->íàïğàâëåíèåToolStripMenuItem->Text = L"Íàïğàâëåíèå";
			// 
			// ââåğõToolStripMenuItem
			// 
			this->ââåğõToolStripMenuItem->Name = L"ââåğõToolStripMenuItem";
			this->ââåğõToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->ââåğõToolStripMenuItem->Text = L"Ââåğõ";
			this->ââåğõToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ââåğõToolStripMenuItem_Click);
			// 
			// âíèçToolStripMenuItem
			// 
			this->âíèçToolStripMenuItem->Name = L"âíèçToolStripMenuItem";
			this->âíèçToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->âíèçToolStripMenuItem->Text = L"Âíèç";
			this->âíèçToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âíèçToolStripMenuItem_Click);
			// 
			// íàëåâîToolStripMenuItem
			// 
			this->íàëåâîToolStripMenuItem->Name = L"íàëåâîToolStripMenuItem";
			this->íàëåâîToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->íàëåâîToolStripMenuItem->Text = L"Íàëåâî";
			this->íàëåâîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàëåâîToolStripMenuItem_Click);
			// 
			// íàïğàâîToolStripMenuItem
			// 
			this->íàïğàâîToolStripMenuItem->Name = L"íàïğàâîToolStripMenuItem";
			this->íàïğàâîToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->íàïğàâîToolStripMenuItem->Text = L"Íàïğàâî";
			this->íàïğàâîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàïğàâîToolStripMenuItem_Click);
			// 
			// ñòîïToolStripMenuItem
			// 
			this->ñòîïToolStripMenuItem->Name = L"ñòîïToolStripMenuItem";
			this->ñòîïToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->ñòîïToolStripMenuItem->Text = L"Ñòîï";
			this->ñòîïToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòîïToolStripMenuItem_Click);
			// 
			// ñêîğîñòüToolStripMenuItem
			// 
			this->ñêîğîñòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìåäëåííîToolStripMenuItem,
					this->áûñòğîToolStripMenuItem, this->ìîëíèåíîñíîToolStripMenuItem
			});
			this->ñêîğîñòüToolStripMenuItem->Name = L"ñêîğîñòüToolStripMenuItem";
			this->ñêîğîñòüToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->ñêîğîñòüToolStripMenuItem->Text = L"Ñêîğîñòü";
			// 
			// ìåäëåííîToolStripMenuItem
			// 
			this->ìåäëåííîToolStripMenuItem->Name = L"ìåäëåííîToolStripMenuItem";
			this->ìåäëåííîToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->ìåäëåííîToolStripMenuItem->Text = L"Ìåäëåííî";
			this->ìåäëåííîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ìåäëåííîToolStripMenuItem_Click);
			// 
			// áûñòğîToolStripMenuItem
			// 
			this->áûñòğîToolStripMenuItem->Name = L"áûñòğîToolStripMenuItem";
			this->áûñòğîToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->áûñòğîToolStripMenuItem->Text = L"Áûñòğî";
			this->áûñòğîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áûñòğîToolStripMenuItem_Click);
			// 
			// ìîëíèåíîñíîToolStripMenuItem
			// 
			this->ìîëíèåíîñíîToolStripMenuItem->Name = L"ìîëíèåíîñíîToolStripMenuItem";
			this->ìîëíèåíîñíîToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->ìîëíèåíîñíîToolStripMenuItem->Text = L"Ìîëíèåíîñíî";
			this->ìîëíèåíîñíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ìîëíèåíîñíîToolStripMenuItem_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->äîáğûéToolStripMenuItem,
					this->çëîéToolStripMenuItem, this->òóïîéToolStripMenuItem, this->óäèâë¸ííûéToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// äîáğûéToolStripMenuItem
			// 
			this->äîáğûéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"äîáğûéToolStripMenuItem.Image")));
			this->äîáğûéToolStripMenuItem->Name = L"äîáğûéToolStripMenuItem";
			this->äîáğûéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->äîáğûéToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->äîáğûéToolStripMenuItem->Text = L"Äîáğûé";
			this->äîáğûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîáğûéToolStripMenuItem_Click);
			// 
			// çëîéToolStripMenuItem
			// 
			this->çëîéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"çëîéToolStripMenuItem.Image")));
			this->çëîéToolStripMenuItem->Name = L"çëîéToolStripMenuItem";
			this->çëîéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->çëîéToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->çëîéToolStripMenuItem->Text = L"Çëîé";
			this->çëîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çëîéToolStripMenuItem_Click);
			// 
			// òóïîéToolStripMenuItem
			// 
			this->òóïîéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"òóïîéToolStripMenuItem.Image")));
			this->òóïîéToolStripMenuItem->Name = L"òóïîéToolStripMenuItem";
			this->òóïîéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->òóïîéToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->òóïîéToolStripMenuItem->Text = L"Òóïîé";
			this->òóïîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òóïîéToolStripMenuItem_Click);
			// 
			// óäèâë¸ííûéToolStripMenuItem
			// 
			this->óäèâë¸ííûéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"óäèâë¸ííûéToolStripMenuItem.Image")));
			this->óäèâë¸ííûéToolStripMenuItem->Name = L"óäèâë¸ííûéToolStripMenuItem";
			this->óäèâë¸ííûéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->óäèâë¸ííûéToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->óäèâë¸ííûéToolStripMenuItem->Text = L"Óäèâë¸ííûé";
			this->óäèâë¸ííûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óäèâë¸ííûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(582, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 125);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ñêîğîñòü";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(17, 87);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(119, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Ìîëíèåíîñíî";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(17, 60);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(78, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Áûñòğî";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 33);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(96, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ìåäëåííî";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(585, 256);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 22);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(113, 94);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Ââåğõ", L"Âíèç", L"Íàëåâî", L"Íàïğàâî" });
			this->listBox1->Location = System::Drawing::Point(584, 182);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(139, 68);
			this->listBox1->TabIndex = 4;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(645, 322);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(645, 284);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 32);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(607, 322);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 32);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(683, 322);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(32, 32);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Smileys-3.bmp");
			this->imageList1->Images->SetKeyName(1, L"Smileys-6.bmp");
			this->imageList1->Images->SetKeyName(2, L"Smileys-8.bmp");
			this->imageList1->Images->SetKeyName(3, L"Smileys-24.bmp");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(621, 284);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"W";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(621, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(654, 357);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"S";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(680, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"D";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(732, 414);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		A->Go(this->pictureBox1);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		A->Go(this->pictureBox1);
		this->textBox1->Text = A->ToString();
	}
	private: System::Void ââåğõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		A->Dir = 1;
	}
	private: System::Void âíèçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		A->Dir = 2;
	}
	private: System::Void íàëåâîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		A->Dir = 3;
	}
	private: System::Void íàïğàâîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		A->Dir = 4;
	}
	private: System::Void ñòîïToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		A->Dir = 5;
	}

private: System::Void ìåäëåííîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 3;
	this->timer1->Interval = 300;
}
private: System::Void áûñòğîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 6;
	this->timer1->Interval = 80;
}
private: System::Void ìîëíèåíîñíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 9;
	this->timer1->Interval = 25;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 3;
	this->timer1->Interval = 300;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 6;
	this->timer1->Interval = 80;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//A->Speed = 9;
	this->timer1->Interval = 25;
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int key = listBox1->SelectedIndex; 
	switch (key)
	{
	case 0: {A->Dir = 1; break; }
	case 1: {A->Dir = 2; break; }
	case 2: {A->Dir = 3; break; }
	case 3: {A->Dir = 4; break; }
	}

}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	A->Dir = 1;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	A->Dir = 2;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	A->Dir = 3;
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	A->Dir = 4;
}


private: System::Void äîáğûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = this->imageList1->Images[0];
}
private: System::Void çëîéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = this->imageList1->Images[1];
}
private: System::Void òóïîéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = this->imageList1->Images[2];
}
private: System::Void óäèâë¸ííûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = this->imageList1->Images[3];
}

private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	int Key = e->KeyValue;
	switch (Key)
	{
	case 87: {A->Dir = 1; break; }
	case 83: {A->Dir = 2; break; }
	case 65: {A->Dir = 3; break; }
	case 68: {A->Dir = 4; break; }
	}
}

};
}

