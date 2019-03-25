#pragma once

namespace calculator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb1;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  divide;
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  minus;
	private: System::Windows::Forms::Button^  multiply;
	private: System::Windows::Forms::Button^  comma;
	private: System::Windows::Forms::Button^  zero;
	private: System::Windows::Forms::Button^  equals;
	private: System::Windows::Forms::Button^  three;
	private: System::Windows::Forms::Button^  nine;
	private: System::Windows::Forms::Button^  four;
	private: System::Windows::Forms::Button^  five;
	private: System::Windows::Forms::Button^  one;
	private: System::Windows::Forms::Button^  two;
	private: System::Windows::Forms::Button^  six;
	private: System::Windows::Forms::Button^  eight;
	private: System::Windows::Forms::Button^  seven;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// My Variables
	private: 
		      double a,b,c,d;
			     String^ opr;
                    char oprtn;
				     

	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changeBackColourToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  blackToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lemonChiffonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  goldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wheatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  darkRedToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  silverToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  rb1;
	private: System::Windows::Forms::RadioButton^  rb2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

	private: System::Windows::Forms::Label^  lb2;
	private: System::Windows::Forms::Button^  decimal;
	private: System::Windows::Forms::Button^  module;
	private: System::Windows::Forms::Button^  hexadecimal;




	private: System::Windows::Forms::Button^  tan_rule;

	private: System::Windows::Forms::Button^  plus_minus;
	private: System::Windows::Forms::Button^  percentage;
	private: System::Windows::Forms::Button^  pow_2;
	private: System::Windows::Forms::Button^  sine_rule;
	private: System::Windows::Forms::Button^  cos_rule;





	private: System::Windows::Forms::Button^  pow_3;

	private: System::Windows::Forms::Button^  pie;

	private: System::Windows::Forms::Button^  sqrt;
	private: System::Windows::Forms::Button^  del;
