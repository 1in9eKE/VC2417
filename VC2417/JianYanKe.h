#pragma once
#include "notgood.h"
namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
	using namespace System::IO::Ports;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// JianYanKe 摘要
	/// </summary>
	public ref class JianYanKe : public System::Windows::Forms::Form
	{
	public:
		JianYanKe(void)
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
		~JianYanKe()
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  系统SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  样本管理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  样本录入ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验管理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验报告管理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  报告查询ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  检验报告查询ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  综合统计报表ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::SplitContainer^  splitContainer6;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::TabControl^  tabControl6;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TabControl^  tabControl7;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::SplitContainer^  splitContainer7;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::SplitContainer^  splitContainer8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::SplitContainer^  splitContainer13;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ListView^  listView6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::SplitContainer^  splitContainer15;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::ListView^  listView8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::SplitContainer^  splitContainer9;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::SplitContainer^  splitContainer10;
	private: System::Windows::Forms::GroupBox^  groupBox5;
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
	private: System::Windows::Forms::TabControl^  tabControl8;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  打印PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::ToolStripMenuItem^  个人信息ToolStripMenuItem;
	private: System::Windows::Forms::TabPage^  tabPage17;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader18;
	private: System::Windows::Forms::ColumnHeader^  columnHeader19;
	private: System::Windows::Forms::ColumnHeader^  columnHeader20;
	private: System::Windows::Forms::ColumnHeader^  columnHeader21;
	private: System::Windows::Forms::ColumnHeader^  columnHeader22;
	private: System::Windows::Forms::ColumnHeader^  columnHeader23;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader24;
	private: System::Windows::Forms::ColumnHeader^  columnHeader25;
	private: System::Windows::Forms::ColumnHeader^  columnHeader26;
	private: System::Windows::Forms::ColumnHeader^  columnHeader27;
	private: System::Windows::Forms::ColumnHeader^  columnHeader28;
	private: System::Windows::Forms::ColumnHeader^  columnHeader29;
	private: System::Windows::Forms::ColumnHeader^  columnHeader30;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label63;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::Button^  button7;
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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"待录入样本"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"已录入样本"));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->系统SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->个人信息ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->样本管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->样本录入ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验报告管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->报告查询ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->检验报告查询ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->综合统计报表ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->打印PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer13 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->listView6 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer9 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer15 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->listView8 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader24 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader25 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader26 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader27 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader28 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader29 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader30 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader23 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer7 = (gcnew System::Windows::Forms::SplitContainer());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
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
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl8 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer13))->BeginInit();
			this->splitContainer13->Panel1->SuspendLayout();
			this->splitContainer13->Panel2->SuspendLayout();
			this->splitContainer13->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer9))->BeginInit();
			this->splitContainer9->Panel1->SuspendLayout();
			this->splitContainer9->Panel2->SuspendLayout();
			this->splitContainer9->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer15))->BeginInit();
			this->splitContainer15->Panel1->SuspendLayout();
			this->splitContainer15->Panel2->SuspendLayout();
			this->splitContainer15->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabControl4->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->BeginInit();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage14->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabControl7->SuspendLayout();
			this->tabPage15->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer7))->BeginInit();
			this->splitContainer7->Panel1->SuspendLayout();
			this->splitContainer7->Panel2->SuspendLayout();
			this->splitContainer7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->tabPage12->SuspendLayout();
			this->tabControl8->SuspendLayout();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage17->SuspendLayout();
			this->SuspendLayout();
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->系统SToolStripMenuItem,
					this->样本管理ToolStripMenuItem, this->检验管理ToolStripMenuItem, this->报告查询ToolStripMenuItem, this->统计分析ToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1267, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 系统SToolStripMenuItem
			// 
			this->系统SToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->个人信息ToolStripMenuItem,
					this->toolStripSeparator1, this->打印PToolStripMenuItem, this->打印预览VToolStripMenuItem, this->toolStripSeparator2, this->退出XToolStripMenuItem
			});
			this->系统SToolStripMenuItem->Name = L"系统SToolStripMenuItem";
			this->系统SToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->系统SToolStripMenuItem->Text = L"系统(&S)";
			// 
			// 个人信息ToolStripMenuItem
			// 
			this->个人信息ToolStripMenuItem->Name = L"个人信息ToolStripMenuItem";
			this->个人信息ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->个人信息ToolStripMenuItem->Text = L"个人信息";
			this->个人信息ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::个人信息ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			this->打印PToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::打印PToolStripMenuItem_Click);
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			this->打印预览VToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::打印预览VToolStripMenuItem_Click);
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
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			// 
			// 样本管理ToolStripMenuItem
			// 
			this->样本管理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->样本录入ToolStripMenuItem });
			this->样本管理ToolStripMenuItem->Name = L"样本管理ToolStripMenuItem";
			this->样本管理ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->样本管理ToolStripMenuItem->Text = L"样本管理";
			// 
			// 样本录入ToolStripMenuItem
			// 
			this->样本录入ToolStripMenuItem->Name = L"样本录入ToolStripMenuItem";
			this->样本录入ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->样本录入ToolStripMenuItem->Text = L"样本录入";
			this->样本录入ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::样本录入ToolStripMenuItem_Click);
			// 
			// 检验管理ToolStripMenuItem
			// 
			this->检验管理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->检验报告管理ToolStripMenuItem });
			this->检验管理ToolStripMenuItem->Name = L"检验管理ToolStripMenuItem";
			this->检验管理ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->检验管理ToolStripMenuItem->Text = L"检验管理";
			// 
			// 检验报告管理ToolStripMenuItem
			// 
			this->检验报告管理ToolStripMenuItem->Name = L"检验报告管理ToolStripMenuItem";
			this->检验报告管理ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->检验报告管理ToolStripMenuItem->Text = L"检验报告管理";
			this->检验报告管理ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::检验报告管理ToolStripMenuItem_Click);
			// 
			// 报告查询ToolStripMenuItem
			// 
			this->报告查询ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->检验报告查询ToolStripMenuItem });
			this->报告查询ToolStripMenuItem->Name = L"报告查询ToolStripMenuItem";
			this->报告查询ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->报告查询ToolStripMenuItem->Text = L"报告查询";
			// 
			// 检验报告查询ToolStripMenuItem
			// 
			this->检验报告查询ToolStripMenuItem->Name = L"检验报告查询ToolStripMenuItem";
			this->检验报告查询ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->检验报告查询ToolStripMenuItem->Text = L"检验报告查询";
			this->检验报告查询ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::检验报告查询ToolStripMenuItem_Click);
			// 
			// 统计分析ToolStripMenuItem
			// 
			this->统计分析ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->综合统计报表ToolStripMenuItem });
			this->统计分析ToolStripMenuItem->Name = L"统计分析ToolStripMenuItem";
			this->统计分析ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->统计分析ToolStripMenuItem->Text = L"统计分析";
			// 
			// 综合统计报表ToolStripMenuItem
			// 
			this->综合统计报表ToolStripMenuItem->Name = L"综合统计报表ToolStripMenuItem";
			this->综合统计报表ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->综合统计报表ToolStripMenuItem->Text = L"综合统计报表";
			this->综合统计报表ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JianYanKe::综合统计报表ToolStripMenuItem_Click);
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
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 692);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1267, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(120, 17);
			this->toolStripStatusLabel1->Text = L"检验报告总数 已检验";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->打印PToolStripButton,
					this->toolStripSeparator3, this->帮助LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1267, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 打印PToolStripButton
			// 
			this->打印PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->打印PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripButton->Name = L"打印PToolStripButton";
			this->打印PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->打印PToolStripButton->Text = L"打印(&P)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage17);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 50);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1267, 642);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1259, 616);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"检验报告管理";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &JianYanKe::tabPage1_Validating);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl4);
			this->splitContainer1->Size = System::Drawing::Size(1253, 610);
			this->splitContainer1->SplitterDistance = 567;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->tabControl2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->tabControl3);
			this->splitContainer2->Size = System::Drawing::Size(567, 610);
			this->splitContainer2->SplitterDistance = 278;
			this->splitContainer2->TabIndex = 0;
			// 
			// tabControl2
			// 
			this->tabControl2->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(278, 610);
			this->tabControl2->TabIndex = 3;
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->Controls->Add(this->splitContainer5);
			this->tabPage3->Location = System::Drawing::Point(22, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(252, 602);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"全部";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(3, 3);
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
			this->splitContainer5->Size = System::Drawing::Size(246, 596);
			this->splitContainer5->SplitterDistance = 86;
			this->splitContainer5->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox47);
			this->groupBox2->Controls->Add(this->textBox46);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(246, 86);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button12->Location = System::Drawing::Point(185, 32);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 23);
			this->button12->TabIndex = 2;
			this->button12->Text = L"查询";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &JianYanKe::button12_Click);
			// 
			// textBox47
			// 
			this->textBox47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox47->Location = System::Drawing::Point(65, 47);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(100, 21);
			this->textBox47->TabIndex = 1;
			// 
			// textBox46
			// 
			this->textBox46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox46->Location = System::Drawing::Point(65, 15);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(100, 21);
			this->textBox46->TabIndex = 1;
			// 
			// label59
			// 
			this->label59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(6, 50);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(53, 12);
			this->label59->TabIndex = 0;
			this->label59->Text = L"病人姓名";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"样本编号";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(246, 506);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &JianYanKe::listView1_ItemSelectionChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"样本编号";
			this->columnHeader1->Width = 90;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"病人姓名";
			this->columnHeader2->Width = 69;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"检测项目";
			this->columnHeader3->Width = 80;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->splitContainer13);
			this->tabPage4->Location = System::Drawing::Point(22, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(252, 602);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"未审核";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// splitContainer13
			// 
			this->splitContainer13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer13->Location = System::Drawing::Point(3, 3);
			this->splitContainer13->Name = L"splitContainer13";
			this->splitContainer13->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer13.Panel1
			// 
			this->splitContainer13->Panel1->Controls->Add(this->groupBox6);
			// 
			// splitContainer13.Panel2
			// 
			this->splitContainer13->Panel2->Controls->Add(this->listView6);
			this->splitContainer13->Size = System::Drawing::Size(246, 596);
			this->splitContainer13->SplitterDistance = 86;
			this->splitContainer13->TabIndex = 1;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button13);
			this->groupBox6->Controls->Add(this->textBox48);
			this->groupBox6->Controls->Add(this->textBox49);
			this->groupBox6->Controls->Add(this->label54);
			this->groupBox6->Controls->Add(this->label60);
			this->groupBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox6->Location = System::Drawing::Point(0, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(246, 86);
			this->groupBox6->TabIndex = 4;
			this->groupBox6->TabStop = false;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button13->Location = System::Drawing::Point(185, 34);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 23);
			this->button13->TabIndex = 7;
			this->button13->Text = L"查询";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &JianYanKe::button13_Click);
			// 
			// textBox48
			// 
			this->textBox48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox48->Location = System::Drawing::Point(65, 49);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(100, 21);
			this->textBox48->TabIndex = 5;
			// 
			// textBox49
			// 
			this->textBox49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox49->Location = System::Drawing::Point(65, 17);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(100, 21);
			this->textBox49->TabIndex = 6;
			// 
			// label54
			// 
			this->label54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(6, 52);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(53, 12);
			this->label54->TabIndex = 3;
			this->label54->Text = L"病人姓名";
			// 
			// label60
			// 
			this->label60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(6, 20);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(53, 12);
			this->label60->TabIndex = 4;
			this->label60->Text = L"样本编号";
			// 
			// listView6
			// 
			this->listView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader7, this->columnHeader8,
					this->columnHeader9
			});
			this->listView6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView6->FullRowSelect = true;
			this->listView6->GridLines = true;
			this->listView6->HideSelection = false;
			this->listView6->Location = System::Drawing::Point(0, 0);
			this->listView6->Name = L"listView6";
			this->listView6->Size = System::Drawing::Size(246, 506);
			this->listView6->TabIndex = 5;
			this->listView6->UseCompatibleStateImageBehavior = false;
			this->listView6->View = System::Windows::Forms::View::Details;
			this->listView6->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &JianYanKe::listView1_ItemSelectionChanged);
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"样本编号";
			this->columnHeader7->Width = 90;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"病人姓名";
			this->columnHeader8->Width = 69;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"检测项目";
			this->columnHeader9->Width = 80;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->splitContainer9);
			this->tabPage8->Location = System::Drawing::Point(22, 4);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(252, 602);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"检测中";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// splitContainer9
			// 
			this->splitContainer9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer9->Location = System::Drawing::Point(0, 0);
			this->splitContainer9->Name = L"splitContainer9";
			this->splitContainer9->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer9.Panel1
			// 
			this->splitContainer9->Panel1->Controls->Add(this->groupBox3);
			// 
			// splitContainer9.Panel2
			// 
			this->splitContainer9->Panel2->Controls->Add(this->listView3);
			this->splitContainer9->Size = System::Drawing::Size(252, 602);
			this->splitContainer9->SplitterDistance = 86;
			this->splitContainer9->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->textBox50);
			this->groupBox3->Controls->Add(this->textBox51);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->label61);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(252, 86);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button14->Location = System::Drawing::Point(188, 34);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 23);
			this->button14->TabIndex = 7;
			this->button14->Text = L"查询";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &JianYanKe::button14_Click);
			// 
			// textBox50
			// 
			this->textBox50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox50->Location = System::Drawing::Point(68, 49);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(100, 21);
			this->textBox50->TabIndex = 5;
			// 
			// textBox51
			// 
			this->textBox51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox51->Location = System::Drawing::Point(68, 17);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(100, 21);
			this->textBox51->TabIndex = 6;
			// 
			// label38
			// 
			this->label38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(9, 52);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(53, 12);
			this->label38->TabIndex = 3;
			this->label38->Text = L"病人姓名";
			// 
			// label61
			// 
			this->label61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(9, 20);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(53, 12);
			this->label61->TabIndex = 4;
			this->label61->Text = L"样本编号";
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader4, this->columnHeader5,
					this->columnHeader6
			});
			this->listView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(0, 0);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(252, 512);
			this->listView3->TabIndex = 5;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &JianYanKe::listView1_ItemSelectionChanged);
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"样本编号";
			this->columnHeader4->Width = 90;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"病人姓名";
			this->columnHeader5->Width = 69;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"检测项目";
			this->columnHeader6->Width = 80;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->splitContainer15);
			this->tabPage9->Location = System::Drawing::Point(22, 4);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(252, 602);
			this->tabPage9->TabIndex = 3;
			this->tabPage9->Text = L"未检测";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// splitContainer15
			// 
			this->splitContainer15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer15->Location = System::Drawing::Point(0, 0);
			this->splitContainer15->Name = L"splitContainer15";
			this->splitContainer15->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer15.Panel1
			// 
			this->splitContainer15->Panel1->Controls->Add(this->groupBox8);
			// 
			// splitContainer15.Panel2
			// 
			this->splitContainer15->Panel2->Controls->Add(this->listView8);
			this->splitContainer15->Size = System::Drawing::Size(252, 602);
			this->splitContainer15->SplitterDistance = 86;
			this->splitContainer15->TabIndex = 1;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->textBox52);
			this->groupBox8->Controls->Add(this->textBox53);
			this->groupBox8->Controls->Add(this->label56);
			this->groupBox8->Controls->Add(this->label62);
			this->groupBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox8->Location = System::Drawing::Point(0, 0);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(252, 86);
			this->groupBox8->TabIndex = 4;
			this->groupBox8->TabStop = false;
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button15->Location = System::Drawing::Point(188, 34);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 23);
			this->button15->TabIndex = 7;
			this->button15->Text = L"查询";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &JianYanKe::button15_Click);
			// 
			// textBox52
			// 
			this->textBox52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox52->Location = System::Drawing::Point(68, 49);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(100, 21);
			this->textBox52->TabIndex = 5;
			// 
			// textBox53
			// 
			this->textBox53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox53->Location = System::Drawing::Point(68, 17);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(100, 21);
			this->textBox53->TabIndex = 6;
			// 
			// label56
			// 
			this->label56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(9, 52);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(53, 12);
			this->label56->TabIndex = 3;
			this->label56->Text = L"病人姓名";
			// 
			// label62
			// 
			this->label62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(9, 20);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(53, 12);
			this->label62->TabIndex = 4;
			this->label62->Text = L"样本编号";
			// 
			// listView8
			// 
			this->listView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader13, this->columnHeader14,
					this->columnHeader15
			});
			this->listView8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView8->FullRowSelect = true;
			this->listView8->GridLines = true;
			this->listView8->HideSelection = false;
			this->listView8->Location = System::Drawing::Point(0, 0);
			this->listView8->Name = L"listView8";
			this->listView8->Size = System::Drawing::Size(252, 512);
			this->listView8->TabIndex = 5;
			this->listView8->UseCompatibleStateImageBehavior = false;
			this->listView8->View = System::Windows::Forms::View::Details;
			this->listView8->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &JianYanKe::listView1_ItemSelectionChanged);
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"样本编号";
			this->columnHeader13->Width = 90;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"病人姓名";
			this->columnHeader14->Width = 69;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"检测项目";
			this->columnHeader15->Width = 80;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage5);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl3->Location = System::Drawing::Point(0, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(285, 610);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->AutoScroll = true;
			this->tabPage5->Controls->Add(this->groupBox1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(277, 584);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"报告信息";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox45);
			this->groupBox1->Controls->Add(this->textBox44);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(271, 578);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->numericUpDown1->Location = System::Drawing::Point(97, 243);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(64, 26);
			this->numericUpDown1->TabIndex = 34;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox12->Location = System::Drawing::Point(97, 546);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(168, 26);
			this->textBox12->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(97, 508);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(168, 26);
			this->textBox11->TabIndex = 29;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(97, 470);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(168, 26);
			this->textBox10->TabIndex = 28;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(97, 432);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(168, 26);
			this->textBox9->TabIndex = 27;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(97, 394);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(168, 26);
			this->textBox8->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(97, 356);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(168, 26);
			this->textBox7->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(97, 318);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(168, 26);
			this->textBox6->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(97, 280);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(168, 26);
			this->textBox5->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(97, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(168, 26);
			this->textBox4->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(97, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(168, 26);
			this->textBox3->TabIndex = 21;
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox45->Location = System::Drawing::Point(97, 204);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(168, 26);
			this->textBox45->TabIndex = 31;
			// 
			// textBox44
			// 
			this->textBox44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox44->Location = System::Drawing::Point(97, 90);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(168, 26);
			this->textBox44->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(97, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(168, 26);
			this->textBox2->TabIndex = 31;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(97, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(168, 26);
			this->textBox1->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(6, 93);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"检测项目";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(6, 549);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"审核时间";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(6, 511);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 16);
			this->label15->TabIndex = 16;
			this->label15->Text = L"审核者";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(6, 473);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 16);
			this->label14->TabIndex = 15;
			this->label14->Text = L"完成时间";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(6, 435);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 16);
			this->label13->TabIndex = 14;
			this->label13->Text = L"检测时间";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(6, 397);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"取样时间";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(6, 359);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 16);
			this->label10->TabIndex = 12;
			this->label10->Text = L"开单时间";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(6, 321);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 16);
			this->label9->TabIndex = 11;
			this->label9->Text = L"录入者";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(6, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 16);
			this->label8->TabIndex = 10;
			this->label8->Text = L"开单医生";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(6, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"年龄";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(6, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"性别";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(6, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"病人姓名";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(6, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"病人编号";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(6, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"送检单号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"样本编号";
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage7);
			this->tabControl4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl4->Location = System::Drawing::Point(0, 0);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(682, 610);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->splitContainer6);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(674, 584);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"结果浏览";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->Location = System::Drawing::Point(3, 3);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->richTextBox1);
			this->splitContainer6->Panel1->Controls->Add(this->listView2);
			this->splitContainer6->Panel1->Controls->Add(this->label58);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->groupBox10);
			this->splitContainer6->Size = System::Drawing::Size(668, 578);
			this->splitContainer6->SplitterDistance = 505;
			this->splitContainer6->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(140, 226);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(496, 231);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader24, this->columnHeader25,
					this->columnHeader26, this->columnHeader27, this->columnHeader28, this->columnHeader29, this->columnHeader30
			});
			this->listView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(0, 0);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(668, 161);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader24
			// 
			this->columnHeader24->Text = L"样本编号";
			this->columnHeader24->Width = 112;
			// 
			// columnHeader25
			// 
			this->columnHeader25->Text = L"病人姓名";
			this->columnHeader25->Width = 78;
			// 
			// columnHeader26
			// 
			this->columnHeader26->Text = L"检测项目";
			this->columnHeader26->Width = 90;
			// 
			// columnHeader27
			// 
			this->columnHeader27->Text = L"取样类别";
			this->columnHeader27->Width = 91;
			// 
			// columnHeader28
			// 
			this->columnHeader28->Text = L"检测仪器";
			this->columnHeader28->Width = 83;
			// 
			// columnHeader29
			// 
			this->columnHeader29->Text = L"检测医生";
			this->columnHeader29->Width = 90;
			// 
			// columnHeader30
			// 
			this->columnHeader30->Text = L"检测结果";
			this->columnHeader30->Width = 66;
			// 
			// label58
			// 
			this->label58->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->Location = System::Drawing::Point(31, 229);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(88, 16);
			this->label58->TabIndex = 8;
			this->label58->Text = L"输入结果：";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label63);
			this->groupBox10->Controls->Add(this->button6);
			this->groupBox10->Controls->Add(this->button2);
			this->groupBox10->Controls->Add(this->button1);
			this->groupBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox10->Location = System::Drawing::Point(0, 0);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(668, 69);
			this->groupBox10->TabIndex = 0;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"操作";
			// 
			// label63
			// 
			this->label63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label63->AutoSize = true;
			this->label63->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Blue;
			this->label63->Location = System::Drawing::Point(509, 37);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(77, 12);
			this->label63->TabIndex = 5;
			this->label63->Text = L"不合格？回退";
			this->label63->Click += gcnew System::EventHandler(this, &JianYanKe::label63_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->AutoSize = true;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(408, 25);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 31);
			this->button6->TabIndex = 4;
			this->button6->Text = L"审核通过";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &JianYanKe::button6_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->AutoSize = true;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(234, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"完成";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &JianYanKe::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->AutoSize = true;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(34, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"开始检测";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &JianYanKe::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1259, 616);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"样本录入";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &JianYanKe::tabPage2_Validating);
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->splitContainer4);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->tabControl7);
			this->splitContainer3->Size = System::Drawing::Size(1253, 610);
			this->splitContainer3->SplitterDistance = 439;
			this->splitContainer3->TabIndex = 1;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->tabControl6);
			this->splitContainer4->Size = System::Drawing::Size(439, 610);
			this->splitContainer4->SplitterDistance = 148;
			this->splitContainer4->TabIndex = 0;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"节点0";
			treeNode1->Text = L"待录入样本";
			treeNode2->Name = L"节点1";
			treeNode2->Text = L"已录入样本";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode1, treeNode2 });
			this->treeView1->Size = System::Drawing::Size(148, 610);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &JianYanKe::treeView1_AfterSelect);
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage14);
			this->tabControl6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl6->Location = System::Drawing::Point(0, 0);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(287, 610);
			this->tabControl6->TabIndex = 0;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->groupBox4);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(279, 584);
			this->tabPage14->TabIndex = 0;
			this->tabPage14->Text = L"报告信息";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown2);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->textBox19);
			this->groupBox4->Controls->Add(this->textBox20);
			this->groupBox4->Controls->Add(this->textBox43);
			this->groupBox4->Controls->Add(this->textBox21);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->textBox42);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->textBox24);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(3, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(273, 578);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->numericUpDown2->Location = System::Drawing::Point(97, 243);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(64, 26);
			this->numericUpDown2->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox13->Location = System::Drawing::Point(97, 546);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(164, 26);
			this->textBox13->TabIndex = 30;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox14->Location = System::Drawing::Point(97, 508);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(164, 26);
			this->textBox14->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox15->Location = System::Drawing::Point(97, 470);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(164, 26);
			this->textBox15->TabIndex = 28;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox16->Location = System::Drawing::Point(97, 432);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(164, 26);
			this->textBox16->TabIndex = 27;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox17->Location = System::Drawing::Point(97, 394);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(164, 26);
			this->textBox17->TabIndex = 26;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox18->Location = System::Drawing::Point(97, 356);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(164, 26);
			this->textBox18->TabIndex = 25;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox19->Location = System::Drawing::Point(97, 318);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(164, 26);
			this->textBox19->TabIndex = 24;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox20->Location = System::Drawing::Point(97, 280);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(164, 26);
			this->textBox20->TabIndex = 23;
			// 
			// textBox43
			// 
			this->textBox43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox43->Location = System::Drawing::Point(97, 204);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(164, 26);
			this->textBox43->TabIndex = 22;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox21->Location = System::Drawing::Point(97, 166);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(164, 26);
			this->textBox21->TabIndex = 22;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox22->Location = System::Drawing::Point(97, 128);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(164, 26);
			this->textBox22->TabIndex = 21;
			// 
			// textBox42
			// 
			this->textBox42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox42->Location = System::Drawing::Point(97, 90);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(164, 26);
			this->textBox42->TabIndex = 31;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox23->Location = System::Drawing::Point(97, 52);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(164, 26);
			this->textBox23->TabIndex = 31;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox24->Location = System::Drawing::Point(97, 14);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(164, 26);
			this->textBox24->TabIndex = 20;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(6, 93);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(72, 16);
			this->label18->TabIndex = 18;
			this->label18->Text = L"检测项目";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(6, 549);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(72, 16);
			this->label19->TabIndex = 17;
			this->label19->Text = L"审核时间";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(6, 511);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 16);
			this->label20->TabIndex = 16;
			this->label20->Text = L"审核者";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(6, 473);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(72, 16);
			this->label21->TabIndex = 15;
			this->label21->Text = L"完成时间";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(6, 435);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(72, 16);
			this->label22->TabIndex = 14;
			this->label22->Text = L"检测时间";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(6, 397);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 16);
			this->label23->TabIndex = 13;
			this->label23->Text = L"取样时间";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(6, 359);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(72, 16);
			this->label24->TabIndex = 12;
			this->label24->Text = L"开单时间";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(6, 321);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 16);
			this->label25->TabIndex = 11;
			this->label25->Text = L"录入者";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(6, 283);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(72, 16);
			this->label26->TabIndex = 10;
			this->label26->Text = L"开单医生";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(6, 245);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 16);
			this->label27->TabIndex = 9;
			this->label27->Text = L"年龄";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(6, 207);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(40, 16);
			this->label28->TabIndex = 8;
			this->label28->Text = L"性别";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(6, 169);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(72, 16);
			this->label29->TabIndex = 7;
			this->label29->Text = L"病人姓名";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(6, 131);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 16);
			this->label30->TabIndex = 6;
			this->label30->Text = L"病人编号";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(6, 55);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(72, 16);
			this->label31->TabIndex = 19;
			this->label31->Text = L"送检单号";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->Location = System::Drawing::Point(6, 17);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(72, 16);
			this->label32->TabIndex = 5;
			this->label32->Text = L"样本编号";
			// 
			// tabControl7
			// 
			this->tabControl7->Controls->Add(this->tabPage15);
			this->tabControl7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl7->Location = System::Drawing::Point(0, 0);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(810, 610);
			this->tabControl7->TabIndex = 0;
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->button11);
			this->tabPage15->Controls->Add(this->comboBox4);
			this->tabPage15->Controls->Add(this->button4);
			this->tabPage15->Controls->Add(this->label17);
			this->tabPage15->Controls->Add(this->listView4);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(802, 584);
			this->tabPage15->TabIndex = 0;
			this->tabPage15->Text = L"结果浏览";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(549, 477);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 32);
			this->button11->TabIndex = 8;
			this->button11->Text = L"返回";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &JianYanKe::button11_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M1", L"M2" });
			this->comboBox4->Location = System::Drawing::Point(206, 477);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 27);
			this->comboBox4->TabIndex = 7;
			this->comboBox4->Text = L"M1";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button4->AutoSize = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(418, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"录入";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &JianYanKe::button4_Click);
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(115, 480);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 19);
			this->label17->TabIndex = 6;
			this->label17->Text = L"选择仪器";
			// 
			// listView4
			// 
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader16, this->columnHeader17,
					this->columnHeader18, this->columnHeader19, this->columnHeader20, this->columnHeader21, this->columnHeader22, this->columnHeader23
			});
			this->listView4->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView4->FullRowSelect = true;
			this->listView4->GridLines = true;
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(3, 3);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(796, 185);
			this->listView4->TabIndex = 4;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"样本编号";
			this->columnHeader16->Width = 72;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"检验项目";
			this->columnHeader17->Width = 112;
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"取样时间";
			this->columnHeader18->Width = 123;
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"检测仪器";
			this->columnHeader19->Width = 69;
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"检测开始时间";
			this->columnHeader20->Width = 117;
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"检测结果";
			this->columnHeader21->Width = 90;
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"检测结束时间";
			this->columnHeader22->Width = 119;
			// 
			// columnHeader23
			// 
			this->columnHeader23->Text = L"检验医生";
			this->columnHeader23->Width = 87;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl5);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1259, 616);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"检验报告查询";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage10);
			this->tabControl5->Controls->Add(this->tabPage11);
			this->tabControl5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl5->Location = System::Drawing::Point(0, 0);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(1259, 616);
			this->tabControl5->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->splitContainer7);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1251, 590);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"报告查询";
			this->tabPage10->UseVisualStyleBackColor = true;
			this->tabPage10->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &JianYanKe::tabPage10_Validating);
			// 
			// splitContainer7
			// 
			this->splitContainer7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer7->Location = System::Drawing::Point(3, 3);
			this->splitContainer7->Name = L"splitContainer7";
			this->splitContainer7->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer7.Panel1
			// 
			this->splitContainer7->Panel1->Controls->Add(this->button16);
			this->splitContainer7->Panel1->Controls->Add(this->button3);
			this->splitContainer7->Panel1->Controls->Add(this->label37);
			this->splitContainer7->Panel1->Controls->Add(this->label36);
			this->splitContainer7->Panel1->Controls->Add(this->label35);
			this->splitContainer7->Panel1->Controls->Add(this->label34);
			this->splitContainer7->Panel1->Controls->Add(this->label33);
			this->splitContainer7->Panel1->Controls->Add(this->textBox26);
			this->splitContainer7->Panel1->Controls->Add(this->dateTimePicker2);
			this->splitContainer7->Panel1->Controls->Add(this->dateTimePicker1);
			this->splitContainer7->Panel1->Controls->Add(this->textBox25);
			this->splitContainer7->Panel1->Controls->Add(this->comboBox7);
			// 
			// splitContainer7.Panel2
			// 
			this->splitContainer7->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer7->Size = System::Drawing::Size(1245, 584);
			this->splitContainer7->SplitterDistance = 53;
			this->splitContainer7->TabIndex = 0;
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button16->AutoSize = true;
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->Location = System::Drawing::Point(1145, 13);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 26);
			this->button16->TabIndex = 5;
			this->button16->Text = L"重置";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &JianYanKe::button16_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(1049, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 26);
			this->button3->TabIndex = 5;
			this->button3->Text = L"查询";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &JianYanKe::button3_Click);
			// 
			// label37
			// 
			this->label37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->Location = System::Drawing::Point(814, 18);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(72, 16);
			this->label37->TabIndex = 4;
			this->label37->Text = L"检验项目";
			// 
			// label36
			// 
			this->label36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->Location = System::Drawing::Point(582, 18);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(24, 16);
			this->label36->TabIndex = 4;
			this->label36->Text = L"到";
			// 
			// label35
			// 
			this->label35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->Location = System::Drawing::Point(373, 18);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(40, 16);
			this->label35->TabIndex = 4;
			this->label35->Text = L"日期";
			// 
			// label34
			// 
			this->label34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->Location = System::Drawing::Point(204, 18);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(40, 16);
			this->label34->TabIndex = 4;
			this->label34->Text = L"姓名";
			// 
			// label33
			// 
			this->label33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->Location = System::Drawing::Point(11, 18);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(40, 16);
			this->label33->TabIndex = 4;
			this->label33->Text = L"编号";
			// 
			// textBox26
			// 
			this->textBox26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox26->Location = System::Drawing::Point(250, 15);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 26);
			this->textBox26->TabIndex = 3;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker2->Location = System::Drawing::Point(616, 15);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(155, 26);
			this->dateTimePicker2->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(419, 15);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(152, 26);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// textBox25
			// 
			this->textBox25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox25->Location = System::Drawing::Point(57, 15);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 26);
			this->textBox25->TabIndex = 1;
			// 
			// comboBox7
			// 
			this->comboBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(892, 15);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 24);
			this->comboBox7->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(1245, 527);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->splitContainer8);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1251, 590);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"报告打印";
			this->tabPage11->UseVisualStyleBackColor = true;
			this->tabPage11->Enter += gcnew System::EventHandler(this, &JianYanKe::tabPage11_Enter);
			this->tabPage11->Leave += gcnew System::EventHandler(this, &JianYanKe::tabPage11_Leave);
			this->tabPage11->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &JianYanKe::tabPage11_Validating);
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
			this->splitContainer8->Size = System::Drawing::Size(1245, 584);
			this->splitContainer8->SplitterDistance = 870;
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
			this->splitContainer10->Size = System::Drawing::Size(870, 584);
			this->splitContainer10->SplitterDistance = 266;
			this->splitContainer10->TabIndex = 0;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->splitContainer11);
			this->groupBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox7->Location = System::Drawing::Point(0, 0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(266, 584);
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
			this->splitContainer11->Size = System::Drawing::Size(260, 564);
			this->splitContainer11->SplitterDistance = 85;
			this->splitContainer11->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button8->Location = System::Drawing::Point(164, 44);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 25);
			this->button8->TabIndex = 2;
			this->button8->Text = L"查询";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &JianYanKe::button8_Click);
			// 
			// textBox35
			// 
			this->textBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox35->Location = System::Drawing::Point(54, 46);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 21);
			this->textBox35->TabIndex = 1;
			// 
			// textBox34
			// 
			this->textBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox34->Location = System::Drawing::Point(54, 8);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 21);
			this->textBox34->TabIndex = 1;
			// 
			// label47
			// 
			this->label47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(19, 49);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(29, 12);
			this->label47->TabIndex = 0;
			this->label47->Text = L"姓名";
			// 
			// label45
			// 
			this->label45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(19, 11);
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
			this->listView5->Size = System::Drawing::Size(260, 475);
			this->listView5->TabIndex = 6;
			this->listView5->UseCompatibleStateImageBehavior = false;
			this->listView5->View = System::Windows::Forms::View::Details;
			this->listView5->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &JianYanKe::listView5_ItemSelectionChanged);
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
			this->printPreviewControl1->Document = this->printDocument1;
			this->printPreviewControl1->Location = System::Drawing::Point(0, 0);
			this->printPreviewControl1->Name = L"printPreviewControl1";
			this->printPreviewControl1->Size = System::Drawing::Size(600, 584);
			this->printPreviewControl1->TabIndex = 0;
			this->printPreviewControl1->Zoom = 0.50299401197604787;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &JianYanKe::printDocument1_PrintPage);
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
			this->groupBox5->Size = System::Drawing::Size(371, 584);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox2->Location = System::Drawing::Point(132, 331);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(201, 69);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->Text = L"";
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button5->AutoSize = true;
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(161, 526);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 26);
			this->button5->TabIndex = 0;
			this->button5->Text = L"打印";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &JianYanKe::button5_Click);
			// 
			// textBox29
			// 
			this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox29->Location = System::Drawing::Point(132, 103);
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
			this->textBox33->Location = System::Drawing::Point(132, 464);
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
			this->textBox31->Location = System::Drawing::Point(132, 274);
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
			this->textBox30->Location = System::Drawing::Point(132, 217);
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
			this->textBox28->Location = System::Drawing::Point(132, 160);
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
			this->textBox27->Location = System::Drawing::Point(132, 46);
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
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->tabControl8);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(1259, 616);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"统计分析";
			this->tabPage12->UseVisualStyleBackColor = true;
			this->tabPage12->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &JianYanKe::tabPage12_Validating);
			// 
			// tabControl8
			// 
			this->tabControl8->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl8->Controls->Add(this->tabPage16);
			this->tabControl8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl8->Location = System::Drawing::Point(0, 0);
			this->tabControl8->Multiline = true;
			this->tabControl8->Name = L"tabControl8";
			this->tabControl8->SelectedIndex = 0;
			this->tabControl8->Size = System::Drawing::Size(1259, 616);
			this->tabControl8->TabIndex = 0;
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->button7);
			this->tabPage16->Controls->Add(this->chart1);
			this->tabPage16->Location = System::Drawing::Point(22, 4);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1233, 608);
			this->tabPage16->TabIndex = 0;
			this->tabPage16->Text = L"项目统计";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button7->AutoSize = true;
			this->button7->Location = System::Drawing::Point(1117, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"保存为图片";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &JianYanKe::button7_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->LegendText = L"样本数";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1227, 602);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage17
			// 
			this->tabPage17->Controls->Add(this->textBox41);
			this->tabPage17->Controls->Add(this->label57);
			this->tabPage17->Controls->Add(this->comboBox9);
			this->tabPage17->Controls->Add(this->checkBox1);
			this->tabPage17->Controls->Add(this->button9);
			this->tabPage17->Controls->Add(this->button10);
			this->tabPage17->Controls->Add(this->groupBox9);
			this->tabPage17->Controls->Add(this->dateTimePicker3);
			this->tabPage17->Controls->Add(this->textBox36);
			this->tabPage17->Controls->Add(this->textBox37);
			this->tabPage17->Controls->Add(this->textBox38);
			this->tabPage17->Controls->Add(this->textBox39);
			this->tabPage17->Controls->Add(this->textBox40);
			this->tabPage17->Controls->Add(this->label48);
			this->tabPage17->Controls->Add(this->label49);
			this->tabPage17->Controls->Add(this->label50);
			this->tabPage17->Controls->Add(this->label51);
			this->tabPage17->Controls->Add(this->label52);
			this->tabPage17->Controls->Add(this->label53);
			this->tabPage17->Controls->Add(this->label55);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Padding = System::Windows::Forms::Padding(3);
			this->tabPage17->Size = System::Drawing::Size(1259, 616);
			this->tabPage17->TabIndex = 5;
			this->tabPage17->Text = L"个人信息";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// textBox41
			// 
			this->textBox41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox41->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox41->Location = System::Drawing::Point(232, 548);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(181, 29);
			this->textBox41->TabIndex = 28;
			// 
			// label57
			// 
			this->label57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->Location = System::Drawing::Point(117, 551);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(85, 19);
			this->label57->TabIndex = 27;
			this->label57->Text = L"所属科室";
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->comboBox9->Location = System::Drawing::Point(232, 271);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(121, 27);
			this->comboBox9->TabIndex = 26;
			this->comboBox9->Text = L"男";
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
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &JianYanKe::checkBox1_CheckedChanged);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->AutoSize = true;
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(921, 541);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 29);
			this->button9->TabIndex = 7;
			this->button9->Text = L"返回";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &JianYanKe::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button10->AutoSize = true;
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->Location = System::Drawing::Point(769, 541);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 29);
			this->button10->TabIndex = 6;
			this->button10->Text = L"更新";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &JianYanKe::button10_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->groupBox9->Location = System::Drawing::Point(769, 29);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(227, 276);
			this->groupBox9->TabIndex = 5;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"照片";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker3->Location = System::Drawing::Point(232, 415);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker3->TabIndex = 4;
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &JianYanKe::dateTimePicker3_ValueChanged);
			// 
			// textBox36
			// 
			this->textBox36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox36->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox36->Location = System::Drawing::Point(232, 488);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(181, 29);
			this->textBox36->TabIndex = 2;
			// 
			// textBox37
			// 
			this->textBox37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox37->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox37->Location = System::Drawing::Point(232, 345);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(81, 29);
			this->textBox37->TabIndex = 2;
			// 
			// textBox38
			// 
			this->textBox38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox38->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox38->Location = System::Drawing::Point(232, 197);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(181, 29);
			this->textBox38->TabIndex = 2;
			// 
			// textBox39
			// 
			this->textBox39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox39->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox39->Location = System::Drawing::Point(232, 123);
			this->textBox39->Name = L"textBox39";
			this->textBox39->PasswordChar = '*';
			this->textBox39->Size = System::Drawing::Size(181, 29);
			this->textBox39->TabIndex = 2;
			// 
			// textBox40
			// 
			this->textBox40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox40->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox40->Location = System::Drawing::Point(232, 49);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(181, 29);
			this->textBox40->TabIndex = 2;
			// 
			// label48
			// 
			this->label48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->Location = System::Drawing::Point(127, 126);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(57, 19);
			this->label48->TabIndex = 1;
			this->label48->Text = L"密 码";
			// 
			// label49
			// 
			this->label49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->Location = System::Drawing::Point(113, 496);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(85, 19);
			this->label49->TabIndex = 0;
			this->label49->Text = L"身份证号";
			// 
			// label50
			// 
			this->label50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->Location = System::Drawing::Point(113, 422);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(85, 19);
			this->label50->TabIndex = 0;
			this->label50->Text = L"出生日期";
			// 
			// label51
			// 
			this->label51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->Location = System::Drawing::Point(127, 348);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(57, 19);
			this->label51->TabIndex = 0;
			this->label51->Text = L"年 龄";
			// 
			// label52
			// 
			this->label52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(127, 274);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(57, 19);
			this->label52->TabIndex = 0;
			this->label52->Text = L"性 别";
			// 
			// label53
			// 
			this->label53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->Location = System::Drawing::Point(127, 200);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(57, 19);
			this->label53->TabIndex = 0;
			this->label53->Text = L"姓 名";
			// 
			// label55
			// 
			this->label55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->Location = System::Drawing::Point(117, 52);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(77, 19);
			this->label55->TabIndex = 0;
			this->label55->Text = L"账号 ID";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &JianYanKe::timer1_Tick);
			// 
			// JianYanKe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1267, 714);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"JianYanKe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"检验科——XXX 登陆时间：xxxx";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &JianYanKe::JianYanKe_FormClosed);
			this->Load += gcnew System::EventHandler(this, &JianYanKe::JianYanKe_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->splitContainer13->Panel1->ResumeLayout(false);
			this->splitContainer13->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer13))->EndInit();
			this->splitContainer13->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->splitContainer9->Panel1->ResumeLayout(false);
			this->splitContainer9->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer9))->EndInit();
			this->splitContainer9->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->splitContainer15->Panel1->ResumeLayout(false);
			this->splitContainer15->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer15))->EndInit();
			this->splitContainer15->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabControl4->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel1->PerformLayout();
			this->splitContainer6->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer6))->EndInit();
			this->splitContainer6->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage14->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabControl7->ResumeLayout(false);
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->splitContainer7->Panel1->ResumeLayout(false);
			this->splitContainer7->Panel1->PerformLayout();
			this->splitContainer7->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer7))->EndInit();
			this->splitContainer7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
			this->tabPage12->ResumeLayout(false);
			this->tabControl8->ResumeLayout(false);
			this->tabPage16->ResumeLayout(false);
			this->tabPage16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage17->ResumeLayout(false);
			this->tabPage17->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ strConn;
			DataTable^ table;
	private: DateTime^ SigninTime;
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->richTextBox1->Text->Trim() == "") {
			MessageBox::Show("请输入检测结果!", "提示");
			return;
		}
		//完成
		DateTime^ curtime = DateTime::Now;
		String^ strcom = String::Format("UPDATE result SET 检测结束时间 = '{0}', 检测结果 = '{2}' WHERE 样本编号 = '{1}'", curtime->ToString(), this->listView2->Items[0]->Text->Trim(), this->richTextBox1->Text->Trim());

		try {
			OleDbConnection^ conn = gcnew OleDbConnection(strConn);
			// 创建可执行命令
			OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
			// 执行操作
			conn->Open();
			cmd->ExecuteNonQuery();
			conn->Close();
			Loadlistview();
			stau();
			this->listView2->Items[0]->SubItems[6]->Text = this->richTextBox1->Text->Trim();
			this->richTextBox1->Text->Trim();
			this->textBox10->Text = curtime->ToString();
			if (this->button2->Text == "完成")
				MessageBox::Show("检测结束！", "提示");
			else if (this->button2->Text == "修改结果")
				MessageBox::Show("修改成功！", "提示");
			this->richTextBox1->Enabled = true;
			this->button2->Enabled = true;
			this->button6->Enabled = true;
		}
		catch (OleDbException^ e) {
			MessageBox::Show(e->Message, "错误");
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime^ curtime = DateTime::Now;
		String^ strcom = String::Format("UPDATE result SET 检测开始时间 = '{0}' WHERE 样本编号 = '{1}'", curtime->ToString(), this->listView2->Items[0]->Text->Trim());
		try {
			OleDbConnection^ conn = gcnew OleDbConnection(strConn);
			// 创建可执行命令
			OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
			// 执行操作
			conn->Open();
			cmd->ExecuteNonQuery();
			conn->Close();
			Loadlistview();
			stau();
			this->textBox9->Text = curtime->ToString();
			MessageBox::Show("检测开始！", "提示");
			this->button1->Enabled = false;
			this->richTextBox1->Enabled = true;
			this->button2->Enabled = true;
			this->button6->Enabled = false;
		}
		catch (OleDbException^ e) {
			MessageBox::Show(e->Message, "错误");
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//审核
		DateTime^ curtime = DateTime::Now;
		String^ strcom = String::Format("UPDATE result SET 审核时间 = '{0}', 审核者 = '{2}' WHERE 样本编号 = '{1}'", curtime->ToString(), this->listView2->Items[0]->Text->Trim(), table->Rows[0]->ItemArray[0]->ToString());
		try {
			OleDbConnection^ conn = gcnew OleDbConnection(strConn);
			// 创建可执行命令
			OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
			// 执行操作
			conn->Open();
			cmd->ExecuteNonQuery();
			conn->Close();
			Loadlistview();
			stau();
			this->textBox11->Text = table->Rows[0]->ItemArray[2]->ToString();
			this->textBox12->Text = curtime->ToString();
			MessageBox::Show("审核通过！", "提示");
			this->button1->Enabled = false;
			this->richTextBox1->Enabled = false;
			this->button2->Enabled = false;
			this->button6->Enabled = false;
			this->label63->Enabled = false;
		}
		catch (OleDbException^ e) {
			MessageBox::Show(e->Message, "错误");
		}
	}
	private: System::Void JianYanKe_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		//this->serialPort1->Close();
	}
	private: System::Void JianYanKe_Load(System::Object^  sender, System::EventArgs^  e) {
		this->tabControl1->TabPages->Clear();
		this->timer1->Enabled = true;
		SigninTime = DateTime::Now;
		PersonalData(table);
		LoadTree();
		Loadlistview();
		Loadlv5();
		Loaddatagrid();
		LoadChart();
		stau();
		this->打印PToolStripMenuItem->Enabled = false;
		this->打印预览VToolStripMenuItem->Enabled = false;
		this->打印PToolStripButton->Enabled = false;
	}
	private: void LoadTree() {
		this->treeView1->Nodes->Clear();
		TreeNode^  treeNode1 = gcnew TreeNode(L"待录入样本");
		TreeNode^  treeNode2 = gcnew TreeNode(L"已录入样本");
		treeNode1->Name = L"节点0";
		treeNode1->Text = L"待录入样本";
		treeNode2->Name = L"节点1";
		treeNode2->Text = L"已录入样本";
		this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode1, treeNode2 });
		String^ strcom = String::Format("SELECT * FROM result WHERE 备注 IS NULL");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			for (int i = 0; i < table1->Rows->Count; i++) {
				if (table1->Rows[i]->ItemArray[5]->ToString() == "否") {//未录入
					TreeNode^ projname = gcnew TreeNode(table1->Rows[i]->ItemArray[3]->ToString()); //检验项目名
					strcom = String::Format("SELECT * FROM project WHERE 检验项目='{0}'", table1->Rows[i]->ItemArray[3]->ToString());
					adapter->SelectCommand->CommandText = strcom;
					DataTable^ table2 = gcnew DataTable();
					adapter->Fill(table2);
					TreeNode^ type = gcnew TreeNode(table2->Rows[0]->ItemArray[1]->ToString()); //取样类别
					TreeNode^ NO = gcnew TreeNode(table1->Rows[i]->ItemArray[0]->ToString()); //样本编号
					NO->Name = table1->Rows[i]->ItemArray[0]->ToString();
					NO->Nodes->Add(projname);
					NO->Nodes->Add(type);
					treeView1->Nodes["节点0"]->Nodes->Add(NO);
				}
				else //已录入
				{
					TreeNode^ projname = gcnew TreeNode(table1->Rows[i]->ItemArray[3]->ToString()); //检验项目名
					strcom = String::Format("SELECT * FROM project WHERE 检验项目='{0}'", table1->Rows[i]->ItemArray[3]->ToString());
					adapter->SelectCommand->CommandText = strcom;
					DataTable^ table2 = gcnew DataTable();
					adapter->Fill(table2);
					TreeNode^ type = gcnew TreeNode(table2->Rows[0]->ItemArray[1]->ToString()); //取样类别
					TreeNode^ NO = gcnew TreeNode(table1->Rows[i]->ItemArray[0]->ToString()); //样本编号
					NO->Name = table1->Rows[i]->ItemArray[0]->ToString();
					NO->Nodes->Add(projname);
					NO->Nodes->Add(type);
					treeView1->Nodes["节点1"]->Nodes->Add(NO);
				}
			}
		}
	}
	private: void PersonalData(DataTable^ table) {
		this->Text = String::Format("检验科： {0}   登陆时间： {1} ", table->Rows[0]->ItemArray[2]->ToString(), SigninTime->ToString());
		this->textBox40->Text = table->Rows[0]->ItemArray[0]->ToString();
		this->textBox39->Text = table->Rows[0]->ItemArray[1]->ToString();
		this->textBox38->Text = table->Rows[0]->ItemArray[2]->ToString();
		this->comboBox9->SelectedIndex = table->Rows[0]->ItemArray[3]->ToString() == "男" ? 0 : 1;
		this->dateTimePicker3->Text = table->Rows[0]->ItemArray[5]->ToString();
		this->textBox37->Text = (int::Parse(DateTime::Now.ToString(L"yyyy")) - int::Parse(this->dateTimePicker3->Value.ToString("yyyy"))).ToString();
		this->textBox36->Text = table->Rows[0]->ItemArray[6]->ToString();
		this->textBox41->Text = table->Rows[0]->ItemArray[7]->ToString();
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		this->tabControl1->TabPages->Remove(tabPage17);
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox39->Text->Trim();
		String^ str2 = this->textBox38->Text->Trim();
		String^ str3 = this->comboBox9->Text->Trim();
		String^ str4 = this->textBox37->Text->Trim();
		String^ str5 = this->textBox36->Text->Trim();
		String^ str6 = this->dateTimePicker3->Value.ToString("yyyy/MM/dd");
		String^ str7 = this->textBox41->Text->Trim();
		String^ strcom = String::Format("UPDATE doctor SET 密码 = '{0}', 姓名 = '{1}', 性别 = '{2}', 年龄 = {3}, 出生日期 = '{4}', 身份证号 = '{5}' , 所属科室 = '{6}' WHERE 医生编号 = '{7}'",
			str1, str2, str3, int::Parse(str4), str6, str5, str7, table->Rows[0]->ItemArray[0]->ToString());
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
	private: System::Void dateTimePicker3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		this->textBox37->Text = (int::Parse(DateTime::Now.ToString(L"yyyy")) - int::Parse(this->dateTimePicker3->Value.ToString("yyyy"))).ToString();
	}
	private: System::Void 个人信息ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->Contains(tabPage17))
			this->tabControl1->SelectedTab = tabPage17;
		else {
			this->tabControl1->TabPages->Add(tabPage17);
			this->tabControl1->SelectedTab = tabPage17;
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox39->PasswordChar = checkBox1->Checked ? 0 : '*';
	}
	private: System::Void 样本录入ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->Contains(tabPage2))
			this->tabControl1->SelectedTab = tabPage2;
		else {
			this->tabControl1->TabPages->Add(tabPage2);
			this->tabControl1->SelectedTab = tabPage2;
		}
		LoadTree();
	}
	private: System::Void 检验报告管理ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->Contains(tabPage1))
			this->tabControl1->SelectedTab = tabPage1;
		else {
			this->tabControl1->TabPages->Add(tabPage1);
			this->tabControl1->SelectedTab = tabPage1;
		}
		tabPage1_Validating(nullptr, nullptr);
	}
	private: System::Void 检验报告查询ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->Contains(tabPage6))
			this->tabControl1->SelectedTab = tabPage6;
		else {
			this->tabControl1->TabPages->Add(tabPage6);
			this->tabControl1->SelectedTab = tabPage6;
		}
	}
	private: System::Void 综合统计报表ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->tabControl1->Contains(tabPage12))
			this->tabControl1->SelectedTab = tabPage12;
		else {
			this->tabControl1->TabPages->Add(tabPage12);
			this->tabControl1->SelectedTab = tabPage12;
		}
		tabPage12_Validating(nullptr, nullptr);
	}
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		//TEXT以及listview同步
		TreeNode^ selNode = GetSelRootNode();
		if (selNode == nullptr) return;
		if (selNode->Parent->Name == "节点1") this->button4->Enabled = false;
		else this->button4->Enabled = true;
		String^ strcom = String::Format("SELECT * FROM result WHERE 样本编号 = '{0}'", selNode->Text);
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			cleartextbox();
			this->listView4->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem(table1->Rows[0]->ItemArray[0]->ToString());
			this->textBox24->Text = table1->Rows[0]->ItemArray[0]->ToString(); //样本编号
			this->textBox23->Text = table1->Rows[0]->ItemArray[1]->ToString(); //送检单号
			this->textBox42->Text = table1->Rows[0]->ItemArray[3]->ToString(); //检测项目
			item->SubItems->Add(table1->Rows[0]->ItemArray[3]->ToString());
			this->textBox22->Text = table1->Rows[0]->ItemArray[2]->ToString(); //病人编号
			strcom = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'", table1->Rows[0]->ItemArray[2]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tablep = gcnew DataTable();
			if (adapter->Fill(tablep)) {
				this->textBox21->Text = tablep->Rows[0]->ItemArray[2]->ToString(); //病人姓名
				this->textBox43->Text = tablep->Rows[0]->ItemArray[3]->ToString(); //性别
				this->numericUpDown2->Value = int::Parse(tablep->Rows[0]->ItemArray[4]->ToString()); //年龄
			}
			strcom = String::Format("SELECT doctor.姓名,orders.开单时间 FROM doctor INNER JOIN orders ON doctor.医生编号 = orders.开单医生编号 WHERE orders.送检单号 = '{0}'", table1->Rows[0]->ItemArray[1]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled1 = gcnew DataTable();
			if (adapter->Fill(tabled1)) {
				this->textBox20->Text = tabled1->Rows[0]->ItemArray[0]->ToString(); //开单医生姓名
				this->textBox18->Text = tabled1->Rows[0]->ItemArray[1]->ToString(); //开单时间
			}
			strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[6]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled2 = gcnew DataTable();
			if (adapter->Fill(tabled2)) {
				this->textBox19->Text = tabled2->Rows[0]->ItemArray[2]->ToString(); //检验医生（录入者） （姓名			
			}
			this->textBox17->Text = table1->Rows[0]->ItemArray[4]->ToString(); //取样时间
			item->SubItems->Add(table1->Rows[0]->ItemArray[4]->ToString());
			item->SubItems->Add(table1->Rows[0]->ItemArray[7]->ToString()); //检验仪器
			this->textBox16->Text = table1->Rows[0]->ItemArray[8]->ToString(); //检测开始时间
			item->SubItems->Add(table1->Rows[0]->ItemArray[8]->ToString());
			item->SubItems->Add(table1->Rows[0]->ItemArray[9]->ToString()); //检验结果
			this->textBox15->Text = table1->Rows[0]->ItemArray[10]->ToString(); //检测完成时间
			item->SubItems->Add(table1->Rows[0]->ItemArray[10]->ToString());
			item->SubItems->Add(this->textBox19->Text);
			strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[11]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled3 = gcnew DataTable();
			if (adapter->Fill(tabled3)) {
				this->textBox14->Text = tabled3->Rows[0]->ItemArray[2]->ToString(); //审核者（姓名
			}
			this->textBox13->Text = table1->Rows[0]->ItemArray[12]->ToString(); //审核时间
			this->listView4->Items->Add(item);
		}
	}
	private: void cleartextbox() { //样本录入界面清空text
		this->textBox24->Text = ""; //样本编号
		this->textBox23->Text = ""; //送检单号
		this->textBox42->Text = ""; //检测项目
		this->textBox22->Text = ""; //病人编号
		this->textBox21->Text = ""; //病人姓名
		this->textBox43->Text = ""; //性别
		this->numericUpDown2->Value = 0; //年龄
		this->textBox20->Text = ""; //开单医生姓名
		this->textBox18->Text = ""; //开单时间
		this->textBox19->Text = ""; //检验医生（录入者） （姓名			
		this->textBox17->Text = ""; //取样时间
		this->textBox16->Text = ""; //检测开始时间
		this->textBox15->Text = ""; //检测完成时间
		this->textBox14->Text = ""; //审核者（姓名
		this->textBox13->Text = ""; //审核时间
	}
	private: TreeNode^ GetSelRootNode()
	{
		if (treeView1->SelectedNode == nullptr)
		{
			MessageBox::Show("本操作先要选择样本记录！", "提示");
			return nullptr;
		}
		if (treeView1->SelectedNode == treeView1->Nodes["节点0"] || treeView1->SelectedNode == treeView1->Nodes["节点1"]) {
			return nullptr;
		}
		// 找到选中的最高级要节点
		TreeNode^ rootNode = treeView1->SelectedNode->Parent->Parent;
		if (rootNode == nullptr)
			rootNode = treeView1->SelectedNode;
		else
		{
			rootNode = treeView1->SelectedNode->Parent;
		}
		return rootNode;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		TreeNode^ selNode = GetSelRootNode();
		if (selNode == nullptr) return;
		String^ NO = selNode->Text;
		String^ strcom = String::Format("UPDATE result SET 录入否 = '是', 检测仪器 = '{1}', 检验医生编号 = '{2}' WHERE 样本编号 = '{0}'", NO, this->comboBox4->Text, table->Rows[0]->ItemArray[0]->ToString());
		OleDbConnection^ conn = gcnew OleDbConnection(strConn);
		// 创建可执行命令
		OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
		// 执行操作
		try {
			conn->Open();
			cmd->ExecuteNonQuery();
			conn->Close();
			MessageBox::Show("录入成功。", "提示");
			LoadTree();
			TreeNode^ newnode = (treeView1->Nodes->Find(NO, true))[0];
			treeView1->SelectedNode = newnode;
			Loadlistview();
		}
		catch (OleDbException^ e) {
			MessageBox::Show(e->Message, "错误");
		}
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		this->tabControl1->TabPages->Remove(tabPage2);
	}
	private: void stau() {
		String^ strcom = String::Format("SELECT * FROM result WHERE 录入否 = '是'");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			int n = 0;
			for (int i = 0; i<table1->Rows->Count; i++) {
				if (table1->Rows[i]->ItemArray[10]->ToString() != "")
					n++;
			}
			this->toolStripStatusLabel1->Text = String::Format("检验报告总数： {0}    ，   其中已检验{1}", table1->Rows->Count, n);
		}
	}
	private: void Loadlistview() {
		String^ strcom = String::Format("SELECT * FROM result WHERE 录入否 = '是' AND 备注 IS NULL");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			listView1->Items->Clear(); //全部
			listView6->Items->Clear(); //未审核
			listView3->Items->Clear(); //检测中
			listView8->Items->Clear(); //未检测
									   //输出各行
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
				listView1->Items->Add(item);
				if (row[10]->ToString() != "" && row[12]->ToString() == "") {
					ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
					item->SubItems->Add(tablep->Rows[0]->ItemArray[2]->ToString()); //病人姓名
					item->SubItems->Add(row[3]->ToString());
					listView6->Items->Add(item);
				}
				if (row[8]->ToString() != "" && row[10]->ToString() == "") {
					ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
					item->SubItems->Add(tablep->Rows[0]->ItemArray[2]->ToString()); //病人姓名
					item->SubItems->Add(row[3]->ToString());
					listView3->Items->Add(item);
				}
				if (row[8]->ToString() == "") {
					ListViewItem ^item = gcnew ListViewItem(row[0]->ToString());
					item->SubItems->Add(tablep->Rows[0]->ItemArray[2]->ToString()); //病人姓名
					item->SubItems->Add(row[3]->ToString());
					listView8->Items->Add(item);
				}
			}
		}
	}
	private: System::Void listView1_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
		ListView^ listview = safe_cast<ListView^>(sender);
		if (listview->SelectedItems->Count < 1) return;
		this->button2->Text = "完成";
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button6->Enabled = false;
		this->richTextBox1->Enabled = false;
		String^ strcom = String::Format("SELECT * FROM result WHERE 样本编号 = '{0}'", listview->SelectedItems[0]->Text);
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			if (table1->Rows[0]->ItemArray[8]->ToString() == "") {
				this->button1->Enabled = true;
			}
			else if (table1->Rows[0]->ItemArray[10]->ToString() == "") {
				this->button2->Enabled = true; this->richTextBox1->Enabled = true;
			}
			else if (table1->Rows[0]->ItemArray[12]->ToString() == "") {
				this->button6->Enabled = true;
			}
			else if (table1->Rows[0]->ItemArray[12]->ToString() != "") {
				this->button2->Text = "修改结果";
				this->button2->Enabled = true;
				this->richTextBox1->Enabled = true;
			}
			cleartextbox1();
			this->listView2->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem(table1->Rows[0]->ItemArray[0]->ToString()); //样本编号
			this->textBox1->Text = table1->Rows[0]->ItemArray[0]->ToString(); //样本编号
			this->textBox2->Text = table1->Rows[0]->ItemArray[1]->ToString(); //送检单号
			this->textBox44->Text = table1->Rows[0]->ItemArray[3]->ToString(); //检测项目
			this->textBox3->Text = table1->Rows[0]->ItemArray[2]->ToString(); //病人编号
			strcom = String::Format("SELECT * FROM patient WHERE 病人编号 = '{0}'", table1->Rows[0]->ItemArray[2]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tablep = gcnew DataTable();
			if (adapter->Fill(tablep)) {
				this->textBox4->Text = tablep->Rows[0]->ItemArray[2]->ToString(); //病人姓名
				item->SubItems->Add(this->textBox4->Text); //病人姓名
				this->textBox45->Text = tablep->Rows[0]->ItemArray[3]->ToString(); //性别
				this->numericUpDown1->Value = int::Parse(tablep->Rows[0]->ItemArray[4]->ToString()); //年龄
			}
			item->SubItems->Add(this->textBox44->Text); //检测项目
			strcom = String::Format("SELECT * FROM project WHERE 检验项目='{0}'", this->textBox44->Text->Trim());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ table2 = gcnew DataTable();
			adapter->Fill(table2);
			item->SubItems->Add(table2->Rows[0]->ItemArray[1]->ToString()); //取样类别
			strcom = String::Format("SELECT doctor.姓名,orders.开单时间 FROM doctor INNER JOIN orders ON doctor.医生编号 = orders.开单医生编号 WHERE orders.送检单号 = '{0}'", table1->Rows[0]->ItemArray[1]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled1 = gcnew DataTable();
			if (adapter->Fill(tabled1)) {
				this->textBox5->Text = tabled1->Rows[0]->ItemArray[0]->ToString(); //开单医生姓名
				this->textBox7->Text = tabled1->Rows[0]->ItemArray[1]->ToString(); //开单时间
			}
			strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[6]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled2 = gcnew DataTable();
			if (adapter->Fill(tabled2)) {
				this->textBox6->Text = tabled2->Rows[0]->ItemArray[2]->ToString(); //检验医生（录入者） （姓名			
			}
			this->textBox8->Text = table1->Rows[0]->ItemArray[4]->ToString(); //取样时间
			item->SubItems->Add(table1->Rows[0]->ItemArray[7]->ToString()); //检验仪器
			this->textBox9->Text = table1->Rows[0]->ItemArray[8]->ToString(); //检测开始时间
			item->SubItems->Add(this->textBox6->Text); //检验医生
			item->SubItems->Add(table1->Rows[0]->ItemArray[9]->ToString()); //检验结果
			this->richTextBox1->Text = table1->Rows[0]->ItemArray[9]->ToString();
			this->textBox10->Text = table1->Rows[0]->ItemArray[10]->ToString(); //检测完成时间
			strcom = String::Format("SELECT * FROM doctor WHERE 医生编号 = '{0}'", table1->Rows[0]->ItemArray[11]->ToString());
			adapter->SelectCommand->CommandText = strcom;
			DataTable^ tabled3 = gcnew DataTable();
			if (adapter->Fill(tabled3)) {
				this->textBox11->Text = tabled3->Rows[0]->ItemArray[2]->ToString(); //审核者（姓名
			}
			this->textBox12->Text = table1->Rows[0]->ItemArray[12]->ToString(); //审核时间
			this->listView2->Items->Add(item);
		}
	}
	private: void cleartextbox1() {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox44->Text = "";
		this->textBox3->Text = "";
		this->textBox4->Text = "";
		this->textBox45->Text = "";
		this->numericUpDown1->Value = 0;
		this->textBox5->Text = "";
		this->textBox6->Text = "";
		this->textBox7->Text = "";
		this->textBox8->Text = "";
		this->textBox9->Text = "";
		this->textBox10->Text = "";
		this->textBox11->Text = "";
		this->textBox12->Text = "";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox46->Text->Trim();
		String^ str2 = this->textBox47->Text->Trim();
		if (!str1 && !str2) { Loadlistview(); return; }
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
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox49->Text->Trim();
		String^ str2 = this->textBox48->Text->Trim();
		if (!str1 && !str2) { Loadlistview(); return; }
		for each(ListViewItem^ item in listView6->Items) {
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
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox51->Text->Trim();
		String^ str2 = this->textBox50->Text->Trim();
		if (!str1 && !str2) { Loadlistview(); return; }
		for each(ListViewItem^ item in listView3->Items) {
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
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox53->Text->Trim();
		String^ str2 = this->textBox52->Text->Trim();
		if (!str1 && !str2) { Loadlistview(); return; }
		for each(ListViewItem^ item in listView8->Items) {
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
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->toolStripStatusLabel2->Text = String::Format("    当前时间：  {0}", DateTime::Now.ToString());
	}
	private: System::Void label63_Click(System::Object^  sender, System::EventArgs^  e) {
		notgood^ huitui = gcnew notgood();
		if (huitui->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ str = String::Format("UPDATE result SET 备注 = '{0}' WHERE 样本编号 = '{1}'", huitui->richTextBox1->Text->Trim(), this->listView2->Items[0]->Text);
			OleDbConnection^ conn = gcnew OleDbConnection(strConn);
			// 创建可执行命令
			OleDbCommand^ cmd = gcnew OleDbCommand(str, conn);
			// 执行操作
			try {
				conn->Open();
				cmd->ExecuteNonQuery();
				conn->Close();
				MessageBox::Show("操作成功，若要重新检测，请重新开单取样", "提示");
				Loadlistview();
				this->listView2->Items->Clear();
				cleartextbox1();
				LoadTree();
			}
			catch (OleDbException^ e) {
				MessageBox::Show(e->Message, "错误");
			}
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = this->textBox25->Text->Trim();
		String^ str2 = this->textBox26->Text->Trim();
		String^ str3 = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
		String^ str4 = this->dateTimePicker2->Value.ToString("yyyy-MM-dd");
		String^ str5 = this->comboBox7->Text->Trim();
		if (!str1 && !str2 && !str3 && !str4 && str5 == "所有项目") return;
		DataTable^ table = gcnew DataTable();
		String^ strCmd = String::Format("SELECT patient.姓名,result.* FROM result INNER JOIN patient ON result.病人编号 = patient.病人编号 WHERE result.备注 is NULL AND result.审核时间 IS NOT NULL");
		if (str1 != "") {
			strCmd += String::Format(" AND result.样本编号 = '{0}'", str1);
		}
		if (str2 != "") {
			strCmd += String::Format(" AND patient.姓名 = '{0}'", str2);
		}
		if (str3 != "" && str4 != "") {
			strCmd += String::Format(" AND result.审核时间  BETWEEN #{0}# And #{1}#", str3, str4);
		}
		if (str5 != "") {
			strCmd += String::Format(" AND result.检验项目 = '{0}'", str5);
		}
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strCmd, strConn);
		adapter->Fill(table);
		this->dataGridView1->DataSource = table;
	}
	private: void Loaddatagrid() {
		String^ strCmd = String::Format("SELECT patient.姓名,result.* FROM result INNER JOIN patient ON result.病人编号 = patient.病人编号 WHERE result.备注 is NULL AND result.审核时间 IS NOT NULL");
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strCmd, strConn);
		DataTable^ table1 = gcnew DataTable();
		adapter->Fill(table1);
		this->dataGridView1->DataSource = table1;
		strCmd = "SELECT 检验项目 FROM project";
		adapter->SelectCommand->CommandText = strCmd;
		DataTable^ table2 = gcnew DataTable();
		adapter->Fill(table2);
		this->comboBox7->Items->Clear();
		this->comboBox7->Items->Add("所有项目");
		for each (DataRow^ row in table2->Rows) {
			this->comboBox7->Items->Add(row[0]);
		}
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		Loaddatagrid();
		this->textBox25->Text = "";
		this->textBox26->Text = "";
		this->comboBox7->Text = "所有项目";
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
	private: void LoadChart() {
		String^ str = "select year(审核时间),month(审核时间),day(审核时间),count(*) from result where 审核时间 is not NULL group by year(审核时间),month(审核时间),day(审核时间) ";
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(str, strConn);
		DataTable^ table1 = gcnew DataTable();
		if (adapter->Fill(table1)) {
			Series^ series1 = gcnew Series();
			for (int i = 0; i < table1->Rows->Count; i++) {
				String^ x = String::Format("{0}-{1}-{2}", table1->Rows[i]->ItemArray[0]->ToString(), table1->Rows[i]->ItemArray[1]->ToString(), table1->Rows[i]->ItemArray[2]->ToString());
				int y = Int32::Parse(table1->Rows[i]->ItemArray[3]->ToString());
				series1->Points->AddXY(x, y);
			}
			this->chart1->Series->Clear();
			series1->LegendText = "样本数";
			this->chart1->Series->Add(series1);
		}
	}
	private: System::Void tabPage1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		Loadlistview();
	}
	private: System::Void tabPage11_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		Loadlv5();
	}
	private: System::Void tabPage10_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		button16_Click(nullptr, nullptr);
	}
	private: System::Void tabPage2_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		LoadTree();
	}
	private: System::Void tabPage12_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		LoadChart();
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
	private: System::Void tabPage11_Enter(System::Object^  sender, System::EventArgs^  e) {
		this->打印PToolStripMenuItem->Enabled = true;
		this->打印预览VToolStripMenuItem->Enabled = true;
		this->打印PToolStripButton->Enabled = true;
	}
	private: System::Void tabPage11_Leave(System::Object^  sender, System::EventArgs^  e) {
		this->打印PToolStripMenuItem->Enabled = false;
		this->打印预览VToolStripMenuItem->Enabled = false;
		this->打印PToolStripButton->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^  pSFD = gcnew SaveFileDialog();
		pSFD->Filter = "图片(*.png)|*.jpg|所有文件(*.*)|*.*";
		pSFD->DefaultExt = "png";
		pSFD->FileName = "*.png";
		if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		chart1->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
		MessageBox::Show("保存成功！", "提示");
	}
	private: System::Void 打印预览VToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // 打印预览对话框
		previewDlg->Document = this->printDocument1;         //设置打印文档对象
		previewDlg->ShowDialog();                                      // 显示打印预览对话框
	
	}
};
}
