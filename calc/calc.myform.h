#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
namespace calc {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;






	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(23, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 30);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(302, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 30);
			this->textBox2->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button5->Location = System::Drawing::Point(505, 31);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 31);
			this->button5->TabIndex = 9;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"2", L"3", L"4", L"8", L"9", L"10", L"16" });
			this->comboBox1->Location = System::Drawing::Point(157, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(63, 32);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"2", L"3", L"4", L"8", L"9", L"10", L"16" });
			this->comboBox2->Location = System::Drawing::Point(436, 68);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(63, 32);
			this->comboBox2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(19, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(303, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 24);
			this->label2->TabIndex = 13;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"2", L"3", L"4", L"8", L"9", L"10", L"16" });
			this->comboBox3->Location = System::Drawing::Point(560, 68);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(63, 32);
			this->comboBox3->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(556, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 16;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox4->Location = System::Drawing::Point(236, 31);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(50, 32);
			this->comboBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(23, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 30);
			this->textBox3->TabIndex = 18;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"2", L"3", L"4", L"8", L"9", L"10", L"16" });
			this->comboBox5->Location = System::Drawing::Point(157, 179);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(63, 32);
			this->comboBox5->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(246, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 31);
			this->button1->TabIndex = 20;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"2", L"3", L"4", L"8", L"9", L"10", L"16" });
			this->comboBox6->Location = System::Drawing::Point(302, 179);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(63, 32);
			this->comboBox6->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(298, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(25, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 24);
			this->label5->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(309, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 24);
			this->label6->TabIndex = 25;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(25, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 26;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(757, 253);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

			this->label2->Text = L"";
			this->label3->Text = L"";
			this->label4->Text = L"";
			this->label5->Text = L"";
			this->label6->Text = L"";
			this->label7->Text = L"";
			this->comboBox1->SelectedItem = "10";
			this->comboBox2->SelectedItem = "10";
			this->comboBox3->SelectedItem = "10";
			this->comboBox4->SelectedItem = "+";
			this->comboBox5->SelectedItem = "10";
			this->comboBox6->SelectedItem = "10";


		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label5->Text = L"";
		label6->Text = L"";
		label7->Text = L"";
		double num1, num2, Result;
		int n1 = 10;
		n1 = System::Convert::ToInt32(comboBox1->SelectedItem); // Ввод системы счисления

		String^ s111 = textBox1->Text; //Ввод чисел
		String^ s222 = textBox2->Text; 

		std::string s = msclr::interop::marshal_as<std::string>(s111); 
	

		std::string s1, s2, s21, s22;
		int p = 0;
		int l = 0;
		int y = s.find(".", 0);
		int t = s.find(",", 0);
		if ((y == -1) & (t == -1)) { s1 = s; s2 = "0"; } //Проверка на целое/дробное число
		else {
			y = y + t + 1;
			s1 = s.substr(0, y);
			s2 = s.substr(y + 1);
		}
		s21 = s;
		s21.erase(y, 1);
		bool flag = true;
		int a, i;
		double b;
		a = 0;
		b = 0.0;
		int r = 1;
			if (s1[0] == '-') { r = -1; s1.erase(0, 1); } //Получение знака числа

			for (i = s1.size() - 1; i > -1; i--)				//Обработка целой части
			{
				int j = s1.size() - 1 - i;
				if (int(s1[j]) - 48 < 10) { a = a + (int(s1[j]) - 48) * pow(n1, i);  if ((int(s1[j]) - 48) > n1 - 1) { p--; } }

				else { a = a + (int(s1[j]) - 55) * pow(n1, i); if ((int(s1[j]) - 55) > n1 - 1) { p--; } }

			}

			for (i = 0; i < s2.size(); i++)						//Обработка дробной части
			{
				if ((int(s2[i]) - 48) < 10) {
					b = b + (int(s2[i]) - 48) * pow(n1, -(i + 1));  if ((int(s2[i]) - 48) > n1 - 1) { p--; }
				}
				else {
					b = b + (int(s2[i]) - 55) * pow(n1, -(i + 1)); if ((int(s1[i]) - 55) > n1 - 1) { p--; }
				}
			}
			num1 = r * (a + b);       //Запоминаем число
			
			
			//Начало обработки второго числа, все аналогично
			n1 = 10;
			n1 = System::Convert::ToInt32(comboBox2->SelectedItem);
			s = msclr::interop::marshal_as<std::string>(s222);
			y = s.find(".", 0);
			t = s.find(",", 0);
			if ((y == -1) & (t == -1)) { s1 = s; s2 = "0"; }
			else {
				y = y + t + 1;
				s1 = s.substr(0, y);
				s2 = s.substr(y + 1);
			}
			r = 1;
			if (s1[0] == '-') { r = -1; s1.erase(0, 1); }
			a = 0;
			b = 0.0;
			for (i = s1.size() - 1; i > -1; i--)
			{
				int j = s1.size() - 1 - i;
				if (int(s1[j]) - 48 < 10) { a = a + (int(s1[j]) - 48) * pow(n1, i);  if ((int(s1[j]) - 48) > n1 - 1) { l--; } }
				else { a = a + (int(s1[j]) - 55) * pow(n1, i); if ((int(s1[j]) - 55) > n1 - 1) { l--; } }

			}

			for (i = 0; i < s2.size(); i++)
			{
				if ((int(s2[i]) - 48) < 10) { b = b + (int(s2[i]) - 48) * pow(n1, -(i + 1));  if ((int(s2[i]) - 48) > n1 - 1) { l--; } }
				else { b = b + (int(s2[i]) - 55) * pow(n1, -(i + 1)); if ((int(s2[i]) - 55) > n1 - 1) { l--; } }
			}

			num2 = r * (a + b); //Получено второе число
			
									

			if (comboBox4->SelectedItem == "+") { Result = num1 + num2; } // Операции
			if (comboBox4->SelectedItem == "-") { Result = num1 - num2; }
			if (comboBox4->SelectedItem == "*") { Result = num1 * num2; }
			if (comboBox4->SelectedItem == "/")
			{
				if (num2 != 0) { Result = num1 / num2; }
				else { label3->Text = "Can't /0 !"; }
			}
			r = 1;
			if (Result < 0) { Result = -Result; r = -1; }
			n1 = 10;
			n1 = System::Convert::ToInt32(comboBox3->SelectedItem);
			double c = Result;
			s1 = "";
			s2 = "";
			a = c / 1;
			int d = 0;
			b = c - a;
			char ch;

			//Перевод в необходимую систему счисления
			if (l + p > -1) {
				if (a == 0) { s1 = '0'; }
				while (a > 0)
				{
					if (a % n1 > 9) { s1 = (char)(a % n1 + 55) + s1; }
					else { s1 = (char)(a % n1 + 48) + s1; }
					a = a / n1;
				}

				for (int i = 0; i < 9; i++)
				{
					b = b * n1;
					if (b / 1 < 10) { s2 = s2 + (char)(b / 1 + 48); }
					else { s2 = s2 + (char)(b / 1 + 55); }
					b = b - int(b);

				}
				bool flag = false;
				int u = s2.size();

				for (i = u; i > 0; i--) { if (s2[i - 1] == '0') { s2.erase(i - 1); } else { break; } }


				if (s2.size() > 0) { s = s1 + "." + s2; }
				else { s = s1; }
			}
			//Конец проверки введеных чисел
			if (p < 0) { label5->Text = L"Invalid Input"; label3->Text = L"ERROR"; }  
			else  if (l < 0) { label6->Text = L"Invalid Input"; label3->Text = L"ERROR"; }
			else {
				if (r < 0) { s = "-" + s; }
				if (num2 != 0) { label3->Text = msclr::interop::marshal_as<String^>(s); } //Вывод числа
			}
		//{ label3->Text = L"InvalidInput"; }

}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	double num1, Result;

	int n1 = 10;
	n1 = System::Convert::ToInt32(comboBox5->SelectedItem);


	String^ s111 = textBox3->Text;
	std::string s = msclr::interop::marshal_as<std::string>(s111);
	std::string s1, s2, s21, s22;

	int y = s.find(".", 0); 
	int t = s.find(",", 0);
	if ((y == -1) & (t == -1)) { s1 = s; s2 = "0"; }
	else {
		y = y + t + 1;
		s1 = s.substr(0, y);
		s2 = s.substr(y + 1);
	}

	int a, i;
	double b;
	a = 0;
	b = 0.0;
	for (i = s1.size() - 1; i > -1; i--)
	{
		int j = s1.size() - 1 - i;
		if (int(s1[j]) - 48 < 10) { a = a + (int(s1[j]) - 48) * pow(n1, i); }
		else { a = a + (int(s1[j]) - 55) * pow(n1, i); }

	}

	for (i = 0; i < s2.size(); i++)
	{
		if ((int(s2[i]) - 48) < 10) { b = b + (int(s2[i]) - 48) * pow(n1, -(i + 1)); }
		else { b = b + (int(s2[i]) - 55) * pow(n1, -(i + 1)); }
	}

	num1 = a + b;

	n1 = 10;
	n1 = System::Convert::ToInt32(comboBox6->SelectedItem);
	double c = num1;
	a = c / 1;
	int d = 0;
	b = c - a;
	char ch;
	s1 = "";
	s2 = "";
	while (a > 0)
	{
		if (a % n1 > 9) { s1 = (char)(a % n1 + 55) + s1; }
		else { s1 = (char)(a % n1 + 48) + s1; }
		a = a / n1;
	}

	for (int i = 0; i < 6; i++)
	{
		b = b * n1;
		if (b / 1 < 10) { s2 = s2 + (char)(b / 1 + 48); }
		else { s2 = s2 + (char)(b / 1 + 55); }
		b = b - int(b);

	}
	bool flag = false;
	int u = s2.size();
	for (i = u; i > 0; i--) { if (s2[i - 1] == '0') { s2.erase(i - 1); } else { break; } }


	if (s2.size() > 0) { s = s1 + "." + s2; }
	else { s = s1; }
	label4->Text = msclr::interop::marshal_as<String^>(s);


}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
/*
this->label2->Text = L"";
			this->label3->Text = L"";
			this->label4->Text = L"";
			this->label5->Text = L"";
			this->label6->Text = L"";
			this->label7->Text = L"";
			this->comboBox1->SelectedItem = "10";
			this->comboBox2->SelectedItem = "10";
			this->comboBox3->SelectedItem = "10";
			this->comboBox4->SelectedItem = "+";
			this->comboBox5->SelectedItem = "10";
			this->comboBox6->SelectedItem = "10";


			*/