private: System::Windows::Forms::Button^  clear_everything;
private: System::Windows::Forms::Button^  clear_all;
private: System::Windows::Forms::Button^  logarithm;
private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  userManualToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  updatesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  greyToolStripMenuItem;

			
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->comma = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeBackColourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lemonChiffonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->goldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wheatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkRedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->silverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userManualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->module = (gcnew System::Windows::Forms::Button());
			this->hexadecimal = (gcnew System::Windows::Forms::Button());
			this->tan_rule = (gcnew System::Windows::Forms::Button());
			this->plus_minus = (gcnew System::Windows::Forms::Button());
			this->percentage = (gcnew System::Windows::Forms::Button());
			this->pow_2 = (gcnew System::Windows::Forms::Button());
			this->sine_rule = (gcnew System::Windows::Forms::Button());
			this->cos_rule = (gcnew System::Windows::Forms::Button());
			this->pow_3 = (gcnew System::Windows::Forms::Button());
			this->pie = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->clear_everything = (gcnew System::Windows::Forms::Button());
			this->clear_all = (gcnew System::Windows::Forms::Button());
			this->logarithm = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb1
			// 
			this->tb1->BackColor = System::Drawing::Color::Gray;
			this->tb1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb1->ForeColor = System::Drawing::Color::White;
			this->tb1->Location = System::Drawing::Point(0, 31);
			this->tb1->Multiline = true;
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(485, 93);
			this->tb1->TabIndex = 0;
			this->tb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tb1->DoubleClick += gcnew System::EventHandler(this, &Form1::tb1_DoubleClick);
			// 
			// divide
			// 
			this->divide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"divide.BackgroundImage")));
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divide->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::Color::Lime;
			this->divide->Location = System::Drawing::Point(410, 318);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(75, 52);
			this->divide->TabIndex = 32;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &Form1::arth_op);
			// 
			// plus
			// 
			this->plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"plus.BackgroundImage")));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::Color::Lime;
			this->plus->Location = System::Drawing::Point(410, 130);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 47);
			this->plus->TabIndex = 31;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::arth_op);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::LightGray;
			this->minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"minus.BackgroundImage")));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->minus->ForeColor = System::Drawing::Color::Lime;
			this->minus->Location = System::Drawing::Point(410, 194);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 50);
			this->minus->TabIndex = 30;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::arth_op);
			// 
			// multiply
			// 
			this->multiply->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"multiply.BackgroundImage")));
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::Color::Lime;
			this->multiply->Location = System::Drawing::Point(410, 255);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(75, 46);
			this->multiply->TabIndex = 29;
			this->multiply->Text = L"X";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &Form1::arth_op);
			// 
			// comma
			// 
			this->comma->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"comma.BackgroundImage")));
			this->comma->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comma->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comma->ForeColor = System::Drawing::Color::Lime;
			this->comma->Location = System::Drawing::Point(12, 318);
			this->comma->Name = L"comma";
			this->comma->Size = System::Drawing::Size(75, 52);
			this->comma->TabIndex = 28;
			this->comma->Text = L".";
			this->comma->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->comma->UseVisualStyleBackColor = true;
			this->comma->Click += gcnew System::EventHandler(this, &Form1::comma_Click);
			// 
			// zero
			// 
			this->zero->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"zero.BackgroundImage")));
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::Color::Lime;
			this->zero->Location = System::Drawing::Point(138, 318);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(75, 52);
			this->zero->TabIndex = 27;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// equals
			// 
			this->equals->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"equals.BackgroundImage")));
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equals->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::Color::Lime;
			this->equals->Location = System::Drawing::Point(282, 318);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(75, 52);
			this->equals->TabIndex = 26;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = true;
			this->equals->Click += gcnew System::EventHandler(this, &Form1::equals_Click);
			// 
			// three
			// 
			this->three->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"three.BackgroundImage")));
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::Color::Lime;
			this->three->Location = System::Drawing::Point(282, 255);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 46);
			this->three->TabIndex = 25;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// nine
			// 
			this->nine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nine.BackgroundImage")));
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nine->ForeColor = System::Drawing::Color::Lime;
			this->nine->Location = System::Drawing::Point(282, 130);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 51);
			this->nine->TabIndex = 24;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// four
			// 
			this->four->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"four.BackgroundImage")));
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->four->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->four->ForeColor = System::Drawing::Color::Lime;
			this->four->Location = System::Drawing::Point(12, 195);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 50);
			this->four->TabIndex = 23;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// five
			// 
			this->five->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"five.BackgroundImage")));
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::Color::Lime;
			this->five->Location = System::Drawing::Point(138, 194);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 50);
			this->five->TabIndex = 22;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// one
			// 
			this->one->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"one.BackgroundImage")));
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::Color::Lime;
			this->one->Location = System::Drawing::Point(12, 255);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 46);
			this->one->TabIndex = 21;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// two
			// 
			this->two->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"two.BackgroundImage")));
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::Color::Lime;
			this->two->Location = System::Drawing::Point(138, 255);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 46);
			this->two->TabIndex = 20;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// six
			// 
			this->six->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"six.BackgroundImage")));
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::Color::Lime;
			this->six->Location = System::Drawing::Point(282, 194);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 50);
			this->six->TabIndex = 19;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// eight
			// 
			this->eight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"eight.BackgroundImage")));
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eight->ForeColor = System::Drawing::Color::Lime;
			this->eight->Location = System::Drawing::Point(138, 130);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 51);
			this->eight->TabIndex = 18;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// seven
			// 
			this->seven->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"seven.BackgroundImage")));
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->seven->ForeColor = System::Drawing::Color::Lime;
			this->seven->Location = System::Drawing::Point(12, 130);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 51);
			this->seven->TabIndex = 17;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &Form1::btn_click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SeaShell;
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(917, 27);
			this->menuStrip1->TabIndex = 34;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolsToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->menuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(53, 23);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->changeBackColourToolStripMenuItem});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// changeBackColourToolStripMenuItem
			// 
			this->changeBackColourToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->blackToolStripMenuItem, 
				this->lemonChiffonToolStripMenuItem, this->goldToolStripMenuItem, this->wheatToolStripMenuItem, this->darkRedToolStripMenuItem, 
				this->silverToolStripMenuItem, this->greyToolStripMenuItem});
			this->changeBackColourToolStripMenuItem->Name = L"changeBackColourToolStripMenuItem";
			this->changeBackColourToolStripMenuItem->Size = System::Drawing::Size(202, 24);
			this->changeBackColourToolStripMenuItem->Text = L"Change Back Colour";
			// 
			// blackToolStripMenuItem
			// 
			this->blackToolStripMenuItem->Name = L"blackToolStripMenuItem";
			this->blackToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->blackToolStripMenuItem->Text = L"Black";
			this->blackToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::blackToolStripMenuItem_Click_1);
			// 
			// lemonChiffonToolStripMenuItem
			// 
			this->lemonChiffonToolStripMenuItem->Name = L"lemonChiffonToolStripMenuItem";
			this->lemonChiffonToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->lemonChiffonToolStripMenuItem->Text = L"LemonChiffon";
			this->lemonChiffonToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lemonChiffonToolStripMenuItem_Click);
			// 
			// goldToolStripMenuItem
			// 
			this->goldToolStripMenuItem->Name = L"goldToolStripMenuItem";
			this->goldToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->goldToolStripMenuItem->Text = L"Gold";
			this->goldToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::goldToolStripMenuItem_Click);
			// 
			// wheatToolStripMenuItem
			// 
			this->wheatToolStripMenuItem->Name = L"wheatToolStripMenuItem";
			this->wheatToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->wheatToolStripMenuItem->Text = L"Wheat";
			this->wheatToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wheatToolStripMenuItem_Click);
			// 
			// darkRedToolStripMenuItem
			// 
			this->darkRedToolStripMenuItem->Name = L"darkRedToolStripMenuItem";
			this->darkRedToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->darkRedToolStripMenuItem->Text = L"DarkRed";
			this->darkRedToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::darkRedToolStripMenuItem_Click);
			// 
			// silverToolStripMenuItem
			// 
			this->silverToolStripMenuItem->Name = L"silverToolStripMenuItem";
			this->silverToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->silverToolStripMenuItem->Text = L"Silver";
			this->silverToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::silverToolStripMenuItem_Click);
			// 
			// greyToolStripMenuItem
			// 
			this->greyToolStripMenuItem->Name = L"greyToolStripMenuItem";
			this->greyToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->greyToolStripMenuItem->Text = L"Grey";
			this->greyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::greyToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->userManualToolStripMenuItem, 
				this->updatesToolStripMenuItem, this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(49, 23);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// userManualToolStripMenuItem
			// 
			this->userManualToolStripMenuItem->Name = L"userManualToolStripMenuItem";
			this->userManualToolStripMenuItem->Size = System::Drawing::Size(156, 24);
			this->userManualToolStripMenuItem->Text = L"User Manual";
			// 
			// updatesToolStripMenuItem
			// 
			this->updatesToolStripMenuItem->Name = L"updatesToolStripMenuItem";
			this->updatesToolStripMenuItem->Size = System::Drawing::Size(156, 24);
			this->updatesToolStripMenuItem->Text = L"Updates";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(156, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MintCream;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 453);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 23);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Change Features";
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->BackColor = System::Drawing::Color::White;
			this->rb1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rb1.BackgroundImage")));
			this->rb1->Checked = true;
			this->rb1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rb1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb1->ForeColor = System::Drawing::Color::Lime;
			this->rb1->Location = System::Drawing::Point(37, 495);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(93, 26);
			this->rb1->TabIndex = 36;
			this->rb1->TabStop = true;
			this->rb1->Text = L"Standard";
			this->rb1->UseVisualStyleBackColor = false;
			this->rb1->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb1_CheckedChanged);
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->rb2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rb2.BackgroundImage")));
			this->rb2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rb2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rb2->ForeColor = System::Drawing::Color::Lime;
			this->rb2->Location = System::Drawing::Point(37, 521);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(95, 26);
			this->rb2->TabIndex = 37;
			this->rb2->Text = L"Advanced";
			this->rb2->UseVisualStyleBackColor = false;
			this->rb2->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb2_CheckedChanged);
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->BackColor = System::Drawing::Color::Gray;
			this->lb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lb2->Location = System::Drawing::Point(9, 40);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(51, 16);
			this->lb2->TabIndex = 39;
			this->lb2->Text = L"label2";
			this->lb2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// decimal
			// 
			this->decimal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"decimal.BackgroundImage")));
			this->decimal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::Color::Lime;
			this->decimal->Location = System::Drawing::Point(565, 379);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(75, 52);
			this->decimal->TabIndex = 51;
			this->decimal->Text = L"dec";
			this->decimal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->decimal->UseVisualStyleBackColor = true;
			this->decimal->Click += gcnew System::EventHandler(this, &Form1::decimal_Click);
			// 
			// module
			// 
			this->module->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"module.BackgroundImage")));
			this->module->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->module->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->module->ForeColor = System::Drawing::Color::Lime;
			this->module->Location = System::Drawing::Point(688, 379);
			this->module->Name = L"module";
			this->module->Size = System::Drawing::Size(75, 52);
			this->module->TabIndex = 50;
			this->module->Text = L"mod";
			this->module->UseVisualStyleBackColor = true;
			this->module->Click += gcnew System::EventHandler(this, &Form1::arth_op);
			// 
			// hexadecimal
			// 
			this->hexadecimal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"hexadecimal.BackgroundImage")));
			this->hexadecimal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->hexadecimal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->hexadecimal->ForeColor = System::Drawing::Color::Lime;
			this->hexadecimal->Location = System::Drawing::Point(823, 374);
			this->hexadecimal->Name = L"hexadecimal";
			this->hexadecimal->Size = System::Drawing::Size(75, 52);
			this->hexadecimal->TabIndex = 49;
			this->hexadecimal->Text = L"hex";
			this->hexadecimal->UseVisualStyleBackColor = true;
			this->hexadecimal->Click += gcnew System::EventHandler(this, &Form1::hexadecimal_Click);
			// 
			// tan_rule
			// 
			this->tan_rule->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tan_rule.BackgroundImage")));
			this->tan_rule->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->tan_rule->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tan_rule->ForeColor = System::Drawing::Color::Lime;
			this->tan_rule->Location = System::Drawing::Point(823, 288);
			this->tan_rule->Name = L"tan_rule";
			this->tan_rule->Size = System::Drawing::Size(75, 52);
			this->tan_rule->TabIndex = 48;
			this->tan_rule->Text = L"tan";
			this->tan_rule->UseVisualStyleBackColor = true;
			this->tan_rule->Click += gcnew System::EventHandler(this, &Form1::tan_rule_Click);
			// 
			// plus_minus
			// 
			this->plus_minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"plus_minus.BackgroundImage")));
			this->plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus_minus->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->plus_minus->ForeColor = System::Drawing::Color::Lime;
			this->plus_minus->Location = System::Drawing::Point(12, 384);
			this->plus_minus->Name = L"plus_minus";
			this->plus_minus->Size = System::Drawing::Size(75, 47);
			this->plus_minus->TabIndex = 47;
			this->plus_minus->Text = L"±";
			this->plus_minus->UseVisualStyleBackColor = true;
			this->plus_minus->Click += gcnew System::EventHandler(this, &Form1::plus_minus_Click);
			// 
			// percentage
			// 
			this->percentage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"percentage.BackgroundImage")));
			this->percentage->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->percentage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->percentage->ForeColor = System::Drawing::Color::Lime;
			this->percentage->Location = System::Drawing::Point(565, 208);
			this->percentage->Name = L"percentage";
			this->percentage->Size = System::Drawing::Size(75, 50);
			this->percentage->TabIndex = 46;
			this->percentage->Text = L"‰";
			this->percentage->UseVisualStyleBackColor = true;
			this->percentage->Click += gcnew System::EventHandler(this, &Form1::percentage_Click);
			// 
			// pow_2
			// 
			this->pow_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pow_2.BackgroundImage")));
			this->pow_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pow_2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pow_2->ForeColor = System::Drawing::Color::Lime;
			this->pow_2->Location = System::Drawing::Point(688, 208);
			this->pow_2->Name = L"pow_2";
			this->pow_2->Size = System::Drawing::Size(75, 50);
			this->pow_2->TabIndex = 45;
			this->pow_2->Text = L"^2";
			this->pow_2->UseVisualStyleBackColor = true;
			this->pow_2->Click += gcnew System::EventHandler(this, &Form1::pow_2_Click);
			// 
			// sine_rule
			// 
			this->sine_rule->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sine_rule.BackgroundImage")));
			this->sine_rule->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sine_rule->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sine_rule->ForeColor = System::Drawing::Color::Lime;
			this->sine_rule->Location = System::Drawing::Point(565, 288);
			this->sine_rule->Name = L"sine_rule";
			this->sine_rule->Size = System::Drawing::Size(75, 52);
			this->sine_rule->TabIndex = 44;
			this->sine_rule->Text = L"sin";
			this->sine_rule->UseVisualStyleBackColor = true;
			this->sine_rule->Click += gcnew System::EventHandler(this, &Form1::sine_rule_Click);
			// 
			// cos_rule
			// 
			this->cos_rule->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cos_rule.BackgroundImage")));
			this->cos_rule->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cos_rule->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cos_rule->ForeColor = System::Drawing::Color::Lime;
			this->cos_rule->Location = System::Drawing::Point(688, 288);
			this->cos_rule->Name = L"cos_rule";
			this->cos_rule->Size = System::Drawing::Size(75, 52);
			this->cos_rule->TabIndex = 43;
			this->cos_rule->Text = L"cos";
			this->cos_rule->UseVisualStyleBackColor = true;
			this->cos_rule->Click += gcnew System::EventHandler(this, &Form1::cos_rule_Click);
			// 
			// pow_3
			// 
			this->pow_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pow_3.BackgroundImage")));
			this->pow_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pow_3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pow_3->ForeColor = System::Drawing::Color::Lime;
			this->pow_3->Location = System::Drawing::Point(823, 208);
			this->pow_3->Name = L"pow_3";
			this->pow_3->Size = System::Drawing::Size(75, 50);
			this->pow_3->TabIndex = 42;
			this->pow_3->Text = L"^3";
			this->pow_3->UseVisualStyleBackColor = true;
			this->pow_3->Click += gcnew System::EventHandler(this, &Form1::pow_3_Click);
			// 
			// pie
			// 
			this->pie->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pie.BackgroundImage")));
			this->pie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pie->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pie->ForeColor = System::Drawing::Color::Lime;
			this->pie->Location = System::Drawing::Point(688, 132);
			this->pie->Name = L"pie";
			this->pie->Size = System::Drawing::Size(75, 47);
			this->pie->TabIndex = 41;
			this->pie->Text = L"π";
			this->pie->UseVisualStyleBackColor = true;
			this->pie->Click += gcnew System::EventHandler(this, &Form1::pie_Click);
			// 
			// sqrt
			// 
			this->sqrt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sqrt.BackgroundImage")));
			this->sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sqrt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sqrt->ForeColor = System::Drawing::Color::Lime;
			this->sqrt->Location = System::Drawing::Point(565, 128);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(75, 51);
			this->sqrt->TabIndex = 40;
			this->sqrt->Text = L" √";
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &Form1::sqrt_Click);
			// 
			// del
			// 
			this->del->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"del.BackgroundImage")));
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->del->ForeColor = System::Drawing::Color::Lime;
			this->del->Location = System::Drawing::Point(410, 388);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(75, 52);
			this->del->TabIndex = 52;
			this->del->Text = L"«";
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &Form1::del_Click);
			// 
			// clear_everything
			// 
			this->clear_everything->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"clear_everything.BackgroundImage")));
			this->clear_everything->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_everything->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clear_everything->ForeColor = System::Drawing::Color::Lime;
			this->clear_everything->Location = System::Drawing::Point(138, 388);
			this->clear_everything->Name = L"clear_everything";
			this->clear_everything->Size = System::Drawing::Size(75, 52);
			this->clear_everything->TabIndex = 53;
			this->clear_everything->Text = L"CE";
			this->clear_everything->UseVisualStyleBackColor = true;
			this->clear_everything->Click += gcnew System::EventHandler(this, &Form1::clear_everything_Click);
			// 
			// clear_all
			// 
			this->clear_all->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"clear_all.BackgroundImage")));
			this->clear_all->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_all->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clear_all->ForeColor = System::Drawing::Color::Lime;
			this->clear_all->Location = System::Drawing::Point(282, 393);
			this->clear_all->Name = L"clear_all";
			this->clear_all->Size = System::Drawing::Size(75, 47);
			this->clear_all->TabIndex = 54;
			this->clear_all->Text = L"C";
			this->clear_all->UseVisualStyleBackColor = true;
			this->clear_all->Click += gcnew System::EventHandler(this, &Form1::clear_all_Click);
			// 
			// logarithm
			// 
			this->logarithm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logarithm.BackgroundImage")));
			this->logarithm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logarithm->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->logarithm->ForeColor = System::Drawing::Color::Lime;
			this->logarithm->Location = System::Drawing::Point(823, 130);
			this->logarithm->Name = L"logarithm";
			this->logarithm->Size = System::Drawing::Size(75, 47);
			this->logarithm->TabIndex = 55;
			this->logarithm->Text = L"log";
			this->logarithm->UseVisualStyleBackColor = true;
			this->logarithm->Click += gcnew System::EventHandler(this, &Form1::logarithm_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(917, 585);
			this->Controls->Add(this->logarithm);
			this->Controls->Add(this->clear_all);
			this->Controls->Add(this->clear_everything);
			this->Controls->Add(this->del);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->module);
			this->Controls->Add(this->hexadecimal);
			this->Controls->Add(this->tan_rule);
			this->Controls->Add(this->plus_minus);
			this->Controls->Add(this->percentage);
			this->Controls->Add(this->pow_2);
			this->Controls->Add(this->sine_rule);
			this->Controls->Add(this->cos_rule);
			this->Controls->Add(this->pow_3);
			this->Controls->Add(this->pie);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->lb2);
			this->Controls->Add(this->rb2);
			this->Controls->Add(this->rb1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->comma);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->three);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->four);
			this->Controls->Add(this->five);
			this->Controls->Add(this->one);
			this->Controls->Add(this->two);
			this->Controls->Add(this->six);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->BackColorChanged += gcnew System::EventHandler(this, &Form1::blackToolStripMenuItem_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 Form1::Width = 502;
				   Form1::Height = 628;
				     tb1->Width = 485;
				             lb2->Text ="";
	
			 }

