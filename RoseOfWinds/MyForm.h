#pragma once

namespace course {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(591, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(461, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Месяц";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Январь", L"Февраль", L"Март", L"Апрель", L"Май",
					L"Июнь", L"Июль", L"Август", L"Сентябрь", L"Октябрь", L"Ноябрь", L"Декабрь"
			});
			this->comboBox1->Location = System::Drawing::Point(20, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(417, 32);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Выберите месяц";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->numericUpDown8);
			this->groupBox2->Controls->Add(this->numericUpDown7);
			this->groupBox2->Controls->Add(this->numericUpDown6);
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(591, 147);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(461, 621);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Направаление ветра";
			this->groupBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::GroupBox2_Paint);
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox2_Enter);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(301, 568);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 25);
			this->label14->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(20, 568);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 25);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Сумма";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(301, 531);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 25);
			this->label12->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 529);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 25);
			this->label11->TabIndex = 5;
			this->label11->Text = L" Осталось";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(300, 468);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 29);
			this->numericUpDown8->TabIndex = 4;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown8_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(300, 412);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 29);
			this->numericUpDown7->TabIndex = 4;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown7_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(300, 356);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 29);
			this->numericUpDown6->TabIndex = 4;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown6_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(300, 299);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 29);
			this->numericUpDown5->TabIndex = 4;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown5_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(300, 240);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 29);
			this->numericUpDown4->TabIndex = 4;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown4_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(300, 184);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 29);
			this->numericUpDown3->TabIndex = 4;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown3_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(300, 132);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 29);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown2_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(300, 79);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 29);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::NumericUpDown1_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 472);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 25);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Северо-запад";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 416);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 25);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Запад";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 360);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 25);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Юго-запад";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Юг";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Юго-восток";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Восток";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Северо-восток";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Север";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(295, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дни";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сторона";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 563);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 639);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(242, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Закрасить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 715);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(242, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(32, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(520, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::PictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PictureBox1_Paint_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(347, 563);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(205, 205);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1048, 775);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 25);
			this->label15->TabIndex = 5;
			this->label15->Text = L"31";
			this->label15->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 793);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Роза ветров";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (comboBox1->SelectedIndex) {
		case 0:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 1:
			label15->Text = "28";
			label12->Text = "28";
			numericUpDown1->Maximum = 28;
			numericUpDown2->Maximum = 28;
			numericUpDown3->Maximum = 28;
			numericUpDown4->Maximum = 28;
			numericUpDown5->Maximum = 28;
			numericUpDown6->Maximum = 28;
			numericUpDown7->Maximum = 28;
			numericUpDown8->Maximum = 28;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 2:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 3:
			label15->Text = "30";
			label12->Text = "30";
			numericUpDown1->Maximum = 30;
			numericUpDown2->Maximum = 30;
			numericUpDown3->Maximum = 30;
			numericUpDown4->Maximum = 30;
			numericUpDown5->Maximum = 30;
			numericUpDown6->Maximum = 30;
			numericUpDown7->Maximum = 30;
			numericUpDown8->Maximum = 30;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0; 
			break;
		case 4:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 5:
			label15->Text = "30";
			label12->Text = "30";
			numericUpDown1->Maximum = 30;
			numericUpDown2->Maximum = 30;
			numericUpDown3->Maximum = 30;
			numericUpDown4->Maximum = 30;
			numericUpDown5->Maximum = 30;
			numericUpDown6->Maximum = 30;
			numericUpDown7->Maximum = 30;
			numericUpDown8->Maximum = 30;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 6:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 7:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 8:
			label15->Text = "30";
			label12->Text = "30";
			numericUpDown1->Maximum = 30;
			numericUpDown2->Maximum = 30;
			numericUpDown3->Maximum = 30;
			numericUpDown4->Maximum = 30;
			numericUpDown5->Maximum = 30;
			numericUpDown6->Maximum = 30;
			numericUpDown7->Maximum = 30;
			numericUpDown8->Maximum = 30;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 9:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 10:
			label15->Text = "30";
			label12->Text = "30";
			numericUpDown1->Maximum = 30;
			numericUpDown2->Maximum = 30;
			numericUpDown3->Maximum = 30;
			numericUpDown4->Maximum = 30;
			numericUpDown5->Maximum = 30;
			numericUpDown6->Maximum = 30;
			numericUpDown7->Maximum = 30;
			numericUpDown8->Maximum = 30;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		case 11:
			label15->Text = "31";
			label12->Text = "31";
			numericUpDown1->Maximum = 31;
			numericUpDown2->Maximum = 31;
			numericUpDown3->Maximum = 31;
			numericUpDown4->Maximum = 31;
			numericUpDown5->Maximum = 31;
			numericUpDown6->Maximum = 31;
			numericUpDown7->Maximum = 31;
			numericUpDown8->Maximum = 31;
			numericUpDown1->Value = 0;
			numericUpDown2->Value = 0;
			numericUpDown3->Value = 0;
			numericUpDown4->Value = 0;
			numericUpDown5->Value = 0;
			numericUpDown6->Value = 0;
			numericUpDown7->Value = 0;
			numericUpDown8->Value = 0;
			break;
		}
	}
	private: System::Void GroupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
 	}
