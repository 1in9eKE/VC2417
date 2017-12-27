#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// editAdmin 摘要
	/// </summary>
	public ref class editAdmin : public System::Windows::Forms::Form
	{
	public:
		editAdmin(void)
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
		~editAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(editAdmin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(70, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(70, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"密码";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(144, 113);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(168, 29);
			this->comboBox1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(144, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(168, 33);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(122, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 21);
			this->label3->TabIndex = 0;
			this->label3->Text = L"添加/删除管理员";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"华文中宋", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(74, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"华文中宋", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(255, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editAdmin::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(317, 199);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 16);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &editAdmin::checkBox1_CheckedChanged);
			// 
			// editAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(407, 361);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"editAdmin";
			this->Text = L"添加/删除管理员";
			this->Load += gcnew System::EventHandler(this, &editAdmin::editAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ strConn;
	private: System::Void editAdmin_Load(System::Object^  sender, System::EventArgs^  e) {
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM admin");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		if (adapter->Fill(table1)) {
			this->comboBox1->Items->Clear();
			for (int i = 0; i < table1->Rows->Count; i++) {
				this->comboBox1->Items->Add(table1->Rows[i]->ItemArray[0]->ToString());
			}
		}
	}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->PasswordChar = checkBox1->Checked ? 0 : '*';   // 取消或设置密码字符
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	DataTable^ table1 = gcnew DataTable();
	String^ strcom = String::Format("SELECT * FROM admin where AdminID = '{0}'",comboBox1->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
	if (adapter->Fill(table1)) {
		MessageBox::Show("该ID已存在");
		return;
	}
	try {
		String^ strCmd = String::Format("INSERT INTO admin VALUES ('{0}','{1}')", comboBox1->Text,textBox1->Text);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strConn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		editAdmin_Load(nullptr, nullptr);
		MessageBox::Show("添加完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "") {
		MessageBox::Show("输入密码以验证身份");
		return;
	}
	try {
		String^ strCmd = String::Format("DELETE FROM admin WHERE AdminID = '{0}'", comboBox1->Text);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strConn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		editAdmin_Load(nullptr, nullptr);
		MessageBox::Show("删除完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
};
}