private: System::Void comma_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(!tb1->Text->Contains("."))
			 {
				 tb1->Text = tb1->Text + ".";
			 }
		 }



private: System::Void equals_Click(System::Object^  sender, System::EventArgs^  e) {

			 b = Double::Parse(tb1->Text);
			 if(opr =="+")
			 {
				 c = a+b;
				  tb1->Text = System::Convert::ToString(c);
			 }
			 else if(opr =="-")
			 {
				 c = a-b;
				  tb1->Text = System::Convert::ToString(c);
			 }
			 else if(opr =="X")
			 {
				 c = a*b;
				  tb1->Text = System::Convert::ToString(c);
			 }
			   
			 else if(opr =="/")
			 {
				 c = a/b;
				  tb1->Text = System::Convert::ToString(c);
			 }

			 else if(opr =="mod")
			 {
				 int x,y;
				   double z;
				   x = Convert::ToInt32(a);
				     y= Convert::ToInt32(b);
					   z = (x % y);
					   tb1->Text = Convert::ToString(z);

			 }
			
		 }
private: System::Void blackToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void tb1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 //clearing the text box
			 tb1-> SelectAll();

			    tb1->Text = "";
				   lb2->Text = "";
		 }
private: System::Void thisProgramWasWrittenInCByAStudentCalledBernardTowindoSirBentoToolStripMenuItem_Click(System::Object^  sender, 
			 System::EventArgs^  e) {
		 }

