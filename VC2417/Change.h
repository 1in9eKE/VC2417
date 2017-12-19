#pragma once

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
	/// Change 摘要
	/// </summary>
	public ref class Change : public System::Windows::Forms::Form
	{
	public:
		Change(void)
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
		~Change()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  修改ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验项目ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  医生信息ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  病人信息ToolStripMenuItem1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::SplitContainer^  splitContainer6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label21;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::RichTextBox^  richTextBox2;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::ColumnHeader^  columnHeader8;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->修改ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验项目ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->病人信息ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->医生信息ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->工具TToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1224, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->退出XToolStripMenuItem });
			this->文件FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->文件FToolStripMenuItem->MergeIndex = 0;
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->退出XToolStripMenuItem->MergeIndex = 4;
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->退出XToolStripMenuItem->Text = L"关闭窗口";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Change::退出XToolStripMenuItem_Click);
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->修改ToolStripMenuItem });
			this->工具TToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->工具TToolStripMenuItem->MergeIndex = 2;
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
			// 
			// 修改ToolStripMenuItem
			// 
			this->修改ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->检验项目ToolStripMenuItem1,
					this->病人信息ToolStripMenuItem1, this->医生信息ToolStripMenuItem1
			});
			this->修改ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->修改ToolStripMenuItem->MergeIndex = 0;
			this->修改ToolStripMenuItem->Name = L"修改ToolStripMenuItem";
			this->修改ToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->修改ToolStripMenuItem->Text = L"修改/添加";
			// 
			// 检验项目ToolStripMenuItem1
			// 
			this->检验项目ToolStripMenuItem1->Name = L"检验项目ToolStripMenuItem1";
			this->检验项目ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->检验项目ToolStripMenuItem1->Text = L"检验项目";
			this->检验项目ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Change::检验项目ToolStripMenuItem1_Click);
			// 
			// 病人信息ToolStripMenuItem1
			// 
			this->病人信息ToolStripMenuItem1->Name = L"病人信息ToolStripMenuItem1";
			this->病人信息ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->病人信息ToolStripMenuItem1->Text = L"病人信息";
			this->病人信息ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Change::病人信息ToolStripMenuItem1_Click);
			// 
			// 医生信息ToolStripMenuItem1
			// 
			this->医生信息ToolStripMenuItem1->Name = L"医生信息ToolStripMenuItem1";
			this->医生信息ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->医生信息ToolStripMenuItem1->Text = L"医生信息";
			this->医生信息ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Change::医生信息ToolStripMenuItem1_Click);
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->关于AToolStripMenuItem });
			this->帮助HToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->帮助HToolStripMenuItem->MergeIndex = 3;
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助(&H)";
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->关于AToolStripMenuItem->MergeIndex = 0;
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->关于AToolStripMenuItem->Text = L"关于(&A)...";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1224, 586);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Change::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1216, 560);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"检验项目";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(3, 3);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->splitContainer6);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->groupBox4);
			this->splitContainer4->Size = System::Drawing::Size(1210, 554);
			this->splitContainer4->SplitterDistance = 412;
			this->splitContainer4->TabIndex = 1;
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->Location = System::Drawing::Point(0, 0);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->groupBox3);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->listView3);
			this->splitContainer6->Size = System::Drawing::Size(412, 554);
			this->splitContainer6->SplitterDistance = 79;
			this->splitContainer6->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->textBox17);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(412, 79);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(231, 50);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"查询";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Change::button9_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(86, 52);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(139, 21);
			this->textBox17->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 55);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(77, 12);
			this->label23->TabIndex = 0;
			this->label23->Text = L"检验项目名称";
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader5, this->columnHeader6,
					this->columnHeader7, this->columnHeader8
			});
			this->listView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(0, 0);
			this->listView3->MultiSelect = false;
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(412, 471);
			this->listView3->TabIndex = 5;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Change::listView3_ItemSelectionChanged);
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"检验项目名称";
			this->columnHeader5->Width = 132;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"取样类型";
			this->columnHeader6->Width = 124;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"价格";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->textBox20);
			this->groupBox4->Controls->Add(this->textBox21);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(794, 554);
			this->groupBox4->TabIndex = 27;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"检验项目资料";
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button11->AutoSize = true;
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(581, 422);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 29);
			this->button11->TabIndex = 33;
			this->button11->Text = L"添加";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Change::button11_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button10->AutoSize = true;
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->Location = System::Drawing::Point(581, 502);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 29);
			this->button10->TabIndex = 26;
			this->button10->Text = L"删除";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Change::button10_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button12->AutoSize = true;
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(581, 342);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 29);
			this->button12->TabIndex = 34;
			this->button12->Text = L"修改";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Change::button12_Click);
			// 
			// textBox16
			// 
			this->textBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox16->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox16->Location = System::Drawing::Point(260, 285);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(181, 29);
			this->textBox16->TabIndex = 30;
			// 
			// textBox20
			// 
			this->textBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox20->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox20->Location = System::Drawing::Point(260, 226);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(181, 29);
			this->textBox20->TabIndex = 30;
			// 
			// textBox21
			// 
			this->textBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox21->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox21->Location = System::Drawing::Point(260, 149);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(181, 29);
			this->textBox21->TabIndex = 31;
			// 
			// textBox22
			// 
			this->textBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox22->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox22->Location = System::Drawing::Point(260, 75);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(181, 29);
			this->textBox22->TabIndex = 32;
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(126, 152);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(85, 19);
			this->label24->TabIndex = 29;
			this->label24->Text = L"取样类别";
			// 
			// label22
			// 
			this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(126, 285);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 19);
			this->label22->TabIndex = 27;
			this->label22->Text = L"参考值";
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(126, 226);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(47, 19);
			this->label30->TabIndex = 27;
			this->label30->Text = L"价格";
			// 
			// label31
			// 
			this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(116, 78);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(123, 19);
			this->label31->TabIndex = 28;
			this->label31->Text = L"检验项目名称";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1216, 560);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"病人信息";
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
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer5);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->groupBox6);
			this->splitContainer1->Size = System::Drawing::Size(1210, 554);
			this->splitContainer1->SplitterDistance = 412;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(0, 0);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->groupBox2);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->listView1);
			this->splitContainer5->Size = System::Drawing::Size(412, 554);
			this->splitContainer5->SplitterDistance = 79;
			this->splitContainer5->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(412, 79);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Location = System::Drawing::Point(274, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Change::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox2->Location = System::Drawing::Point(99, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 21);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox1->Location = System::Drawing::Point(99, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 21);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 0;
			this->label2->Text = L"病人姓名";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"病人编号";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(412, 471);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Change::listView1_ItemSelectionChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"病人编号";
			this->columnHeader1->Width = 161;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"病人姓名";
			this->columnHeader2->Width = 151;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->richTextBox1);
			this->groupBox6->Controls->Add(this->button4);
			this->groupBox6->Controls->Add(this->button3);
			this->groupBox6->Controls->Add(this->button2);
			this->groupBox6->Controls->Add(this->comboBox1);
			this->groupBox6->Controls->Add(this->checkBox1);
			this->groupBox6->Controls->Add(this->dateTimePicker1);
			this->groupBox6->Controls->Add(this->textBox5);
			this->groupBox6->Controls->Add(this->textBox4);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox6->Location = System::Drawing::Point(0, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(794, 554);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"病人资料";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(439, 137);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(336, 345);
			this->richTextBox1->TabIndex = 47;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button4->AutoSize = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(620, 519);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 29);
			this->button4->TabIndex = 46;
			this->button4->Text = L"删除";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Change::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(357, 519);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 45;
			this->button3->Text = L"添加";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Change::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(94, 519);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 44;
			this->button2->Text = L"修改";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Change::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox1->Location = System::Drawing::Point(192, 245);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 27);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->Text = L"男";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(396, 105);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 18);
			this->checkBox1->TabIndex = 42;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Change::checkBox1_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(192, 383);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker1->TabIndex = 41;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(192, 453);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 29);
			this->textBox5->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(192, 313);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 29);
			this->textBox4->TabIndex = 37;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(192, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 29);
			this->textBox3->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(192, 105);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(181, 29);
			this->textBox6->TabIndex = 39;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(192, 35);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 29);
			this->textBox7->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(87, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 35;
			this->label7->Text = L"密 码";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(580, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 19);
			this->label10->TabIndex = 29;
			this->label10->Text = L"备注";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(77, 458);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 19);
			this->label6->TabIndex = 28;
			this->label6->Text = L"身份证号";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(73, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 19);
			this->label5->TabIndex = 30;
			this->label5->Text = L"出生日期";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(87, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 19);
			this->label4->TabIndex = 31;
			this->label4->Text = L"年 龄";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(87, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 32;
			this->label3->Text = L"性 别";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(87, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 19);
			this->label8->TabIndex = 33;
			this->label8->Text = L"姓 名";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(77, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 19);
			this->label9->TabIndex = 34;
			this->label9->Text = L"编号 ID";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1216, 560);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"医生信息";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->groupBox5);
			this->splitContainer2->Size = System::Drawing::Size(1210, 554);
			this->splitContainer2->SplitterDistance = 412;
			this->splitContainer2->TabIndex = 1;
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
			this->splitContainer3->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->listView2);
			this->splitContainer3->Size = System::Drawing::Size(412, 554);
			this->splitContainer3->SplitterDistance = 79;
			this->splitContainer3->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(412, 79);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->Location = System::Drawing::Point(298, 37);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"查询";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Change::button5_Click);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox8->Location = System::Drawing::Point(107, 45);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(119, 21);
			this->textBox8->TabIndex = 1;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox9->Location = System::Drawing::Point(107, 14);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(119, 21);
			this->textBox9->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"医生姓名";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 17);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 12);
			this->label12->TabIndex = 0;
			this->label12->Text = L"医生编号";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(0, 0);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(412, 471);
			this->listView2->TabIndex = 5;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Change::listView2_ItemSelectionChanged);
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"医生编号";
			this->columnHeader3->Width = 147;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"医生姓名";
			this->columnHeader4->Width = 135;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->richTextBox2);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->checkBox2);
			this->groupBox5->Controls->Add(this->dateTimePicker2);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->textBox13);
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox5->Location = System::Drawing::Point(0, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(794, 554);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"医生资料";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox2->Location = System::Drawing::Point(415, 117);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(336, 365);
			this->richTextBox2->TabIndex = 52;
			this->richTextBox2->Text = L"";
			// 
			// textBox15
			// 
			this->textBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox15->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox15->Location = System::Drawing::Point(170, 453);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(181, 29);
			this->textBox15->TabIndex = 51;
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(55, 458);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 19);
			this->label21->TabIndex = 50;
			this->label21->Text = L"所属科室";
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->AutoSize = true;
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(609, 520);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 31);
			this->button6->TabIndex = 48;
			this->button6->Text = L"删除";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Change::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->AutoSize = true;
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(374, 520);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 31);
			this->button7->TabIndex = 47;
			this->button7->Text = L"添加";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Change::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button8->AutoSize = true;
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(65, 520);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 31);
			this->button8->TabIndex = 46;
			this->button8->Text = L"修改";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Change::button8_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox2->Location = System::Drawing::Point(170, 203);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 45;
			this->comboBox2->Text = L"男";
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox2->Location = System::Drawing::Point(374, 83);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(82, 18);
			this->checkBox2->TabIndex = 44;
			this->checkBox2->Text = L"显示密码";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Change::checkBox2_CheckedChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker2->Location = System::Drawing::Point(170, 327);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker2->TabIndex = 43;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(170, 390);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(181, 29);
			this->textBox10->TabIndex = 38;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(170, 264);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 29);
			this->textBox11->TabIndex = 39;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox12->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox12->Location = System::Drawing::Point(170, 140);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(181, 29);
			this->textBox12->TabIndex = 40;
			// 
			// textBox13
			// 
			this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox13->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox13->Location = System::Drawing::Point(170, 77);
			this->textBox13->Name = L"textBox13";
			this->textBox13->PasswordChar = '*';
			this->textBox13->Size = System::Drawing::Size(181, 29);
			this->textBox13->TabIndex = 41;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox14->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox14->Location = System::Drawing::Point(170, 14);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(181, 29);
			this->textBox14->TabIndex = 42;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(65, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 19);
			this->label13->TabIndex = 37;
			this->label13->Text = L"密 码";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(557, 95);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 19);
			this->label14->TabIndex = 31;
			this->label14->Text = L"备注";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(51, 395);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 19);
			this->label15->TabIndex = 30;
			this->label15->Text = L"身份证号";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(51, 332);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(85, 19);
			this->label16->TabIndex = 32;
			this->label16->Text = L"出生日期";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(65, 269);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 19);
			this->label17->TabIndex = 33;
			this->label17->Text = L"年 龄";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(65, 206);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 19);
			this->label18->TabIndex = 34;
			this->label18->Text = L"性 别";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(65, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 19);
			this->label19->TabIndex = 35;
			this->label19->Text = L"姓 名";
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(55, 17);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(77, 19);
			this->label20->TabIndex = 36;
			this->label20->Text = L"编号 ID";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"参考值";
			// 
			// Change
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 611);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Change";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"修改/添加信息";
			this->Load += gcnew System::EventHandler(this, &Change::Change_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
		//patient
		 //doctor
		String^ strconn;
private: System::Void Change_Load(System::Object^  sender, System::EventArgs^  e) {
	this->tabControl1->TabPages->Clear();
	this->tabControl1->TabPages->Add(tabPage1);
	menuStrip1->Visible = !this->IsMdiChild;
	//初始化表格
	String^ strcom = String::Format("SELECT * FROM project");
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
	DataTable^ table1 = gcnew DataTable();
	adapter->Fill(table1);
	display_View3(table1);
	strcom = String::Format("SELECT * FROM patient");
	adapter->SelectCommand->CommandText = strcom;
	DataTable^ table2 = gcnew DataTable();
	adapter->Fill(table2);
	display_View1(table2);
	strcom = String::Format("SELECT * FROM doctor");
	adapter->SelectCommand->CommandText = strcom;
	DataTable^ table3 = gcnew DataTable();
	adapter->Fill(table3);
	display_View2(table3);
	//初始化textbox

}
private: System::Void 检验项目ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage1))
		this->tabControl1->SelectedTab = tabPage1;
	else {
		this->tabControl1->TabPages->Add(tabPage1);
		this->tabControl1->SelectedTab = tabPage1;
	}
}
private: System::Void 病人信息ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void 医生信息ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage3))
		this->tabControl1->SelectedTab = tabPage3;
	else {
		this->tabControl1->TabPages->Add(tabPage3);
		this->tabControl1->SelectedTab = tabPage3;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox6->PasswordChar = checkBox1->Checked ? 0 : '*';   // 取消或设置密码字符
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox13->PasswordChar = checkBox2->Checked ? 0 : '*';   // 取消或设置密码字符
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//
}
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void display_View3(DataTable^ table1) {
	listView3->Items->Clear();
	//输出各行
	for each(DataRow^ row in table1->Rows)
	{
		ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
		for (int i = 1; i <table1->Columns->Count; i++)
			item->SubItems->Add(row[i]->ToString());
		listView3->Items->Add(item);
	}
}
private: System::Void display_View1(DataTable^ table2) {
	listView1->Items->Clear();
	//输出各行
	for each(DataRow^ row in table2->Rows)
	{
		ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());		
		item->SubItems->Add(row[2]->ToString());
		listView1->Items->Add(item);
	}
}
private: System::Void display_View2(DataTable^ table3) {
	listView2->Items->Clear();
	//输出各行
	for each(DataRow^ row in table3->Rows)
	{
		ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
		item->SubItems->Add(row[2]->ToString());
		listView2->Items->Add(item);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str = this->textBox17->Text->Trim();
	if (!str) return;
	for each(ListViewItem^ item in listView3->Items) {
		if (item->Text->ToString() == str) {
			item->EnsureVisible();
			item->Selected = true;
		}
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = textBox22->Text->Trim();
	String^ str2 = textBox21->Text->Trim();
	String^ str3 = textBox20->Text->Trim();
	String^ str4 = textBox16->Text->Trim();
	if (str1=="" || str2=="" || str3=="") { 
		MessageBox::Show("检验项目名称、取样类别、价格等不能为空！", "错误");
		return; 
	}
	try {
		String^ strCmd = String::Format("UPDATE project SET 取样类别 ='{0}', 项目价格 = {1}, 参考值 = '{2}' WHERE 检验项目='{3}'",str2, Double::Parse(str3), str4,str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM project");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View3(table1);
		MessageBox::Show("修改完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void listView3_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	if (this->listView3->SelectedItems->Count < 1) return;
	this->textBox22->Text = listView3->SelectedItems[0]->Text;
	this->textBox21->Text = listView3->SelectedItems[0]->SubItems[1]->Text;
	this->textBox20->Text = listView3->SelectedItems[0]->SubItems[2]->Text;
	this->textBox16->Text = listView3->SelectedItems[0]->SubItems[3]->Text;
}
private: System::Void listView1_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	if (this->listView1->SelectedItems->Count < 1) return;
	DataTable^ table1 = gcnew DataTable();
	String^ strcom = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'",listView1->SelectedItems[0]->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
	if (adapter->Fill(table1)) {
		this->textBox7->Text = table1->Rows[0]->ItemArray[0]->ToString();
		this->textBox6->Text = table1->Rows[0]->ItemArray[1]->ToString();
		this->textBox3->Text = table1->Rows[0]->ItemArray[2]->ToString();
		this->comboBox1->SelectedIndex = table1->Rows[0]->ItemArray[3]->ToString() == "男" ? 0:1;
		this->textBox4->Text = table1->Rows[0]->ItemArray[4]->ToString();
		this->dateTimePicker1->Text = table1->Rows[0]->ItemArray[5]->ToString();
		this->textBox5->Text = table1->Rows[0]->ItemArray[6]->ToString();
		this->richTextBox1->Text = table1->Rows[0]->ItemArray[7]->ToString();
	}
}
private: System::Void listView2_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	if (this->listView2->SelectedItems->Count < 1) return;
	DataTable^ table1 = gcnew DataTable();
	String^ strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", listView2->SelectedItems[0]->Text);
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
	if (adapter->Fill(table1)) {
		this->textBox14->Text = table1->Rows[0]->ItemArray[0]->ToString();
		this->textBox13->Text = table1->Rows[0]->ItemArray[1]->ToString();
		this->textBox12->Text = table1->Rows[0]->ItemArray[2]->ToString();
		this->comboBox2->SelectedIndex = table1->Rows[0]->ItemArray[3]->ToString() == "男" ? 0 : 1;
		this->textBox11->Text = table1->Rows[0]->ItemArray[4]->ToString();
		this->dateTimePicker2->Text = table1->Rows[0]->ItemArray[5]->ToString();
		this->textBox10->Text = table1->Rows[0]->ItemArray[6]->ToString();
		this->textBox15->Text = table1->Rows[0]->ItemArray[7]->ToString();
		this->richTextBox1->Text = table1->Rows[0]->ItemArray[8]->ToString();
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = textBox22->Text->Trim();
	String^ str2 = textBox21->Text->Trim();
	String^ str3 = textBox20->Text->Trim();
	String^ str4 = textBox16->Text->Trim();
	if (str1=="" || str2=="" || str3=="") {
		MessageBox::Show("检验项目名称、取样类别、价格等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("INSERT INTO project (检验项目,取样类别,项目价格,参考值) VALUES('{0}','{1}',{2},'{3}')", str1, str2, Double::Parse(str3),str4);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM project");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View3(table1);
		MessageBox::Show("添加完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = textBox22->Text->Trim();
	/*String^ str2 = textBox21->Text->Trim();
	String^ str3 = textBox20->Text->Trim();
	String^ str4 = textBox16->Text->Trim();*/
	if (str1=="") {
		MessageBox::Show("检验项目名称不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("DELETE FROM project WHERE 检验项目 = '{0}'", str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM project");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View3(table1);
		MessageBox::Show("删除完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox1->Text->Trim();
	String^ str2 = this->textBox2->Text->Trim();
	if (!str1 && !str2) return;
	for each(ListViewItem^ item in listView1->Items) {
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox7->Text->Trim();
	String^ str2 = this->textBox6->Text->Trim();
	String^ str3 = this->textBox3->Text->Trim();
	String^ str4 = this->comboBox1->Text->Trim();
	String^ str5 = this->textBox4->Text->Trim();
	String^ str6 = this->dateTimePicker1->Value.ToString("yyyy/MM/dd");
	String^ str7 = this->textBox5->Text->Trim();
	String^ str8 = this->richTextBox1->Text->Trim();
	if (!str1 || !str2 || !str3) {
		MessageBox::Show("ID、密码、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("UPDATE patient SET 密码 ='{0}', 姓名 = '{1}', 性别 = '{2}', 年龄 = {3}, 出生日期 = '{4}', 身份证号 = '{5}', 备注 = '{6}' WHERE 病人编号='{7}'", 
			str2, str3, str4, int::Parse(str5), str6, str7, str8, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM patient");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View1(table1);
		MessageBox::Show("修改完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox7->Text->Trim();
	String^ str2 = this->textBox6->Text->Trim();
	String^ str3 = this->textBox3->Text->Trim();
	String^ str4 = this->comboBox1->Text->Trim();
	String^ str5 = this->textBox4->Text->Trim();
	String^ str6 = this->dateTimePicker1->Value.ToString("yyyy/MM/dd");
	String^ str7 = this->textBox5->Text->Trim();
	String^ str8 = this->richTextBox1->Text->Trim();
	if (!str1 || !str2 || !str3) {
		MessageBox::Show("ID、密码、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("INSERT INTO patient (病人编号,密码,姓名,性别,年龄,出生日期,身份证号,备注) VALUES ('{7}','{0}','{1}','{2}',{3},'{4}','{5}','{6}')",
			str2, str3, str4, int::Parse(str5), str6, str7, str8, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM patient");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View1(table1);
		MessageBox::Show("添加完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox7->Text->Trim();
	String^ str3 = this->textBox3->Text->Trim();
	if (!str1 || !str3) {
		MessageBox::Show("ID、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("DELETE FROM patient WHERE 姓名 = '{0}' AND 病人编号='{1}'", str3, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM patient");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View1(table1);
		MessageBox::Show("删除完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox9->Text->Trim();
	String^ str2 = this->textBox8->Text->Trim();
	if (!str1 && !str2) return;
	for each(ListViewItem^ item in listView2->Items) {
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
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox14->Text->Trim();
	String^ str2 = this->textBox13->Text->Trim();
	String^ str3 = this->textBox12->Text->Trim();
	String^ str4 = this->comboBox2->Text->Trim();
	String^ str5 = this->textBox11->Text->Trim();
	String^ str6 = this->dateTimePicker2->Value.ToString("yyyy/MM/dd");
	String^ str7 = this->textBox10->Text->Trim();
	String^ str8 = this->textBox15->Text->Trim();
	String^ str9 = this->richTextBox1->Text->Trim();
	if (!str1 || !str2 || !str3) {
		MessageBox::Show("ID、密码、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("UPDATE doctor SET 密码 ='{0}', 姓名 = '{1}', 性别 = '{2}', 年龄 = {3}, 出生日期 = '{4}', 身份证号 = '{5}', 所属科室 = '{6}', 备注 = '{7}' WHERE 医生编号='{8}'",
			str2, str3, str4, int::Parse(str5), str6, str7, str8, str9, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM doctor");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View2(table1);
		MessageBox::Show("修改完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox14->Text->Trim();
	String^ str2 = this->textBox13->Text->Trim();
	String^ str3 = this->textBox12->Text->Trim();
	String^ str4 = this->comboBox2->Text->Trim();
	String^ str5 = this->textBox11->Text->Trim();
	String^ str6 = this->dateTimePicker2->Value.ToString("yyyy/MM/dd");
	String^ str7 = this->textBox10->Text->Trim();
	String^ str8 = this->textBox15->Text->Trim();
	String^ str9 = this->richTextBox1->Text->Trim();
	if (!str1 || !str2 || !str3) {
		MessageBox::Show("ID、密码、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("INSERT INTO doctor (医生编号,密码,姓名,性别,年龄,出生日期,身份证号,所属科室,备注) VALUES ('{8}','{0}','{1}','{2}',{3},'{4}','{5}','{6}','{7}')",
			str2, str3, str4, int::Parse(str5), str6, str7, str8, str9, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM doctor");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View2(table1);
		MessageBox::Show("添加完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->textBox14->Text->Trim();
	String^ str3 = this->textBox12->Text->Trim();
	if (!str1 || !str3) {
		MessageBox::Show("ID、姓名等不能为空！", "错误");
		return;
	}
	try {
		String^ strCmd = String::Format("DELETE FROM doctor WHERE 姓名 = '{0}' AND 医生编号='{1}'", str3, str1);
		Data::OleDb::OleDbConnection^ conn = gcnew Data::OleDb::OleDbConnection(strconn);
		// 创建可执行命令
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, conn);
		// 执行操作
		conn->Open();
		cmd->ExecuteNonQuery();
		conn->Close();
		// 显示结果
		DataTable^ table1 = gcnew DataTable();
		String^ strcom = String::Format("SELECT * FROM doctor");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strconn);
		adapter->Fill(table1);
		display_View2(table1);
		MessageBox::Show("删除完成。", "成功");
	}
	catch (Data::OleDb::OleDbException^ e)
	{
		MessageBox::Show(e->Message, "错误");
	}
}
};
}
