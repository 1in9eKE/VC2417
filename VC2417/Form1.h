#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(12, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�û����(ID)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(50, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(40, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 21);
			this->label3->TabIndex = 0;
			this->label3->Text = L"��֤��";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(160, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 33);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(160, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 33);
			this->textBox2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(278, 200);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 33);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(35, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"��½";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(165, 299);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ע��";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(295, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"�˳�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"��������", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(160, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(112, 33);
			this->textBox3->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(278, 142);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 16);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(411, 382);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"test";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: String ^checkstr;

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	checkstr = CkeckCode()->Trim();
	CreatCodeImage(checkstr);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	checkstr = CkeckCode()->Trim();
	CreatCodeImage(checkstr);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//�ж���֤���Ƿ���ȷ
	if (checkstr->Equals(this->textBox2->Text->Trim()))
	{
		//�ж��˺��Ƿ���ȷ
		//�ж������Ƿ���ȷ
		//�����Ӧ����
		MessageBox::Show("hello");
	}
	else
	{
		MessageBox::Show("��֤�����","����");
		pictureBox1_Click(nullptr, nullptr);
	}
}
private:String ^CkeckCode(void)
{
	int number;
	String ^code;
	String ^checkcode = "";
	Random ^random = gcnew System::Random();
	for (int i = 0; i < 4; i++) {
		number = random->Next();
		if (number % 2 == 0) {
			code = ((char)(Convert::ToInt32('0') + (number % 10))).ToString();//?����
			code = ((wchar_t)(Convert::ToInt32('0' + (number % 10)))).ToString();//?����
		}
		else {
			code = ((wchar_t)(Convert::ToInt32('A') + (number % 26))).ToString();//��ĸ
		}
			checkcode += "" + code->ToString();//�ӵ� checkcode �ַ�����
		
	}
	return checkcode;
}
private: void CreatCodeImage(String ^checkcode)
{
	if (checkcode == "" || checkcode->Trim() == "")
		return;
	System::Drawing::Bitmap ^image = gcnew System::Drawing::Bitmap((int)Math::Ceiling((checkcode->Length * 18)), 30);
	Graphics ^g = Graphics::FromImage(image);
	try
	{
		Random ^random = gcnew Random();
		g->Clear(Color::White);
		for (int i = 0; i < 3; i++)
		{
			int x1 = random->Next(image->Width);
			int x2 = random->Next(image->Width);
			int y1 = random->Next(image->Height);
			int y2 = random->Next(image->Height);
			g->DrawLine(gcnew Pen(Color::Black), x1, y1, x2, y2);
		}
		System::Drawing::Font ^font = gcnew System::Drawing::Font("Arial", 19, (System::Drawing::FontStyle::Bold));
		g->DrawString(checkcode, font, gcnew SolidBrush(Color::Blue), 2, 2);
		for (int i = 0; i < 150; i++)
		{
			int x = random->Next(image->Width);
			int y = random->Next(image->Height);
			image->SetPixel(x, y, Color::FromArgb(random->Next()));
		}
		g->DrawRectangle(gcnew Pen(Color::Silver), 0, 0, image->Width + 3, image->Height + 3);
		this->pictureBox1->Width = image->Width;
		this->pictureBox1->Height = image->Height;
		this->pictureBox1->BackgroundImage = image;
	}
	catch (System::Exception^ ex)
	{
	}
	return;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox3->PasswordChar = checkBox1->Checked ? 0 : '*';   // ȡ�������������ַ�
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Yes != MessageBox::Show(L"���Ƿ����Ҫ�˳���", "ȷ��", MessageBoxButtons::YesNo))
		e->Cancel = true;
}
};
}