private: System::Void blackToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::Black;  //Changing Back Colour


                  /* Form^ myForm = blackToolStripMenuItem->FindForm();
                        myForm->BackColor = Color::ForestGreen;*/	 
		 }

private: System::Void lemonChiffonToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::LemonChiffon;
		 }

private: System::Void goldToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::Gold;
		 }

private: System::Void wheatToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::Wheat;
		 }

private: System::Void darkRedToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::DarkRed;
		 }


private: System::Void silverToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::Silver;
		 }

private: System::Void greyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->BackColor = System::Drawing::Color::Gray;
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void rb2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
                     
			 Form1::Width = 936;
				   Form1::Height = 628;
				      tb1->Width = 898;
			
					 
		 }
private: System::Void rb1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 Form1::Width = 502;
			   Form1::Height = 628;
			        tb1->Width = 485;
			
			 
		 }
private: System::Void btn_click(System::Object^  sender, System::EventArgs^  e) {
			 //setting all number buttons to one event

          Button^num =safe_cast<Button^>(sender);
		    
		  if(tb1->Text == "0")
		  {
			  tb1->Text = num->Text;
		  }

		  else
		  {
			  tb1->Text = tb1->Text + num->Text;
		  }

		 }
private: System::Void arth_op(System::Object^  sender, System::EventArgs^  e) {

			 //Operations
			 Button^Op = safe_cast<Button^>(sender);
			   a = Double::Parse(tb1->Text);
			     
				   opr= Op->Text; //whatever sign is in variable OP 
					  
				   lb2->Text =  tb1->Text +" "+ opr;
				         tb1->Text ="";
						 

		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void del_Click(System::Object^  sender, System::EventArgs^  e) {

			 //deleting
			 if(tb1->Text->Length > 0)
			 {   
				 tb1->Text = tb1->Text->Remove(tb1->Text->Length -1, 1);

			 }
		 }
private: System::Void pie_Click(System::Object^  sender, System::EventArgs^  e) {
			 //pie
			 tb1->Text =("3.1428571428571428571428571428571");
		 }
private: System::Void logarithm_Click(System::Object^  sender, System::EventArgs^  e) {

			 //calculating log
			 d=Double::Parse(tb1->Text);
			  lb2->Text =Convert::ToString("log"+"("+(tb1->Text)+")");
			    d = Math::Log(d);
				  tb1->Text = Convert::ToString(d);

		 }
private: System::Void sqrt_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Calculating Square Root
			  d=Double::Parse(tb1->Text);
			    d = Math::Sqrt(d);
				  tb1->Text = Convert::ToString(d);
		 }
