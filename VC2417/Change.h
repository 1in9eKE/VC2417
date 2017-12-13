#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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






	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
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
	private: System::Windows::Forms::ListBox^  listBox2;
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
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::ColumnHeader^  columnHeader7;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Change::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->修改ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验项目ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->医生信息ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->病人信息ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
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
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
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
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			this->groupBox3->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(970, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->打印PToolStripMenuItem,
					this->打印预览VToolStripMenuItem, this->toolStripSeparator2, this->退出XToolStripMenuItem
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
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->退出XToolStripMenuItem->Text = L"关闭";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->修改ToolStripMenuItem });
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
			// 
			// 修改ToolStripMenuItem
			// 
			this->修改ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->检验项目ToolStripMenuItem1,
					this->医生信息ToolStripMenuItem1, this->病人信息ToolStripMenuItem1
			});
			this->修改ToolStripMenuItem->Name = L"修改ToolStripMenuItem";
			this->修改ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->修改ToolStripMenuItem->Text = L"修改/添加";
			// 
			// 检验项目ToolStripMenuItem1
			// 
			this->检验项目ToolStripMenuItem1->Name = L"检验项目ToolStripMenuItem1";
			this->检验项目ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->检验项目ToolStripMenuItem1->Text = L"检验项目";
			// 
			// 医生信息ToolStripMenuItem1
			// 
			this->医生信息ToolStripMenuItem1->Name = L"医生信息ToolStripMenuItem1";
			this->医生信息ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->医生信息ToolStripMenuItem1->Text = L"医生信息";
			// 
			// 病人信息ToolStripMenuItem1
			// 
			this->病人信息ToolStripMenuItem1->Name = L"病人信息ToolStripMenuItem1";
			this->病人信息ToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->病人信息ToolStripMenuItem1->Text = L"病人信息";
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
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
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
			this->tabControl1->Size = System::Drawing::Size(970, 685);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(962, 659);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"检验项目";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(962, 659);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"病人信息";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(962, 659);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"医生信息";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			this->splitContainer1->Panel2->Controls->Add(this->listBox1);
			this->splitContainer1->Panel2->Controls->Add(this->button4);
			this->splitContainer1->Panel2->Controls->Add(this->button3);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel2->Controls->Add(this->checkBox1);
			this->splitContainer1->Panel2->Controls->Add(this->dateTimePicker1);
			this->splitContainer1->Panel2->Controls->Add(this->textBox5);
			this->splitContainer1->Panel2->Controls->Add(this->textBox4);
			this->splitContainer1->Panel2->Controls->Add(this->textBox3);
			this->splitContainer1->Panel2->Controls->Add(this->textBox6);
			this->splitContainer1->Panel2->Controls->Add(this->textBox7);
			this->splitContainer1->Panel2->Controls->Add(this->label7);
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Panel2->Controls->Add(this->label6);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label8);
			this->splitContainer1->Panel2->Controls->Add(this->label9);
			this->splitContainer1->Size = System::Drawing::Size(956, 653);
			this->splitContainer1->SplitterDistance = 326;
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
			this->splitContainer5->Size = System::Drawing::Size(326, 653);
			this->splitContainer5->SplitterDistance = 94;
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
			this->groupBox2->Size = System::Drawing::Size(326, 94);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 14);
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
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(326, 555);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"病人编号";
			this->columnHeader1->Width = 161;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"病人姓名";
			this->columnHeader2->Width = 135;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 0;
			this->label2->Text = L"病人姓名";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"查询";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(346, 91);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 18);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(135, 377);
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
			this->textBox5->Location = System::Drawing::Point(135, 450);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(181, 29);
			this->textBox5->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(135, 307);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 29);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(135, 159);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 29);
			this->textBox3->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(135, 85);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 29);
			this->textBox6->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(135, 11);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 29);
			this->textBox7->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(30, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 15;
			this->label7->Text = L"密 码";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(16, 458);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"身份证号";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(16, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"出生日期";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(30, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"年 龄";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(30, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"性 别";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(30, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 19);
			this->label8->TabIndex = 13;
			this->label8->Text = L"姓 名";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(20, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 19);
			this->label9->TabIndex = 14;
			this->label9->Text = L"账号 ID";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox1->Location = System::Drawing::Point(135, 233);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 27);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->Text = L"男";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(525, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"修改";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(525, 580);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 26;
			this->button3->Text = L"添加";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(525, 609);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"删除";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(20, 512);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"备注";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(135, 512);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 88);
			this->listBox1->TabIndex = 27;
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
			this->splitContainer2->Panel2->Controls->Add(this->textBox15);
			this->splitContainer2->Panel2->Controls->Add(this->label21);
			this->splitContainer2->Panel2->Controls->Add(this->listBox2);
			this->splitContainer2->Panel2->Controls->Add(this->button6);
			this->splitContainer2->Panel2->Controls->Add(this->button7);
			this->splitContainer2->Panel2->Controls->Add(this->button8);
			this->splitContainer2->Panel2->Controls->Add(this->comboBox2);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox2);
			this->splitContainer2->Panel2->Controls->Add(this->dateTimePicker2);
			this->splitContainer2->Panel2->Controls->Add(this->textBox10);
			this->splitContainer2->Panel2->Controls->Add(this->textBox11);
			this->splitContainer2->Panel2->Controls->Add(this->textBox12);
			this->splitContainer2->Panel2->Controls->Add(this->textBox13);
			this->splitContainer2->Panel2->Controls->Add(this->textBox14);
			this->splitContainer2->Panel2->Controls->Add(this->label13);
			this->splitContainer2->Panel2->Controls->Add(this->label14);
			this->splitContainer2->Panel2->Controls->Add(this->label15);
			this->splitContainer2->Panel2->Controls->Add(this->label16);
			this->splitContainer2->Panel2->Controls->Add(this->label17);
			this->splitContainer2->Panel2->Controls->Add(this->label18);
			this->splitContainer2->Panel2->Controls->Add(this->label19);
			this->splitContainer2->Panel2->Controls->Add(this->label20);
			this->splitContainer2->Size = System::Drawing::Size(956, 653);
			this->splitContainer2->SplitterDistance = 326;
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
			this->splitContainer3->Size = System::Drawing::Size(326, 653);
			this->splitContainer3->SplitterDistance = 94;
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
			this->groupBox1->Size = System::Drawing::Size(326, 94);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(205, 40);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"查询";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(87, 42);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 21);
			this->textBox8->TabIndex = 1;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(87, 11);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 21);
			this->textBox9->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"医生姓名";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 14);
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
			this->listView2->Location = System::Drawing::Point(0, 0);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(326, 555);
			this->listView2->TabIndex = 5;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"医生编号";
			this->columnHeader3->Width = 161;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"医生姓名";
			this->columnHeader4->Width = 135;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 19;
			this->listBox2->Location = System::Drawing::Point(135, 555);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 80);
			this->listBox2->TabIndex = 27;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(525, 609);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 26;
			this->button6->Text = L"删除";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(525, 580);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 26;
			this->button7->Text = L"添加";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(525, 551);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"修改";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox2->Location = System::Drawing::Point(135, 233);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 25;
			this->comboBox2->Text = L"男";
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox2->Location = System::Drawing::Point(346, 91);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(82, 18);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"显示密码";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker2->Location = System::Drawing::Point(135, 377);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker2->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(135, 450);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(181, 29);
			this->textBox10->TabIndex = 16;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(135, 307);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 29);
			this->textBox11->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox12->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox12->Location = System::Drawing::Point(135, 159);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(181, 29);
			this->textBox12->TabIndex = 18;
			// 
			// textBox13
			// 
			this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox13->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox13->Location = System::Drawing::Point(135, 85);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(181, 29);
			this->textBox13->TabIndex = 19;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox14->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox14->Location = System::Drawing::Point(135, 11);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(181, 29);
			this->textBox14->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(30, 88);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 19);
			this->label13->TabIndex = 15;
			this->label13->Text = L"密 码";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(20, 555);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(47, 19);
			this->label14->TabIndex = 9;
			this->label14->Text = L"备注";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(16, 458);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 19);
			this->label15->TabIndex = 9;
			this->label15->Text = L"身份证号";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(16, 384);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(85, 19);
			this->label16->TabIndex = 10;
			this->label16->Text = L"出生日期";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(30, 310);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 19);
			this->label17->TabIndex = 11;
			this->label17->Text = L"年 龄";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(30, 236);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(57, 19);
			this->label18->TabIndex = 12;
			this->label18->Text = L"性 别";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(30, 162);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 19);
			this->label19->TabIndex = 13;
			this->label19->Text = L"姓 名";
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(20, 14);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(77, 19);
			this->label20->TabIndex = 14;
			this->label20->Text = L"账号 ID";
			// 
			// textBox15
			// 
			this->textBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox15->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox15->Location = System::Drawing::Point(135, 503);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(181, 29);
			this->textBox15->TabIndex = 29;
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(16, 506);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 19);
			this->label21->TabIndex = 28;
			this->label21->Text = L"所属科室";
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
			this->splitContainer4->Panel2->Controls->Add(this->button10);
			this->splitContainer4->Panel2->Controls->Add(this->button11);
			this->splitContainer4->Panel2->Controls->Add(this->button12);
			this->splitContainer4->Panel2->Controls->Add(this->textBox20);
			this->splitContainer4->Panel2->Controls->Add(this->textBox21);
			this->splitContainer4->Panel2->Controls->Add(this->textBox22);
			this->splitContainer4->Panel2->Controls->Add(this->label24);
			this->splitContainer4->Panel2->Controls->Add(this->label30);
			this->splitContainer4->Panel2->Controls->Add(this->label31);
			this->splitContainer4->Size = System::Drawing::Size(956, 653);
			this->splitContainer4->SplitterDistance = 326;
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
			this->splitContainer6->Size = System::Drawing::Size(326, 653);
			this->splitContainer6->SplitterDistance = 94;
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
			this->groupBox3->Size = System::Drawing::Size(326, 94);
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
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader5, this->columnHeader6,
					this->columnHeader7
			});
			this->listView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->Location = System::Drawing::Point(0, 0);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(326, 555);
			this->listView3->TabIndex = 5;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
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
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->Location = System::Drawing::Point(485, 561);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 29);
			this->button10->TabIndex = 26;
			this->button10->Text = L"删除";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(485, 473);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 29);
			this->button11->TabIndex = 26;
			this->button11->Text = L"添加";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->AutoSize = true;
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(485, 385);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 29);
			this->button12->TabIndex = 26;
			this->button12->Text = L"修改";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox20
			// 
			this->textBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox20->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox20->Location = System::Drawing::Point(164, 162);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(181, 29);
			this->textBox20->TabIndex = 18;
			// 
			// textBox21
			// 
			this->textBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox21->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox21->Location = System::Drawing::Point(164, 85);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(181, 29);
			this->textBox21->TabIndex = 19;
			// 
			// textBox22
			// 
			this->textBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox22->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox22->Location = System::Drawing::Point(164, 11);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(181, 29);
			this->textBox22->TabIndex = 20;
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(30, 88);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(85, 19);
			this->label24->TabIndex = 15;
			this->label24->Text = L"取样类别";
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(30, 162);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(47, 19);
			this->label30->TabIndex = 13;
			this->label30->Text = L"价格";
			// 
			// label31
			// 
			this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(20, 14);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(123, 19);
			this->label31->TabIndex = 14;
			this->label31->Text = L"检验项目名称";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"价格";
			// 
			// Change
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 710);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Change";
			this->Text = L"Change";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
