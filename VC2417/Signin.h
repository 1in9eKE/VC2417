#pragma once
#include "Admin.h"
#include "JianYanKe.h"
#include "Doctor.h"
#include "Patient.h"
#include "DBset.h"
namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
	/// <summary>
	/// Signin 摘要
	/// </summary>
	public ref class Signin : public System::Windows::Forms::Form
	{
	public:
		Signin(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signin::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->checkBox1->Location = System::Drawing::Point(512, 196);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 16);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Signin::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &Signin::checkBox1_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(486, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Signin::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(328, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"重置";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Signin::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(168, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"登陆";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Signin::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(424, 245);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 33);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Signin::pictureBox1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(306, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 33);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(306, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(200, 33);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(306, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 33);
			this->textBox1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(214, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"验证码";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(220, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"密码";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(204, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 42);
			this->label1->TabIndex = 7;
			this->label1->Text = L"用户编号\r\n   (ID)";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(12, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(700, 2);
			this->label4->TabIndex = 16;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"华文中宋", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::Info;
			this->radioButton1->Location = System::Drawing::Point(15, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 23);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"病人";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"华文中宋", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Info;
			this->radioButton2->Location = System::Drawing::Point(129, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 23);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->Text = L"医生";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"华文中宋", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Info;
			this->radioButton3->Location = System::Drawing::Point(246, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(78, 23);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->Text = L"管理员";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->groupBox1->Location = System::Drawing::Point(196, 295);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(336, 54);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"华文新魏", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(84, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(548, 48);
			this->label5->TabIndex = 19;
			this->label5->Text = L"欢迎使用小型检验科系统";
			// 
			// Signin
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(724, 488);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Signin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"小型检验科系统——登陆";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Signin::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Signin::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: String^ checkstr;
		 String^ strConn= "Provider=Microsoft.Jet.OLEDB.4.0; Data Source=DB.mdb";
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	DBset^ dbset = gcnew DBset();
	if (dbset->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		strConn = dbset->strConn;
	}
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->checkBox1->Checked = false;
	this->radioButton1->Checked = true;
	checkstr = CkeckCode()->Trim();
	CreatCodeImage(checkstr);
	//this->label1->Text = String::Format("用户编号\r\n   (ID)");
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	checkstr = CkeckCode()->Trim();
	CreatCodeImage(checkstr);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox1->Text->Trim();
	String^ str2 = this->textBox2->Text->Trim();
	if (!str1 || !str2) {
		MessageBox::Show("请填写ID及密码", "提示");
		return;
	}
	//判断验证码是否正确
	if (checkstr->Equals(this->textBox3->Text->Trim()))
	{
		if (this->radioButton1->Checked) {
			//判断病人账号是否正确
			String^ strcom = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'", str1);
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
			DataTable^ table1 = gcnew DataTable();
			if (!adapter->Fill(table1)) {
				MessageBox::Show("ID尚未录入！请先找工作人员录入信息。", "提示");
				return;
			}
			if (str2 != table1->Rows[0]->ItemArray[1]->ToString()) {
				MessageBox::Show("密码错误！", "提示");
				return;
			}
			Patient^ pdlg = gcnew Patient();
			pdlg->strConn = this->strConn;
			pdlg->table = table1;
			this->Hide();
			if (pdlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
				this->Show();
				//button2_Click(nullptr, nullptr);
			}
		}
		else if (this->radioButton2->Checked) {
			//判断医生账号是否正确
			String^ strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", str1);
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
			DataTable^ table1 = gcnew DataTable();
			if (!adapter->Fill(table1)) {
				MessageBox::Show("ID尚未录入！请找管理员录入信息。", "提示");
				return;
			}
			if (str2 != table1->Rows[0]->ItemArray[1]->ToString()) {
				MessageBox::Show("密码错误！", "提示");
				return;
			}
			if (table1->Rows[0]->ItemArray[7]->ToString() == "检验科") {
				JianYanKe^ Jdlg = gcnew JianYanKe();
				Jdlg->strConn = this->strConn;
				Jdlg->table = table1;
				this->Hide();
				if (Jdlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
					this->Show();
					//button2_Click(nullptr, nullptr);
				}
			}
			else {
				Doctor^ Ddlg = gcnew Doctor();
				Ddlg->strConn = this->strConn;
				Ddlg->table = table1;
				this->Hide();
				if (Ddlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
					this->Show();
					//button2_Click(nullptr, nullptr);
				}
			}
		}
		else if (this->radioButton3->Checked) {
			//判断管理员账号是否正确
			String^ strcom = String::Format("SELECT * FROM admin");
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
			DataTable^ table1 = gcnew DataTable();
			if (!adapter->Fill(table1)) {
				if (str1 != "Admin") {
					MessageBox::Show("ID错误，请重试", "提示");
					return;
				}
				if (str2 != "Admin") {
					MessageBox::Show("密码错误！", "提示");
					return;
				}
				Admin^ Adlg = gcnew Admin();
				Adlg->strConn = this->strConn;
				Adlg->ID = str1;
				this->Hide();
				if (Adlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
					this->Show();
					//button2_Click(nullptr, nullptr);
				}
			}
			else
			{
				String^ strcom2 = String::Format("SELECT * FROM admin where AdminID = '{0}' and password = '{1}'", str1, str2);
				OleDbDataAdapter^ adapter2 = gcnew OleDbDataAdapter(strcom2, strConn);
				DataTable^ table2 = gcnew DataTable(); 
				if (!adapter2->Fill(table2)) {
					MessageBox::Show("ID或密码错误，请重试", "提示");
					return;
				}
				else {
					Admin^ Adlg = gcnew Admin();
					Adlg->strConn = this->strConn;
					Adlg->ID = str1;
					this->Hide();
					if (Adlg->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
						this->Show();
						//button2_Click(nullptr, nullptr);
					}
				}
			}
			
			
		}
		
	}
	else
	{
		MessageBox::Show("验证码错误", "错误");
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
			code = ((char)(Convert::ToInt32('0') + (number % 10))).ToString();//?数字
			code = ((wchar_t)(Convert::ToInt32('0' + (number % 10)))).ToString();//?数字
		}
		else {
			code = ((wchar_t)(Convert::ToInt32('A') + (number % 26))).ToString();//字母
		}
		checkcode += "" + code->ToString();//加到 checkcode 字符串中

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
	textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // 取消或设置密码字符
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Yes != MessageBox::Show(L"你是否真的要退出？", "确认", MessageBoxButtons::YesNo))
		e->Cancel = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->checkBox1->Checked = false;
	this->radioButton1->Checked = true;
	checkstr = CkeckCode()->Trim();
	CreatCodeImage(checkstr);
}
};
}