private: System::Void percentage_Click(System::Object^  sender, System::EventArgs^  e) {
            
			 //Calculating Percentage
			 d=Double::Parse(tb1->Text);
			   d =(d/100);
			    tb1->Text = Convert::ToString(d);
		 }
private: System::Void pow_2_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Calculating To The Power 2
			  d=Double::Parse(tb1->Text);
			    d = Math::Pow(d,2);
				  tb1->Text = Convert::ToString(d);
		 }
private: System::Void pow_3_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 //Calculating To The Power 3
			  d=Double::Parse(tb1->Text);
			    d = Math::Pow(d,3);
				  tb1->Text = Convert::ToString(d);
		 }
private: System::Void sine_rule_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Calculating sine
			  d=Double::Parse(tb1->Text);
			    d = Math::Sin(d);
				lb2->Text =Convert::ToString("sin"+"("+(tb1->Text)+")");
				  tb1->Text = Convert::ToString(d);

		 }
private: System::Void cos_rule_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 //Calculating cos
			  d=Double::Parse(tb1->Text);
			    d = Math::Cos(d);
				lb2->Text =Convert::ToString("cos"+"("+(tb1->Text)+")");
				  tb1->Text = Convert::ToString(d);
		 }
private: System::Void tan_rule_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 //Calculating tan
			  d=Double::Parse(tb1->Text);
			    d = Math::Tan(d);
				lb2->Text =Convert::ToString("tan"+"("+(tb1->Text)+")");
				  tb1->Text = Convert::ToString(d);
		 }
