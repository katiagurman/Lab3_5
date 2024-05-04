#pragma once
#include <math.h>
namespace Lab35 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStrip^ toolStrip2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel4;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel5;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel6;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel7;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel8;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel9;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel5 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel9 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel6 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel7 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel8 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(529, 456);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->toolStrip1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(521, 427);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripLabel1,
					this->toolStripSeparator1, this->toolStripLabel2, this->toolStripSeparator2, this->toolStripLabel3, this->toolStripSeparator3,
					this->toolStripLabel4
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(515, 25);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(85, 22);
			this->toolStripLabel1->Text = L"Обчислити";
			this->toolStripLabel1->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(74, 22);
			this->toolStripLabel2->Text = L"Очистити";
			this->toolStripLabel2->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(110, 22);
			this->toolStripLabel3->Text = L"Про програму";
			this->toolStripLabel3->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel3_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel4
			// 
			this->toolStripLabel4->Name = L"toolStripLabel4";
			this->toolStripLabel4->Size = System::Drawing::Size(90, 22);
			this->toolStripLabel4->Text = L"Про автора";
			this->toolStripLabel4->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(151, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Обчислення";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(30, 105);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(81, 147);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->toolStrip2);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(521, 427);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// toolStrip2
			// 
			this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripLabel5,
					this->toolStripLabel9, this->toolStripLabel6, this->toolStripLabel7, this->toolStripLabel8
			});
			this->toolStrip2->Location = System::Drawing::Point(3, 3);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(515, 25);
			this->toolStrip2->TabIndex = 15;
			this->toolStrip2->Text = L"toolStrip2";
			// 
			// toolStripLabel5
			// 
			this->toolStripLabel5->Name = L"toolStripLabel5";
			this->toolStripLabel5->Size = System::Drawing::Size(96, 22);
			this->toolStripLabel5->Text = L"Обчислити y";
			this->toolStripLabel5->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel5_Click);
			// 
			// toolStripLabel9
			// 
			this->toolStripLabel9->Name = L"toolStripLabel9";
			this->toolStripLabel9->Size = System::Drawing::Size(96, 22);
			this->toolStripLabel9->Text = L"Обчислити z";
			this->toolStripLabel9->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel9_Click);
			// 
			// toolStripLabel6
			// 
			this->toolStripLabel6->Name = L"toolStripLabel6";
			this->toolStripLabel6->Size = System::Drawing::Size(74, 22);
			this->toolStripLabel6->Text = L"Очистити";
			this->toolStripLabel6->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel6_Click);
			// 
			// toolStripLabel7
			// 
			this->toolStripLabel7->Name = L"toolStripLabel7";
			this->toolStripLabel7->Size = System::Drawing::Size(110, 22);
			this->toolStripLabel7->Text = L"Про програму";
			this->toolStripLabel7->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel7_Click);
			// 
			// toolStripLabel8
			// 
			this->toolStripLabel8->Name = L"toolStripLabel8";
			this->toolStripLabel8->Size = System::Drawing::Size(90, 22);
			this->toolStripLabel8->Text = L"Про автора";
			this->toolStripLabel8->Click += gcnew System::EventHandler(this, &MyForm::toolStripLabel8_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(283, 186);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(199, 148);
			this->listBox2->TabIndex = 14;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(43, 186);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(198, 148);
			this->listBox1->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(361, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"h =";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(391, 115);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(199, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"b = ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(233, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"a = ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 68);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(528, 27);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(528, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 460);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ richTextBoxText = richTextBox1->Text;
		array<String^>^ lines = richTextBoxText->Split('\n');
		int product = 1;
		for each (String ^ line in lines) {
			int number;
			if (Int32::TryParse(line, number)) {
				if (number % 5 == 0) {
					product *= number;
				}
			}
		}
		textBox1->Text = Convert::ToString(product);
	}
private: System::Void toolStripLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text == " ";
}
private: System::Void toolStripLabel5_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, h, y;
	a = Convert::ToDouble(textBox2->Text);
	b = Convert::ToDouble(textBox3->Text);
	h = Convert::ToDouble(textBox4->Text);
	listBox1->Items->Add("x    ||    y");
	double x = a;
	while (x <= b)
	{
		y = (1 / exp(x));
		listBox1->Items->Add(x.ToString("0") + "\t||\t" + y.ToString("0.00"));
		x += h;
	}
}

private: System::Void toolStripLabel9_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, h, z;
	a = Convert::ToDouble(textBox2->Text);
	b = Convert::ToDouble(textBox3->Text);
	h = Convert::ToDouble(textBox4->Text);
	listBox2->Items->Add("x    ||    y");
	double x = a;
	while (x <= b)
	{
		z = (log((x / 2) + 0.1));
		listBox2->Items->Add(x.ToString("0") + "\t||\t" + z.ToString("0.00"));
		x += h;
	}
}
private: System::Void toolStripLabel6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text == " ";
	textBox3->Text == " ";
	textBox4->Text == " ";
	listBox1->Text == " ";
	listBox2->Text == " ";
}
private: System::Void toolStripLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ввести 7 цілих чисел та обчислити добуток елементів, кратних до числа 5");
}
private: System::Void toolStripLabel4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Гурман Катерина Ігорівна, студентка 3 курсу, на спеіальності Середня освіта(математика), з Вінницького Державного педагогічного університету імені Михайла Коцюбинського");
}
	private: System::Void toolStripLabel7_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Проект «Табулювання функцій». Написати програму реалізації алгоритму зобов’язковими коментарями, розмістіть на формі дані про задачу та автора програми, забезпечити очищення вхідних даних(програма реалізується в середовищі MS Visual C++). Протабулювати задану функцію, тобто обчислити значення функції на відрізку [a b]; з кроком h. На початку програми потрібно підключити бібліотеку математичних функцій : #include <math.h>");
}
private: System::Void toolStripLabel8_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Гурман Катерина Ігорівна, студентка 3 курсу, на спеіальності Середня освіта(математика), з Вінницького Державного педагогічного університету імені Михайла Коцюбинського");
}
};
}
