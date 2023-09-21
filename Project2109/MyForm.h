#pragma once

namespace Project2109 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(287, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(499, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(681, 77);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 56);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(852, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 62);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"game 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"game 2";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 266);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 52);
			this->button6->TabIndex = 7;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(287, 266);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 52);
			this->button7->TabIndex = 8;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(499, 266);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 52);
			this->button8->TabIndex = 9;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(681, 266);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(166, 52);
			this->button9->TabIndex = 10;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 37);
			this->label3->TabIndex = 11;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(325, 373);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 37);
			this->label4->TabIndex = 12;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(534, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 37);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(709, 371);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 37);
			this->label6->TabIndex = 14;
			this->label6->Text = L"label6";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(95, 506);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(261, 52);
			this->button10->TabIndex = 15;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(378, 506);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(238, 52);
			this->button11->TabIndex = 16;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(647, 506);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(278, 52);
			this->button12->TabIndex = 17;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(1011, 506);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(126, 60);
			this->button13->TabIndex = 18;
			this->button13->Text = L"resize";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button14->Location = System::Drawing::Point(41, 636);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 99);
			this->button14->TabIndex = 19;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button15->Location = System::Drawing::Point(187, 636);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(120, 96);
			this->button15->TabIndex = 20;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button16->Location = System::Drawing::Point(332, 636);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(123, 96);
			this->button16->TabIndex = 21;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button17->Location = System::Drawing::Point(762, 629);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(163, 102);
			this->button17->TabIndex = 22;
			this->button17->Text = L"*****";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button18->Location = System::Drawing::Point(953, 634);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(154, 102);
			this->button18->TabIndex = 23;
			this->button18->Text = L"+++++";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button19->Location = System::Drawing::Point(1136, 629);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(162, 103);
			this->button19->TabIndex = 24;
			this->button19->Text = L"00000";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(852, 754);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(361, 82);
			this->textBox1->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1604, 960);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Valy";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Visible = false;
		button3->Visible = false;
		button1->Visible = false;
		button5->Visible = true;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = false;
	button4->Visible = false;
	button2->Visible = false;
	button3->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	button5->Visible = false;
	button2->Visible = false;
	button1->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button3->Visible = false;
	button5->Visible = false;
	button4->Visible = false;
	button2->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Visible = false;
	button5->Visible = false;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label3->Visible = true;
	label4->Visible = false;
	label6->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	label6->Visible = true;
	label3->Visible = false;
	label4->Visible = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Visible = true;
	label3->Visible = false;
	label6->Visible = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Visible = false;
	label6->Visible = false;
	label5->Visible = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button10->Enabled = false;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	button11->Enabled = false;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	button12->Enabled = false;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "√отов к работе!";
	textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));

}
private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	button14->Enabled = true;
	button15->Enabled = true;
	button16->Enabled = true;
	ClientSize = System::Drawing::Size(800, 400);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientSize = System::Drawing::Size(1200, 1000);
	button10->Enabled = true;
	button11->Enabled = true;
	button12->Enabled = true;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	button15->Enabled = false;

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	button16->Enabled = false;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	button14->Enabled = false;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "+++++";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "*****";

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "00000";
}
};
}