private: System::Void clear_everything_Click(System::Object^  sender, System::EventArgs^  e) {

			 tb1->Clear();
			  lb2->Text = "";
		 }
private: System::Void clear_all_Click(System::Object^  sender, System::EventArgs^  e) {

			     lb2->Text = "";
				    tb1->Text = "";
		 }
private: System::Void plus_minus_Click(System::Object^  sender, System::EventArgs^  e) {

			   double q =double::Parse(tb1->Text);
			       tb1->Text = "";
			           tb1->Text = tb1->Text  + Convert::ToString(-q);   

			 /*if(!tb1->Text->Contains("-"))
			 {
				 tb1->Text = tb1->Text->Remove(0, 1);
			 }
			 else
			 {
				  tb1->Text = "-" +  tb1->Text;
			 }*/
		 }
private: System::Void decimal_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Converting To Decimal
			 int deci ;
			    d= Double::Parse(tb1->Text);
				 deci=Convert::ToInt32(d);
     			    tb1->Text =Convert::ToString(deci);

		 }
private: System::Void hexadecimal_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		   //Calculating Hexadecimal
			  int hex;
			    lb2->Text = " ";
			     d=Double::Parse(tb1->Text);
				   hex = Convert::ToInt32(d);
				     tb1->Text =Convert::ToString(hex,16);
				     
		 
		 }

private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show("This Calculator Was Made Using C++" "\n""Email: Bernardtowindo38@gmail.com " "\n" "Instagram: @Bento_38 " "\n" "Phone: +263771648902 " " \n","Made in 2018 by Bernard Towindo(Sir Bento)");
		 }
};
}

