#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Patient 摘要
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	public:
		Patient(void)
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
		~Patient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	protected:

	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  系统SToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查询SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  个人信息IToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验结果RToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  缴费情况ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;










	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button3;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
private: System::Windows::Forms::SplitContainer^  splitContainer2;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::SplitContainer^  splitContainer3;
private: System::Windows::Forms::SplitContainer^  splitContainer4;
private: System::Windows::Forms::ListView^  listView2;
private: System::Windows::Forms::ColumnHeader^  columnHeader5;
private: System::Windows::Forms::ColumnHeader^  columnHeader6;
private: System::Windows::Forms::ColumnHeader^  columnHeader7;
private: System::Windows::Forms::ColumnHeader^  columnHeader8;
private: System::Windows::Forms::ColumnHeader^  columnHeader9;
private: System::Windows::Forms::ColumnHeader^  columnHeader10;
private: System::Windows::Forms::ColumnHeader^  columnHeader11;
private: System::Windows::Forms::SplitContainer^  splitContainer5;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::ComboBox^  comboBox5;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->系统SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查询SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->个人信息IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验结果RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->缴费情况ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT   \r\nFROM      (diagnose INNER JOIN\r\n                patient ON diagnose.病人"
				L"编号 = patient.病人编号)";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=S:\\1Study\\VCppwork\\VC2417\\Debug\\DB.m"
				L"db";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->系统SToolStripMenuItem,
					this->查询SToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1226, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 系统SToolStripMenuItem
			// 
			this->系统SToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->打印PToolStripMenuItem,
					this->打印预览VToolStripMenuItem, this->toolStripSeparator2, this->退出XToolStripMenuItem
			});
			this->系统SToolStripMenuItem->Name = L"系统SToolStripMenuItem";
			this->系统SToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->系统SToolStripMenuItem->Text = L"系统";
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(156, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::退出XToolStripMenuItem_Click);
			// 
			// 查询SToolStripMenuItem
			// 
			this->查询SToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->个人信息IToolStripMenuItem,
					this->检验结果RToolStripMenuItem, this->缴费情况ToolStripMenuItem
			});
			this->查询SToolStripMenuItem->Name = L"查询SToolStripMenuItem";
			this->查询SToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->查询SToolStripMenuItem->Text = L"查询";
			// 
			// 个人信息IToolStripMenuItem
			// 
			this->个人信息IToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"个人信息IToolStripMenuItem.Image")));
			this->个人信息IToolStripMenuItem->Name = L"个人信息IToolStripMenuItem";
			this->个人信息IToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->个人信息IToolStripMenuItem->Text = L"个人信息";
			this->个人信息IToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::个人信息IToolStripMenuItem_Click);
			// 
			// 检验结果RToolStripMenuItem
			// 
			this->检验结果RToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"检验结果RToolStripMenuItem.Image")));
			this->检验结果RToolStripMenuItem->Name = L"检验结果RToolStripMenuItem";
			this->检验结果RToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->检验结果RToolStripMenuItem->Text = L"检验结果";
			this->检验结果RToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::检验结果RToolStripMenuItem_Click);
			// 
			// 缴费情况ToolStripMenuItem
			// 
			this->缴费情况ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"缴费情况ToolStripMenuItem.Image")));
			this->缴费情况ToolStripMenuItem->Name = L"缴费情况ToolStripMenuItem";
			this->缴费情况ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->缴费情况ToolStripMenuItem->Text = L"缴费情况";
			this->缴费情况ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::缴费情况ToolStripMenuItem_Click);
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->关于AToolStripMenuItem });
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助(&H)";
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->关于AToolStripMenuItem->Text = L"关于(&A)...";
			this->关于AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::关于AToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->打印PToolStripButton, this->toolStripSeparator1, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1226, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(76, 22);
			this->toolStripButton1->Text = L"个人信息";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Patient::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(76, 22);
			this->toolStripButton2->Text = L"检验结果";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Patient::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(76, 22);
			this->toolStripButton3->Text = L"缴费情况";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Patient::toolStripButton3_Click);
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(67, 22);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(66, 22);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			this->帮助LToolStripButton->Click += gcnew System::EventHandler(this, &Patient::帮助LToolStripButton_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 637);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1226, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(86, 17);
			this->toolStripStatusLabel1->Text = L"xxx，欢迎您！";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(44, 17);
			this->toolStripStatusLabel2->Text = L"待补充";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 50);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1226, 587);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox5);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1218, 561);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"个人信息";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(443, 129);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 18);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(926, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Patient::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(774, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"保存";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Patient::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->groupBox1->Location = System::Drawing::Point(774, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(227, 276);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"照片";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(232, 415);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(232, 488);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 29);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(232, 345);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(81, 29);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(232, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(232, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(232, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(181, 29);
			this->textBox1->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(127, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"密 码";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(113, 496);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"身份证号";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(113, 422);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 19);
			this->label5->TabIndex = 0;
			this->label5->Text = L"出生日期";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(127, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 19);
			this->label4->TabIndex = 0;
			this->label4->Text = L"年 龄";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(127, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"性 别";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(127, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"姓 名";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(117, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"账号 ID";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1218, 561);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"检验结果";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox9);
			this->splitContainer1->Panel2->Controls->Add(this->textBox8);
			this->splitContainer1->Panel2->Controls->Add(this->textBox7);
			this->splitContainer1->Panel2->Controls->Add(this->textBox6);
			this->splitContainer1->Panel2->Controls->Add(this->label14);
			this->splitContainer1->Panel2->Controls->Add(this->label13);
			this->splitContainer1->Panel2->Controls->Add(this->label12);
			this->splitContainer1->Panel2->Controls->Add(this->label11);
			this->splitContainer1->Panel2->Controls->Add(this->button3);
			this->splitContainer1->Size = System::Drawing::Size(1212, 555);
			this->splitContainer1->SplitterDistance = 763;
			this->splitContainer1->TabIndex = 0;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(763, 555);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"编号";
			this->columnHeader1->Width = 120;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"检验项目";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 120;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"检验结果";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 120;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"单项所需费用";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 150;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(179, 400);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(154, 35);
			this->textBox9->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(179, 287);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(154, 35);
			this->textBox8->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(179, 174);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(154, 35);
			this->textBox7->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(179, 61);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(154, 35);
			this->textBox6->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(32, 397);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 48);
			this->label14->TabIndex = 3;
			this->label14->Text = L"  单项\r\n所需费用";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(32, 286);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 24);
			this->label13->TabIndex = 3;
			this->label13->Text = L"检验结果";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(32, 175);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"检验项目";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(57, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 24);
			this->label11->TabIndex = 3;
			this->label11->Text = L"编号";
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(0, 521);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(445, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"报告异常数据";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1218, 561);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"缴费情况";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->comboBox3);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox2);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox4);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer2->Panel1->Controls->Add(this->label17);
			this->splitContainer2->Panel1->Controls->Add(this->label16);
			this->splitContainer2->Panel1->Controls->Add(this->label18);
			this->splitContainer2->Panel1->Controls->Add(this->label15);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(1218, 561);
			this->splitContainer2->SplitterDistance = 55;
			this->splitContainer2->TabIndex = 0;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(976, 13);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 27);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->Text = L"所有方式";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(688, 13);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"所有类别";
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(162, 13);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(133, 27);
			this->comboBox4->TabIndex = 1;
			this->comboBox4->Text = L"所有日期";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(439, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 27);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"所有医生";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(866, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 19);
			this->label17->TabIndex = 0;
			this->label17->Text = L"付款方式";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(615, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 19);
			this->label16->TabIndex = 0;
			this->label16->Text = L"类别";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(92, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 19);
			this->label18->TabIndex = 0;
			this->label18->Text = L"日期";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(371, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 19);
			this->label15->TabIndex = 0;
			this->label15->Text = L"医生";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->splitContainer4);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->groupBox2);
			this->splitContainer3->Size = System::Drawing::Size(1218, 502);
			this->splitContainer3->SplitterDistance = 903;
			this->splitContainer3->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->listView2);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->splitContainer5);
			this->splitContainer4->Size = System::Drawing::Size(903, 502);
			this->splitContainer4->SplitterDistance = 452;
			this->splitContainer4->TabIndex = 0;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader5, this->columnHeader6,
					this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader10, this->columnHeader11
			});
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView2->Location = System::Drawing::Point(0, 0);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(903, 452);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"单号";
			this->columnHeader5->Width = 128;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"开单日期";
			this->columnHeader6->Width = 169;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"医生姓名";
			this->columnHeader7->Width = 99;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"医生编号";
			this->columnHeader8->Width = 110;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"费用类别";
			this->columnHeader9->Width = 98;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"所需费用";
			this->columnHeader10->Width = 101;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"付款方式";
			this->columnHeader11->Width = 102;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->richTextBox1);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->button4);
			this->splitContainer5->Size = System::Drawing::Size(903, 46);
			this->splitContainer5->SplitterDistance = 424;
			this->splitContainer5->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(424, 46);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"总费用：";
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(475, 46);
			this->button4->TabIndex = 2;
			this->button4->Text = L"查询详细报告";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(311, 502);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(27, 293);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(256, 16);
			this->label10->TabIndex = 12;
			this->label10->Text = L"您有xxx费用还未缴，请尽快缴费！";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->numericUpDown2->Location = System::Drawing::Point(160, 185);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(105, 30);
			this->numericUpDown2->TabIndex = 10;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->numericUpDown1->Location = System::Drawing::Point(160, 95);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(105, 30);
			this->numericUpDown1->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(45, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"未缴费用";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(45, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"已缴费用";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox5->Location = System::Drawing::Point(232, 271);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 27);
			this->comboBox5->TabIndex = 26;
			this->comboBox5->Text = L"男";
			// 
			// Patient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 659);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Patient";
			this->Text = L"小型检验科系统信息查询端——XXX 登陆时间:xxxxx";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Patient::Patient_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Patient::Patient_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Patient_Load(System::Object^  sender, System::EventArgs^  e) {
	this->tabControl1->TabPages->Clear();
	MessageBox::Show("您可以在此查看您的个人信息、检验结果、缴费情况。", "关于本系统");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//保存
}
private: System::Void 个人信息IToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage1))
		this->tabControl1->SelectedTab = tabPage1;
	else {
		this->tabControl1->TabPages->Add(tabPage1);
		this->tabControl1->SelectedTab = tabPage1;
	}
}
private: System::Void 检验结果RToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else { 
		this->tabControl1->TabPages->Add(tabPage2); 
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void 缴费情况ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage3))
		this->tabControl1->SelectedTab = tabPage3;
	else {
		this->tabControl1->TabPages->Add(tabPage3);
		this->tabControl1->SelectedTab = tabPage3;
	}
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage1))
		this->tabControl1->SelectedTab = tabPage1;
	else {
		this->tabControl1->TabPages->Add(tabPage1);
		this->tabControl1->SelectedTab = tabPage1;
	}
}
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage3))
		this->tabControl1->SelectedTab = tabPage3;
	else {
		this->tabControl1->TabPages->Add(tabPage3);
		this->tabControl1->SelectedTab = tabPage3;
	}
}
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Patient_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel; 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("您可以在此查看您的个人信息、检验结果、缴费情况。", "关于本系统");
}
private: System::Void 帮助LToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("您可以在此查看您的个人信息、检验结果、缴费情况。", "关于本系统");

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//详细报告
}
};
}