private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int x1, x2, x3, x4, x5, x6, x7, x8;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	x1 = Convert::ToInt32(numericUpDown1->Value)*10+5;
	x2 = Convert::ToInt32(numericUpDown2->Value)*10+5;
	x3 = Convert::ToInt32(numericUpDown3->Value)*10+5;
	x4 = Convert::ToInt32(numericUpDown4->Value)*10+5;
	x5 = Convert::ToInt32(numericUpDown5->Value)*10+5;
	x6 = Convert::ToInt32(numericUpDown6->Value)*10+5;
	x7 = Convert::ToInt32(numericUpDown7->Value)*10+5;
	x8 = Convert::ToInt32(numericUpDown8->Value)*10+5;
	Graphics^ g = pictureBox1->CreateGraphics();
	Pen ^ pen = gcnew Pen(Color::Red, 3);
	Point point1 = Point(143,141-x1);
	Point point2 = Point(143+x2,141-x2);
	Point point3 = Point(143+x3,141);
	Point point4 = Point(143+x4,141+x4);
	Point point5 = Point(143,141+x5);
	Point point6 = Point(143-x6,141+x6);
	Point point7 = Point(143-x7,141);
	Point point8 = Point(143-x8,141-x8);
	array<Point>^ Points = { point1, point2, point3, point4, point5, point6, point7, point8};
	g->DrawPolygon(pen, Points);
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void GroupBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = Image::FromFile("C:\\Users\\Oleksandr\\Downloads\\course\\course\\rose (1).jpg");

}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ graf = pictureBox1->CreateGraphics();
	HatchBrush^ HBrush = gcnew HatchBrush(HatchStyle::DiagonalCross, Color::Red, Color::Empty);
	int x1, x2, x3, x4, x5, x6, x7, x8;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	x1 = Convert::ToInt32(numericUpDown1->Value) * 10+5;
	x2 = Convert::ToInt32(numericUpDown2->Value) * 10+5;
	x3 = Convert::ToInt32(numericUpDown3->Value) * 10+5;
	x4 = Convert::ToInt32(numericUpDown4->Value) * 10+5;
	x5 = Convert::ToInt32(numericUpDown5->Value) * 10+5;
	x6 = Convert::ToInt32(numericUpDown6->Value) * 10+5;
	x7 = Convert::ToInt32(numericUpDown7->Value) * 10+5;
	x8 = Convert::ToInt32(numericUpDown8->Value) * 10+5;
	Graphics^ g = pictureBox1->CreateGraphics();
	Pen^ brsh = gcnew Pen(Color::Red);
	Point point1 = Point(143, 141 - x1-2);
	Point point2 = Point(143 + x2, 141 - x2);
	Point point3 = Point(143 + x3, 141);
	Point point4 = Point(143 + x4, 141 + x4);
	Point point5 = Point(143, 141 + x5);
	Point point6 = Point(143 - x6, 141 + x6);
	Point point7 = Point(143 - x7, 141);
	Point point8 = Point(143 - x8, 141 - x8);
	array<Point>^ Points = { point1, point2, point3, point4, point5, point6, point7, point8 };
	graf->FillPolygon(HBrush, Points);
}
private: System::Void NumericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum=0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label14->Text = Convert::ToString(sum);
	label12->Text = Convert::ToString(max-sum);
	//numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
}
private: System::Void NumericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label14->Text = Convert::ToString(sum);
	label12->Text = Convert::ToString(max - sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	//numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
}
private: System::Void NumericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int max = Convert::ToInt32(label15->Text);
	int y1, y2, y3, y4, y5, y6, y7, y8;
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label14->Text = Convert::ToString(sum);
	label12->Text = Convert::ToString(max - sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	//numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
}
private: System::Void NumericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label12->Text = Convert::ToString(max - sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	//numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
	label14->Text = Convert::ToString(sum);
}
private: System::Void NumericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label12->Text = Convert::ToString(max - sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	//numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
	label14->Text = Convert::ToString(sum);
}
private: System::Void NumericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label12->Text = Convert::ToString(max -sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	//numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
	label14->Text = Convert::ToString(sum);
}
private: System::Void NumericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label12->Text = Convert::ToString(max - sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	//numericUpDown7->Maximum = max - (Convert::ToInt32(numericUpDown7->Value));
	numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
	label14->Text = Convert::ToString(sum);
}
private: System::Void NumericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int x1, x2, x3, x4, x5, x6, x7, x8, sum = 0;
	int y1, y2, y3, y4, y5, y6, y7, y8;
	int max = Convert::ToInt32(label15->Text);
	x1 = Convert::ToInt32(numericUpDown1->Value);
	x2 = Convert::ToInt32(numericUpDown2->Value);
	x3 = Convert::ToInt32(numericUpDown3->Value);
	x4 = Convert::ToInt32(numericUpDown4->Value);
	x5 = Convert::ToInt32(numericUpDown5->Value);
	x6 = Convert::ToInt32(numericUpDown6->Value);
	x7 = Convert::ToInt32(numericUpDown7->Value);
	x8 = Convert::ToInt32(numericUpDown8->Value);
	sum += x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8;
	label12->Text = Convert::ToString(max -sum);
	numericUpDown1->Maximum = max - sum + Convert::ToInt32(numericUpDown1->Value);
	numericUpDown2->Maximum = max - sum + Convert::ToInt32(numericUpDown2->Value);
	numericUpDown3->Maximum = max - sum + Convert::ToInt32(numericUpDown3->Value);
	numericUpDown4->Maximum = max - sum + Convert::ToInt32(numericUpDown4->Value);
	numericUpDown5->Maximum = max - sum + Convert::ToInt32(numericUpDown5->Value);
	numericUpDown6->Maximum = max - sum + Convert::ToInt32(numericUpDown6->Value);
	numericUpDown7->Maximum = max - sum + Convert::ToInt32(numericUpDown7->Value);
	//numericUpDown8->Maximum = max - sum + Convert::ToInt32(numericUpDown8->Value);
	
	label14->Text = Convert::ToString(sum);
	

}
};
}
