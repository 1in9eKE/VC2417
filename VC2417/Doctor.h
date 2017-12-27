#pragma once
#include "DBset.h"
#include "About.h"
namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO::Ports;
	/// <summary>
	/// Doctor 摘要
	/// </summary>
	public ref class Doctor : public System::Windows::Forms::Form
	{
	public:
		Doctor(void)
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
		~Doctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	protected:
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  系统SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  自定义CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TreeView^  treeView2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  button2;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ToolStripMenuItem^  功能ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  开单检验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验报告打印ToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TabPage^  tabPage11;
private: System::Windows::Forms::SplitContainer^  splitContainer8;
private: System::Windows::Forms::SplitContainer^  splitContainer10;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::SplitContainer^  splitContainer11;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::ListView^  listView5;
private: System::Windows::Forms::ColumnHeader^  columnHeader10;
private: System::Windows::Forms::ColumnHeader^  columnHeader11;
private: System::Windows::Forms::ColumnHeader^  columnHeader12;
private: System::Windows::Forms::PrintPreviewControl^  printPreviewControl1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::RichTextBox^  richTextBox2;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
private: System::Windows::Forms::ToolStripMenuItem^  设置ToolStripMenuItem;
private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Doctor::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"选择病人"));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->系统SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->自定义CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->功能ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->开单检验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验报告打印ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer8 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer10 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer11 = (gcnew System::Windows::Forms::SplitContainer());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->printPreviewControl1 = (gcnew System::Windows::Forms::PrintPreviewControl());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer8))->BeginInit();
			this->splitContainer8->Panel1->SuspendLayout();
			this->splitContainer8->Panel2->SuspendLayout();
			this->splitContainer8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer10))->BeginInit();
			this->splitContainer10->Panel1->SuspendLayout();
			this->splitContainer10->Panel2->SuspendLayout();
			this->splitContainer10->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer11))->BeginInit();
			this->splitContainer11->Panel1->SuspendLayout();
			this->splitContainer11->Panel2->SuspendLayout();
			this->splitContainer11->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1,
					this->toolStripButton3, this->toolStripButton2, this->打印PToolStripButton, this->toolStripSeparator6, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1122, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(76, 22);
			this->toolStripButton1->Text = L"开单检验";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Doctor::toolStripButton1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(112, 22);
			this->toolStripButton3->Text = L"报告查询与打印";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Doctor::toolStripButton3_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(76, 22);
			this->toolStripButton2->Text = L"个人信息";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Doctor::toolStripButton2_Click);
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripButton.Image")));
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打印PToolStripButton->Text = L"打印(&P)";
			this->打印PToolStripButton->Click += gcnew System::EventHandler(this, &Doctor::打印PToolStripButton_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			this->帮助LToolStripButton->Click += gcnew System::EventHandler(this, &Doctor::帮助LToolStripButton_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 680);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1122, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(86, 17);
			this->toolStripStatusLabel1->Text = L"xxx医生，您好";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(68, 17);
			this->toolStripStatusLabel2->Text = L"当前时间：";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->系统SToolStripMenuItem,
					this->文件FToolStripMenuItem, this->工具TToolStripMenuItem, this->功能ToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1122, 25);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 系统SToolStripMenuItem
			// 
			this->系统SToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->设置ToolStripMenuItem,
					this->退出ToolStripMenuItem
			});
			this->系统SToolStripMenuItem->Name = L"系统SToolStripMenuItem";
			this->系统SToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->系统SToolStripMenuItem->Text = L"系统(&S)";
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"设置ToolStripMenuItem.Image")));
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->设置ToolStripMenuItem->Text = L"数据库设置";
			this->设置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::设置ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"退出ToolStripMenuItem.Image")));
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::退出ToolStripMenuItem_Click);
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->打印PToolStripMenuItem,
					this->打印预览VToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			this->打印PToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::打印PToolStripMenuItem_Click);
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			this->打印预览VToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::打印预览VToolStripMenuItem_Click);
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->自定义CToolStripMenuItem });
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"个人(&P)";
			// 
			// 自定义CToolStripMenuItem
			// 
			this->自定义CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"自定义CToolStripMenuItem.Image")));
			this->自定义CToolStripMenuItem->Name = L"自定义CToolStripMenuItem";
			this->自定义CToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->自定义CToolStripMenuItem->Text = L"个人信息";
			this->自定义CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::自定义CToolStripMenuItem_Click);
			// 
			// 功能ToolStripMenuItem
			// 
			this->功能ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->开单检验ToolStripMenuItem,
					this->检验报告打印ToolStripMenuItem
			});
			this->功能ToolStripMenuItem->Name = L"功能ToolStripMenuItem";
			this->功能ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->功能ToolStripMenuItem->Text = L"功能";
			// 
			// 开单检验ToolStripMenuItem
			// 
			this->开单检验ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"开单检验ToolStripMenuItem.Image")));
			this->开单检验ToolStripMenuItem->Name = L"开单检验ToolStripMenuItem";
			this->开单检验ToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->开单检验ToolStripMenuItem->Text = L"开单检验";
			this->开单检验ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::开单检验ToolStripMenuItem_Click);
			// 
			// 检验报告打印ToolStripMenuItem
			// 
			this->检验报告打印ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"检验报告打印ToolStripMenuItem.Image")));
			this->检验报告打印ToolStripMenuItem->Name = L"检验报告打印ToolStripMenuItem";
			this->检验报告打印ToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->检验报告打印ToolStripMenuItem->Text = L"报告查询与打印";
			this->检验报告打印ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::检验报告打印ToolStripMenuItem_Click);
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
			this->关于AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::关于AToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 50);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1122, 630);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1114, 604);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"开单检验";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->treeView2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(1108, 598);
			this->splitContainer2->SplitterDistance = 279;
			this->splitContainer2->TabIndex = 0;
			// 
			// treeView2
			// 
			this->treeView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView2->HideSelection = false;
			this->treeView2->Location = System::Drawing::Point(0, 0);
			this->treeView2->Name = L"treeView2";
			treeNode1->Name = L"节点0";
			treeNode1->Text = L"选择病人";
			this->treeView2->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 });
			this->treeView2->Size = System::Drawing::Size(279, 598);
			this->treeView2->TabIndex = 0;
			this->treeView2->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Doctor::treeView2_AfterSelect);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->groupBox4);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->groupBox3);
			this->splitContainer3->Size = System::Drawing::Size(825, 598);
			this->splitContainer3->SplitterDistance = 234;
			this->splitContainer3->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listView2);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(825, 234);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"诊断历史";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(3, 17);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(819, 214);
			this->listView2->TabIndex = 3;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"病人编号";
			this->columnHeader1->Width = 90;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"病人姓名";
			this->columnHeader2->Width = 83;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"性别";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"年龄";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"出生日期";
			this->columnHeader5->Width = 76;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"身份证号";
			this->columnHeader6->Width = 114;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"检验项目";
			this->columnHeader7->Width = 99;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"检验结果";
			this->columnHeader8->Width = 127;
			// 
			// groupBox3
			// 
			this->groupBox3->AutoSize = true;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(825, 360);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"送检信息";
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(257, 259);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(146, 29);
			this->textBox10->TabIndex = 13;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(257, 201);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(146, 29);
			this->textBox9->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(257, 317);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(146, 29);
			this->textBox8->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(257, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(146, 29);
			this->textBox1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(661, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"开单";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Doctor::button2_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(95, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 21);
			this->label8->TabIndex = 12;
			this->label8->Text = L"送检单号";
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"血液", L"痰液" });
			this->comboBox3->Location = System::Drawing::Point(257, 145);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(146, 27);
			this->comboBox3->TabIndex = 9;
			this->comboBox3->Text = L"血液";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"乙肝病毒检验", L"血常规" });
			this->comboBox2->Location = System::Drawing::Point(257, 89);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(146, 27);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->Text = L"乙肝病毒检验";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Doctor::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(95, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"付款方式";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(95, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"所需费用";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(95, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"开单科室";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(95, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 21);
			this->label6->TabIndex = 7;
			this->label6->Text = L"取样类别";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"华文中宋", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(95, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"检验项目";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->comboBox5);
			this->tabPage3->Controls->Add(this->checkBox1);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->dateTimePicker1);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1114, 604);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"个人信息";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox5->Location = System::Drawing::Point(190, 254);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 27);
			this->comboBox5->TabIndex = 28;
			this->comboBox5->Text = L"男";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(401, 112);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 18);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(938, 527);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 26;
			this->button3->Text = L"返回";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Doctor::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->AutoSize = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(786, 527);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 29);
			this->button4->TabIndex = 25;
			this->button4->Text = L"更新";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Doctor::button4_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(190, 398);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker1->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(190, 471);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 29);
			this->textBox5->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(190, 328);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(81, 29);
			this->textBox4->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(190, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 29);
			this->textBox3->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(190, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 29);
			this->textBox2->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(190, 549);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(181, 29);
			this->textBox7->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(190, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(181, 29);
			this->textBox6->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(85, 109);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"密 码";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(71, 552);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 20);
			this->label16->TabIndex = 13;
			this->label16->Text = L"所属科室";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(71, 479);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 20);
			this->label10->TabIndex = 13;
			this->label10->Text = L"身份证号";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(71, 405);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 20);
			this->label11->TabIndex = 12;
			this->label11->Text = L"出生日期";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(85, 331);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 20);
			this->label12->TabIndex = 11;
			this->label12->Text = L"年 龄";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(85, 257);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 20);
			this->label13->TabIndex = 10;
			this->label13->Text = L"性 别";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(85, 183);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 20);
			this->label14->TabIndex = 14;
			this->label14->Text = L"姓 名";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"隶书", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(75, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 20);
			this->label15->TabIndex = 9;
			this->label15->Text = L"账号 ID";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->splitContainer8);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1114, 604);
			this->tabPage11->TabIndex = 3;
			this->tabPage11->Text = L"报告查询与打印";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// splitContainer8
			// 
			this->splitContainer8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer8->Location = System::Drawing::Point(3, 3);
			this->splitContainer8->Name = L"splitContainer8";
			// 
			// splitContainer8.Panel1
			// 
			this->splitContainer8->Panel1->Controls->Add(this->splitContainer10);
			// 
			// splitContainer8.Panel2
			// 
			this->splitContainer8->Panel2->Controls->Add(this->groupBox5);
			this->splitContainer8->Size = System::Drawing::Size(1108, 598);
			this->splitContainer8->SplitterDistance = 774;
			this->splitContainer8->TabIndex = 0;
			// 
			// splitContainer10
			// 
			this->splitContainer10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer10->Location = System::Drawing::Point(0, 0);
			this->splitContainer10->Name = L"splitContainer10";
			// 
			// splitContainer10.Panel1
			// 
			this->splitContainer10->Panel1->Controls->Add(this->groupBox7);
			// 
			// splitContainer10.Panel2
			// 
			this->splitContainer10->Panel2->Controls->Add(this->printPreviewControl1);
			this->splitContainer10->Size = System::Drawing::Size(774, 598);
			this->splitContainer10->SplitterDistance = 236;
			this->splitContainer10->TabIndex = 0;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->splitContainer11);
			this->groupBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox7->Location = System::Drawing::Point(0, 0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(236, 598);
			this->groupBox7->TabIndex = 0;
			this->groupBox7->TabStop = false;
			// 
			// splitContainer11
			// 
			this->splitContainer11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer11->Location = System::Drawing::Point(3, 17);
			this->splitContainer11->Name = L"splitContainer11";
			this->splitContainer11->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer11.Panel1
			// 
			this->splitContainer11->Panel1->Controls->Add(this->button8);
			this->splitContainer11->Panel1->Controls->Add(this->textBox35);
			this->splitContainer11->Panel1->Controls->Add(this->textBox34);
			this->splitContainer11->Panel1->Controls->Add(this->label47);
			this->splitContainer11->Panel1->Controls->Add(this->label45);
			// 
			// splitContainer11.Panel2
			// 
			this->splitContainer11->Panel2->Controls->Add(this->listView5);
			this->splitContainer11->Size = System::Drawing::Size(230, 578);
			this->splitContainer11->SplitterDistance = 87;
			this->splitContainer11->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button8->Location = System::Drawing::Point(149, 44);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 27);
			this->button8->TabIndex = 2;
			this->button8->Text = L"查询";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Doctor::button8_Click);
			// 
			// textBox35
			// 
			this->textBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox35->Location = System::Drawing::Point(39, 46);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 21);
			this->textBox35->TabIndex = 1;
			// 
			// textBox34
			// 
			this->textBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox34->Location = System::Drawing::Point(39, 8);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 21);
			this->textBox34->TabIndex = 1;
			// 
			// label47
			// 
			this->label47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(4, 49);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(29, 12);
			this->label47->TabIndex = 0;
			this->label47->Text = L"姓名";
			// 
			// label45
			// 
			this->label45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(4, 11);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(29, 12);
			this->label45->TabIndex = 0;
			this->label45->Text = L"编号";
			// 
			// listView5
			// 
			this->listView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader10, this->columnHeader11,
					this->columnHeader12
			});
			this->listView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView5->FullRowSelect = true;
			this->listView5->GridLines = true;
			this->listView5->HideSelection = false;
			this->listView5->Location = System::Drawing::Point(0, 0);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(230, 487);
			this->listView5->TabIndex = 6;
			this->listView5->UseCompatibleStateImageBehavior = false;
			this->listView5->View = System::Windows::Forms::View::Details;
			this->listView5->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Doctor::listView5_ItemSelectionChanged);
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"样本编号";
			this->columnHeader10->Width = 90;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"病人姓名";
			this->columnHeader11->Width = 69;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"检测项目";
			this->columnHeader12->Width = 80;
			// 
			// printPreviewControl1
			// 
			this->printPreviewControl1->AutoZoom = false;
			this->printPreviewControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->printPreviewControl1->Location = System::Drawing::Point(0, 0);
			this->printPreviewControl1->Name = L"printPreviewControl1";
			this->printPreviewControl1->Size = System::Drawing::Size(534, 598);
			this->printPreviewControl1->TabIndex = 0;
			this->printPreviewControl1->Zoom = 0.50299401197604787;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->richTextBox2);
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->textBox29);
			this->groupBox5->Controls->Add(this->textBox33);
			this->groupBox5->Controls->Add(this->textBox31);
			this->groupBox5->Controls->Add(this->textBox30);
			this->groupBox5->Controls->Add(this->textBox28);
			this->groupBox5->Controls->Add(this->textBox27);
			this->groupBox5->Controls->Add(this->label46);
			this->groupBox5->Controls->Add(this->label44);
			this->groupBox5->Controls->Add(this->label43);
			this->groupBox5->Controls->Add(this->label39);
			this->groupBox5->Controls->Add(this->label42);
			this->groupBox5->Controls->Add(this->label41);
			this->groupBox5->Controls->Add(this->label40);
			this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox5->Location = System::Drawing::Point(0, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(330, 598);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox2->Location = System::Drawing::Point(112, 331);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(201, 83);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->Text = L"";
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button5->AutoSize = true;
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(141, 526);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 40);
			this->button5->TabIndex = 0;
			this->button5->Text = L"打印";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Doctor::button5_Click);
			// 
			// textBox29
			// 
			this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox29->Location = System::Drawing::Point(112, 103);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(201, 26);
			this->textBox29->TabIndex = 21;
			// 
			// textBox33
			// 
			this->textBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox33->Location = System::Drawing::Point(112, 464);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(201, 26);
			this->textBox33->TabIndex = 21;
			// 
			// textBox31
			// 
			this->textBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox31->Location = System::Drawing::Point(112, 274);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(201, 26);
			this->textBox31->TabIndex = 21;
			// 
			// textBox30
			// 
			this->textBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox30->Location = System::Drawing::Point(112, 217);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(201, 26);
			this->textBox30->TabIndex = 21;
			// 
			// textBox28
			// 
			this->textBox28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox28->Location = System::Drawing::Point(112, 160);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(201, 26);
			this->textBox28->TabIndex = 21;
			// 
			// textBox27
			// 
			this->textBox27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox27->Location = System::Drawing::Point(112, 46);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(201, 26);
			this->textBox27->TabIndex = 21;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->Location = System::Drawing::Point(16, 467);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(72, 16);
			this->label46->TabIndex = 6;
			this->label46->Text = L"审核时间";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->Location = System::Drawing::Point(16, 277);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(56, 16);
			this->label44->TabIndex = 6;
			this->label44->Text = L"审核者";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->Location = System::Drawing::Point(16, 163);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(72, 16);
			this->label43->TabIndex = 6;
			this->label43->Text = L"检验结果";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(16, 334);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(72, 16);
			this->label39->TabIndex = 6;
			this->label39->Text = L"检验时间";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->Location = System::Drawing::Point(16, 220);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(56, 16);
			this->label42->TabIndex = 6;
			this->label42->Text = L"检验者";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->Location = System::Drawing::Point(16, 106);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(72, 16);
			this->label41->TabIndex = 6;
			this->label41->Text = L"开单医生";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->Location = System::Drawing::Point(16, 49);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(72, 16);
			this->label40->TabIndex = 6;
			this->label40->Text = L"送检科室";
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Doctor::printDocument1_PrintPage);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Doctor::timer1_Tick);
			// 
			// Doctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 702);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Doctor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"xx科——xx医生";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Doctor::Doctor_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Doctor::Doctor_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->splitContainer8->Panel1->ResumeLayout(false);
			this->splitContainer8->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer8))->EndInit();
			this->splitContainer8->ResumeLayout(false);
			this->splitContainer10->Panel1->ResumeLayout(false);
			this->splitContainer10->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer10))->EndInit();
			this->splitContainer10->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->splitContainer11->Panel1->ResumeLayout(false);
			this->splitContainer11->Panel1->PerformLayout();
			this->splitContainer11->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer11))->EndInit();
			this->splitContainer11->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: String^ strConn;
		DataTable^ table;
		DateTime^ SigninTime;
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^ treenode = GetSelRootNode();
	String^ strcmd = String::Format("INSERT INTO orders(送检单号,开单时间,病人编号,开单医生编号,开单科室,检验项目,取样类别,所需费用,付款方式) VALUES('{0}','{1}','{2}','{3}','{4}','{5}','{6}',{7},'{8}')",
		this->textBox1->Text->Trim(), DateTime::Now.ToString(), treenode->Text->Trim(), table->Rows[0]->ItemArray[0]->ToString(), this->textBox8->Text->Trim(), this->comboBox2->SelectedItem->ToString(), this->comboBox3->SelectedItem->ToString(), Double::Parse(this->textBox9->Text->Trim()), this->textBox10->Text->Trim());
	try {
		OleDbConnection^ conn = gcnew OleDbConnection(strConn);
		// 创建可执行命令
		OleDbCommand^ cmd = gcnew OleDbCommand(strcmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		if (this->textBox10->Text->Trim() != "") {
			MessageBox::Show("开单成功", "提示");
		}
		else {
			MessageBox::Show("开单成功，病人尚未付款", "提示");
		}
	}
	catch (OleDbException^ e) {
		MessageBox::Show(e->Message, "错误");
	}
	strcmd = String::Format("INSERT INTO result(样本编号,送检单号,病人编号,检验项目,取样时间,录入否) VALUES('{0}','{1}','{2}','{3}','{4}','否')", getresultno(), this->textBox1->Text->Trim(), treenode->Text->Trim(), this->comboBox2->SelectedItem->ToString(), DateTime::Now.ToString());
	try {
		OleDbConnection^ conn = gcnew OleDbConnection(strConn);
		// 创建可执行命令
		OleDbCommand^ cmd = gcnew OleDbCommand(strcmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
	}
	catch (OleDbException^ e) {
		MessageBox::Show(e->Message, "错误");
	}
	//串口发送

}
private: System::Void Doctor_Load(System::Object^  sender, System::EventArgs^  e) {
	this->tabControl1->TabPages->Remove(tabPage3);
	this->tabControl1->TabPages->Remove(tabPage11);
	SigninTime = DateTime::Now;
	PersonalData(table);
	LoadTreeandcombo();
	Loadlv5();
	timer1->Enabled = true;
}
private: void PersonalData(DataTable^ table) {
	this->Text = String::Format(" {2}————{0}医生   登陆时间： {1} ", table->Rows[0]->ItemArray[2]->ToString(), SigninTime->ToString(),table->Rows[0]->ItemArray[7]->ToString());
	this->textBox6->Text = table->Rows[0]->ItemArray[0]->ToString();
	this->textBox2->Text = table->Rows[0]->ItemArray[1]->ToString();
	this->textBox3->Text = table->Rows[0]->ItemArray[2]->ToString();
	this->comboBox5->SelectedIndex = table->Rows[0]->ItemArray[3]->ToString() == "男" ? 0 : 1;
	this->dateTimePicker1->Text = table->Rows[0]->ItemArray[5]->ToString();
	this->textBox4->Text = (int::Parse(DateTime::Now.ToString(L"yyyy")) - int::Parse(this->dateTimePicker1->Value.ToString("yyyy"))).ToString();
	this->textBox5->Text = table->Rows[0]->ItemArray[6]->ToString();
	this->textBox7->Text = table->Rows[0]->ItemArray[7]->ToString();
	this->textBox8->Text = table->Rows[0]->ItemArray[7]->ToString();
	this->toolStripStatusLabel1->Text = String::Format("{0}医生，欢迎您！", table->Rows[0]->ItemArray[2]->ToString());
}
private: String^ getresultno() {
	String^ strcmd = "SELECT * FROM result";
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		int no = 0;
		for (int i = 0; i < table1->Rows->Count; i++)
		{
			String^ str = table1->Rows[i]->ItemArray[0]->ToString();
			str = str->Substring(1);
			if (no < Int32::Parse(str))
				no = Int32::Parse(str);

		}
		no++;
		String^ newstr = "R" + no;
		return newstr;
	}
}
private: System::Void 自定义CToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage3))
		this->tabControl1->SelectedTab = tabPage3;
	else {
		this->tabControl1->TabPages->Add(tabPage3);
		this->tabControl1->SelectedTab = tabPage3;
	}
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//关于窗体
	About^ adlg = gcnew About();
	adlg->ShowDialog();
}
private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Doctor_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->serialPort1->Close();
}
private: void LoadTreeandcombo() {
	String^ strcmd = String::Format("SELECT * FROM patient");
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) { 
		this->treeView2->Nodes->Clear();
		for (int i = 0; i < table1->Rows->Count; i++) {
			TreeNode^ noderoot = gcnew TreeNode(table1->Rows[i]->ItemArray[0]->ToString());
			TreeNode^ nodechild1 = gcnew TreeNode(table1->Rows[i]->ItemArray[2]->ToString());
			TreeNode^ nodechild2 = gcnew TreeNode(table1->Rows[i]->ItemArray[3]->ToString());
			TreeNode^ nodechild3 = gcnew TreeNode(String::Format("{0} 岁",table1->Rows[i]->ItemArray[4]->ToString()));
			noderoot->Nodes->Add(nodechild1);
			noderoot->Nodes->Add(nodechild2);
			noderoot->Nodes->Add(nodechild3);
			this->treeView2->Nodes->Add(noderoot);
		}
	}
	strcmd = String::Format("SELECT * FROM project");
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ table2 = gcnew DataTable();
	if (adapter->Fill(table2)) {
		this->comboBox2->Items->Clear();
		this->comboBox3->Items->Clear();
		for each(DataRow^ row in table2->Rows) {
			this->comboBox2->Items->Add(row[0]->ToString());
			this->comboBox3->Items->Add(row[1]->ToString());
		}
	}
}
private: TreeNode^ GetSelRootNode()
{
	if (treeView2->SelectedNode == nullptr)
	{	 
		MessageBox::Show("本操作先要选择节点记录！", "提示");
		return nullptr;
	}
	// 找到选中的最高级要节点
	TreeNode^ rootNode = treeView2->SelectedNode->Parent;
	if (rootNode == nullptr)
		rootNode = treeView2->SelectedNode;
	else
	{
		if (rootNode->Parent != nullptr)
			rootNode = rootNode->Parent;
	}
	return rootNode;
}
private: System::Void treeView2_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	TreeNode ^rootNode = GetSelRootNode();
	if (rootNode == nullptr) return;
	String^ strcmd = String::Format("SELECT patient.病人编号,patient.姓名,patient.性别,patient.年龄,patient.出生日期,patient.身份证号 FROM patient WHERE patient.病人编号 = '{0}'", rootNode->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		this->listView2->Items->Clear();
		String^ strcmd = String::Format("SELECT result.病人编号,result.检验项目,result.检测结果 FROM result WHERE result.病人编号 = '{0}'", rootNode->Text);
		OleDbDataAdapter^ adapter1 = gcnew OleDbDataAdapter(strcmd, strConn);
		DataTable^ table2 = gcnew DataTable();
		if (adapter1->Fill(table2)) {
			for (int i = 0; i < table2->Rows->Count; i++) {
				ListViewItem^ item = gcnew ListViewItem(rootNode->Text);
				item->SubItems->Add(table1->Rows[0]->ItemArray[1]->ToString());
				item->SubItems->Add(table1->Rows[0]->ItemArray[2]->ToString());
				item->SubItems->Add(table1->Rows[0]->ItemArray[3]->ToString());
				item->SubItems->Add(table1->Rows[0]->ItemArray[4]->ToString());
				item->SubItems->Add(table1->Rows[0]->ItemArray[5]->ToString());
				if (table2->Rows[i]->ItemArray[1]->ToString() != "")
					item->SubItems->Add(table2->Rows[i]->ItemArray[1]->ToString());
				else item->SubItems->Add("");
				if (table2->Rows[i]->ItemArray[2]->ToString() != "")
					item->SubItems->Add(table2->Rows[i]->ItemArray[2]->ToString());
				else item->SubItems->Add("");
				this->listView2->Items->Add(item);
			}
		}
	}
		strcmd = String::Format("SELECT * FROM orders");
		adapter->SelectCommand->CommandText = strcmd;
		DataTable^ table2 = gcnew DataTable();
		if (adapter->Fill(table2)) {
			int no = 0;
			for (int i = 0; i < table2->Rows->Count; i++)
			{
				String^ str = table2->Rows[i]->ItemArray[0]->ToString();
				str = str->Substring(1);
				if (no < Int32::Parse(str))
					no = Int32::Parse(str);

			}
			no++;
			String^ newstr = "O" + no;
			this->textBox1->Text = newstr;
		}
		else { this->textBox1->Text = "O0001"; }
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox2->Text->Trim();
	String^ str2 = this->textBox3->Text->Trim();
	String^ str3 = this->comboBox5->Text->Trim();
	String^ str4 = this->textBox4->Text->Trim();
	String^ str5 = this->textBox5->Text->Trim();
	String^ str6 = this->dateTimePicker1->Value.ToString("yyyy/MM/dd");
	String^ strcom = String::Format("UPDATE doctor SET 密码 = '{0}', 姓名 = '{1}', 性别 = '{2}', 年龄 = {3}, 出生日期 = '{4}', 身份证号 = '{5}' WHERE 医生编号 = '{6}'",
		str1, str2, str3, int::Parse(str4), str6, str5, table->Rows[0]->ItemArray[0]->ToString());
	try {
		OleDbConnection^ conn = gcnew OleDbConnection(strConn);
		// 创建可执行命令
		OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		String^ strcom1 = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table->Rows[0]->ItemArray[0]);
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom1, strConn);
		DataTable^ table1 = gcnew DataTable();
		adapter->Fill(table1);
		PersonalData(table1);
		MessageBox::Show("更新成功", "提示");
	}
	catch (OleDbException^ e) {
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tabControl1->TabPages->Remove(tabPage3);
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ str = this->comboBox2->SelectedItem->ToString();
	this->comboBox3->SelectedIndex = this->comboBox2->SelectedIndex;
	String^ strcmd = String::Format("SELECT * FROM project WHERE 检验项目 = '{0}'", str);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) { 
		this->textBox9->Text = table1->Rows[0]->ItemArray[2]->ToString();
	}
}
private: System::Void 检验报告打印ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage11))
		this->tabControl1->SelectedTab = tabPage11;
	else {
		this->tabControl1->TabPages->Add(tabPage11);
		this->tabControl1->SelectedTab = tabPage11;
	}
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;
	int left = e->MarginBounds.Left;                   // 左上角X位置
	int top = e->MarginBounds.Top;                   // 左上角Y位置
	int width = e->MarginBounds.Width;                 //有效区域宽度
	int height = e->MarginBounds.Height;             // 有效区域高度
													 // 打印页头(宋体,26号)
	Drawing::Font^ headerFont = gcnew Drawing::Font(L"宋体", 26, FontStyle::Bold);
	g->DrawString(L"检验报告单", headerFont, Brushes::Black, left + 220, top);
	top += 50;
	//相关信息
	if (this->listView5->SelectedItems->Count < 1) return;
	String^ strcmd = String::Format("SELECT result.*,orders.开单时间,orders.开单医生编号,orders.开单科室,orders.取样类别 FROM result INNER JOIN orders ON result.送检单号 = orders.送检单号 WHERE 样本编号 = '{0}'", this->listView5->SelectedItems[0]->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (!adapter->Fill(table1)) {
		MessageBox::Show("查无此报告！");
		return;
	}
	String^ ybno = String::Format("样本编号：{0}", table1->Rows[0]->ItemArray[0]->ToString());
	String^ sjno = String::Format("送检单号：{0}", table1->Rows[0]->ItemArray[1]->ToString());
	String^ qytm = String::Format("取样时间：{0}", table1->Rows[0]->ItemArray[4]->ToString());
	String^ mch = String::Format("仪器：{0}", table1->Rows[0]->ItemArray[7]->ToString());
	String^ jytm = String::Format("检验时间：{0}", table1->Rows[0]->ItemArray[8]->ToString());
	String^ shtm = String::Format("审核时间：{0}", table1->Rows[0]->ItemArray[12]->ToString());
	String^ kdtm = String::Format("开单时间：{0}", table1->Rows[0]->ItemArray[14]->ToString());
	String^ kdks = String::Format("科别：{0}", table1->Rows[0]->ItemArray[16]->ToString());
	String^ ybsy = String::Format("样本类别：{0}", table1->Rows[0]->ItemArray[17]->ToString());
	strcmd = String::Format("SELECT * FROM doctor");
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ table2 = gcnew DataTable();
	adapter->Fill(table2);
	String^ sjdoc;
	String^ jydoc;
	String^ shdoc;
	for each(DataRow^ row in table2->Rows) {
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[15]->ToString()) {
			sjdoc = String::Format("送检医生：{0}", row[2]->ToString());
		}
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[6]->ToString()) {
			jydoc = String::Format("检验者：{0}", row[2]->ToString());
		}
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[11]->ToString()) {
			shdoc = String::Format("审核者：{0}", row[2]->ToString());
		}
	}
	String^ time = String::Format("打印日期：{0}", DateTime::Now.ToString());
	strcmd = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'", table1->Rows[0]->ItemArray[2]->ToString());
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ tablep = gcnew DataTable();
	String^ name;
	String^ sex;
	String^ age;
	if (adapter->Fill(tablep)) {
		name = String::Format("姓名：{0}", tablep->Rows[0]->ItemArray[2]->ToString());
		sex = String::Format("性别：{0}", tablep->Rows[0]->ItemArray[3]->ToString());
		age = String::Format("年龄：{0}", tablep->Rows[0]->ItemArray[4]->ToString());
	}
	String^ jyxm = String::Format("{0}", table1->Rows[0]->ItemArray[3]->ToString()); //项目
	String^ jyjg = String::Format("{0}", table1->Rows[0]->ItemArray[9]->ToString()); //结果
	strcmd = String::Format("SELECT * FROM project WHERE 检验项目 ='{0}'", table1->Rows[0]->ItemArray[3]->ToString());
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ table3 = gcnew DataTable();
	adapter->Fill(table3);
	String^ ckz = String::Format("{0}", table3->Rows[0]->ItemArray[3]->ToString()); //结果
																					//
	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);
	Drawing::Font^ usualfont = gcnew Drawing::Font(L"宋体", 9);
	Drawing::Font^ imformation = gcnew Drawing::Font(L"宋体", 10);
	g->DrawString(time, usualfont, Brushes::Black, left + 440, top);
	g->DrawLine(tablesPen, left, top + 15, left + width, top + 15);
	g->DrawString(name, imformation, Brushes::Black, left, top + 20);
	g->DrawString(sex, imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(age, imformation, Brushes::Black, left + 300, top + 20);
	g->DrawString(sjdoc, imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(kdks, imformation, Brushes::Black, left, top + 20);
	g->DrawString(mch, imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(sjno, imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(L"诊断：", imformation, Brushes::Black, left, top + 20);
	g->DrawString(ybno, imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(ybsy, imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawLine(tablesPen, left, top + 20, left + width, top + 20);
	g->DrawString(L"项目", imformation, Brushes::Black, left + 50, top + 25);
	g->DrawString(L"结果", imformation, Brushes::Black, left + 280, top + 25);
	g->DrawString(L"参考值", imformation, Brushes::Black, left + 480, top + 25);
	g->DrawLine(tablesPen, left, top + 40, left + width, top + 40);
	top += 45;
	////项目 //结果 //参考值
	g->DrawString(jyxm, imformation, Brushes::Black, left, top + 5);
	g->DrawString(jyjg, imformation, Brushes::Black, left + 280, top + 5);
	g->DrawString(ckz, imformation, Brushes::Black, left + 480, top + 5);

	top = e->MarginBounds.Top;                   // 左上角Y位置
	top = top + height - 65;
	g->DrawString(L"建议和解释：", imformation, Brushes::Black, left, top - 20);
	g->DrawLine(tablesPen, left, top, left + width, top);
	g->DrawString(qytm, usualfont, Brushes::Black, left, top + 5);
	g->DrawString(jytm, usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(jydoc, usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(kdtm, usualfont, Brushes::Black, left, top + 5);
	g->DrawString(shtm, usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(shdoc, usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"注：本报告只对此份样本负责，如有疑问，请在报告发出五日内联系相关医师！", usualfont, Brushes::Black, left, top + 5);
	e->HasMorePages = false;
}
private: System::Void 打印PToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ printDlg = gcnew PrintDialog();                   //打印对话框
	printDlg->Document = this->printDocument1;            //设置打印文档
	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		this->printDocument1->Print();                               //开始
}
private: void Loadlv5() {
	String^ strcom = String::Format("SELECT * FROM result WHERE 审核时间 IS NOT NULL AND 备注 IS NULL");
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		listView5->Items->Clear();
		for each(DataRow^ row in table1->Rows)
		{
			ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
			strcom = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'", row[2]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tablep = gcnew DataTable();
			if (adapter->Fill(tablep)) {
				item->SubItems->Add(tablep->Rows[0]->ItemArray[2]->ToString());
			}
			item->SubItems->Add(row[3]->ToString());
			listView5->Items->Add(item);
		}
	}
}
private: System::Void listView5_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	if (listView5->SelectedItems->Count < 1) return;
	String^ strcom = String::Format("SELECT * FROM result WHERE 样本编号 = '{0}'", listView5->SelectedItems[0]->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		this->textBox28->Text = table1->Rows[0]->ItemArray[9]->ToString();
		this->richTextBox2->Text = String::Format("{0}~{1}", table1->Rows[0]->ItemArray[8]->ToString(), table1->Rows[0]->ItemArray[10]->ToString());
		this->textBox33->Text = table1->Rows[0]->ItemArray[12]->ToString();
		strcom = String::Format("SELECT doctor.姓名, orders.开单科室 FROM orders INNER JOIN doctor ON orders.开单医生编号 = doctor.医生编号 WHERE orders.送检单号 = '{0}'", table1->Rows[0]->ItemArray[1]->ToString());
		adapter->SelectCommand->CommandText = strcom;
		DataTable^ tabled = gcnew DataTable();
		if (adapter->Fill(tabled)) {
			this->textBox27->Text = tabled->Rows[0]->ItemArray[1]->ToString();
			this->textBox29->Text = tabled->Rows[0]->ItemArray[0]->ToString();
		}
		strcom = String::Format("SELECT doctor.姓名 FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[6]->ToString());
		adapter->SelectCommand->CommandText = strcom;
		DataTable^ tabled1 = gcnew DataTable();
		if (adapter->Fill(tabled1)) {
			this->textBox30->Text = tabled1->Rows[0]->ItemArray[0]->ToString();
		}
		strcom = String::Format("SELECT doctor.姓名 FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[11]->ToString());
		adapter->SelectCommand->CommandText = strcom;
		DataTable^ tabled2 = gcnew DataTable();
		if (adapter->Fill(tabled2)) {
			this->textBox31->Text = tabled2->Rows[0]->ItemArray[0]->ToString();
		}
	}
	printPreviewControl1->Document = printDocument1;
	printPreviewControl1->Zoom = 1;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//print
	PrintDialog^ printDlg = gcnew PrintDialog();                   //打印对话框
	printDlg->Document = this->printDocument1;            //设置打印文档
	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		this->printDocument1->Print();                               //开始
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox34->Text->Trim();
	String^ str2 = this->textBox35->Text->Trim();
	if (!str1 && !str2) { Loadlv5(); return; }
	for each(ListViewItem^ item in listView5->Items) {
		if (str2)
			if (item->SubItems[1]->Text->ToString() == str2) {
				item->EnsureVisible();
				item->Selected = true;
			}
		if (str1)
			if (item->Text->ToString() == str1) {
				item->EnsureVisible();
				item->Selected = true;
			}
	}
}
private: System::Void 打印预览VToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // 打印预览对话框
	previewDlg->Document = this->printDocument1;         //设置打印文档对象
	previewDlg->ShowDialog();                                      // 显示打印预览对话框
}
private: System::Void 设置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DBset^ dbset = gcnew DBset();
	if (dbset->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		strConn = dbset->strConn;
	}
	String^ strcom1 = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table->Rows[0]->ItemArray[0]);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom1, strConn);
	DataTable^ table1 = gcnew DataTable();
	adapter->Fill(table1);
	PersonalData(table1);
	LoadTreeandcombo();
	Loadlv5();
}
private: System::Void 帮助LToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	About^ adlg = gcnew About();
	adlg->ShowDialog();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->toolStripStatusLabel2->Text = String::Format("当前时间： {0}", DateTime::Now.ToString());
}
private: System::Void 打印PToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ printDlg = gcnew PrintDialog();                   //打印对话框
	printDlg->Document = this->printDocument1;            //设置打印文档
	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		this->printDocument1->Print();
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void 开单检验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage11))
		this->tabControl1->SelectedTab = tabPage11;
	else {
		this->tabControl1->TabPages->Add(tabPage11);
		this->tabControl1->SelectedTab = tabPage11;
	}
}
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage3))
		this->tabControl1->SelectedTab = tabPage3;
	else {
		this->tabControl1->TabPages->Add(tabPage3);
		this->tabControl1->SelectedTab = tabPage3;
	}
}

};
}
