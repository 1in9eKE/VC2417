#pragma once
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
	/// <summary>
	/// Patient ժҪ
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	public:
		Patient(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡԤ��VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ѯSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ϢIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ɷ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  ��ӡPToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  ����LToolStripButton;
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

	private: System::Windows::Forms::Label^  label17;

	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Drawing::Printing::PrintDocument^  printDocument2;
	private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ϵͳSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡԤ��VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ѯSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ϢIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ɷ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->��ӡPToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
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
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
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
			this->SuspendLayout();
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT   \r\nFROM      (diagnose INNER JOIN\r\n                patient ON diagnose.����"
				L"��� = patient.���˱��)";
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
				this->ϵͳSToolStripMenuItem,
					this->��ѯSToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1226, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ϵͳSToolStripMenuItem
			// 
			this->ϵͳSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��ӡPToolStripMenuItem,
					this->��ӡԤ��VToolStripMenuItem, this->toolStripSeparator2, this->�˳�XToolStripMenuItem
			});
			this->ϵͳSToolStripMenuItem->Name = L"ϵͳSToolStripMenuItem";
			this->ϵͳSToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->ϵͳSToolStripMenuItem->Text = L"ϵͳ";
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripMenuItem.Image")));
			this->��ӡPToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(&P)";
			this->��ӡPToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::��ӡPToolStripMenuItem_Click);
			// 
			// ��ӡԤ��VToolStripMenuItem
			// 
			this->��ӡԤ��VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��VToolStripMenuItem.Image")));
			this->��ӡԤ��VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡԤ��VToolStripMenuItem->Name = L"��ӡԤ��VToolStripMenuItem";
			this->��ӡԤ��VToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->��ӡԤ��VToolStripMenuItem->Text = L"��ӡԤ��(&V)";
			this->��ӡԤ��VToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::��ӡԤ��VToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(156, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(&X)";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::�˳�XToolStripMenuItem_Click);
			// 
			// ��ѯSToolStripMenuItem
			// 
			this->��ѯSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������ϢIToolStripMenuItem,
					this->������RToolStripMenuItem, this->�ɷ����ToolStripMenuItem
			});
			this->��ѯSToolStripMenuItem->Name = L"��ѯSToolStripMenuItem";
			this->��ѯSToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->��ѯSToolStripMenuItem->Text = L"��ѯ";
			// 
			// ������ϢIToolStripMenuItem
			// 
			this->������ϢIToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ϢIToolStripMenuItem.Image")));
			this->������ϢIToolStripMenuItem->Name = L"������ϢIToolStripMenuItem";
			this->������ϢIToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������ϢIToolStripMenuItem->Text = L"������Ϣ";
			this->������ϢIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::������ϢIToolStripMenuItem_Click);
			// 
			// ������RToolStripMenuItem
			// 
			this->������RToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������RToolStripMenuItem.Image")));
			this->������RToolStripMenuItem->Name = L"������RToolStripMenuItem";
			this->������RToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->������RToolStripMenuItem->Text = L"������";
			this->������RToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::������RToolStripMenuItem_Click);
			// 
			// �ɷ����ToolStripMenuItem
			// 
			this->�ɷ����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�ɷ����ToolStripMenuItem.Image")));
			this->�ɷ����ToolStripMenuItem->Name = L"�ɷ����ToolStripMenuItem";
			this->�ɷ����ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->�ɷ����ToolStripMenuItem->Text = L"�ɷ����";
			this->�ɷ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::�ɷ����ToolStripMenuItem_Click);
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����AToolStripMenuItem });
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->����HToolStripMenuItem->Text = L"����(&H)";
			// 
			// ����AToolStripMenuItem
			// 
			this->����AToolStripMenuItem->Name = L"����AToolStripMenuItem";
			this->����AToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->����AToolStripMenuItem->Text = L"����(&A)...";
			this->����AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Patient::����AToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->��ӡPToolStripButton, this->toolStripSeparator1, this->����LToolStripButton
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
			this->toolStripButton1->Text = L"������Ϣ";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Patient::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(76, 22);
			this->toolStripButton2->Text = L"������";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Patient::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(76, 22);
			this->toolStripButton3->Text = L"�ɷ����";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Patient::toolStripButton3_Click);
			// 
			// ��ӡPToolStripButton
			// 
			this->��ӡPToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripButton.Image")));
			this->��ӡPToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripButton->Name = L"��ӡPToolStripButton";
			this->��ӡPToolStripButton->Size = System::Drawing::Size(67, 22);
			this->��ӡPToolStripButton->Text = L"��ӡ(&P)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// ����LToolStripButton
			// 
			this->����LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����LToolStripButton.Image")));
			this->����LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����LToolStripButton->Name = L"����LToolStripButton";
			this->����LToolStripButton->Size = System::Drawing::Size(66, 22);
			this->����LToolStripButton->Text = L"����(&L)";
			this->����LToolStripButton->Click += gcnew System::EventHandler(this, &Patient::����LToolStripButton_Click);
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
			this->toolStripStatusLabel1->Text = L"xxx����ӭ����";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(44, 17);
			this->toolStripStatusLabel2->Text = L"������";
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
			this->tabPage1->Text = L"������Ϣ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"Ů" });
			this->comboBox5->Location = System::Drawing::Point(232, 271);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 27);
			this->comboBox5->TabIndex = 26;
			this->comboBox5->Text = L"��";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(443, 129);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 18);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Patient::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(926, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"�˳�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Patient::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(774, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"����";
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
			this->groupBox1->Text = L"��Ƭ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(232, 415);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 29);
			this->dateTimePicker1->TabIndex = 4;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Patient::dateTimePicker1_ValueChanged);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->textBox4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->textBox3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->textBox2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(232, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(181, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(127, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"�� ��";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(113, 496);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"���֤��";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(113, 422);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 19);
			this->label5->TabIndex = 0;
			this->label5->Text = L"��������";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(127, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 19);
			this->label4->TabIndex = 0;
			this->label4->Text = L"�� ��";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(127, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"�� ��";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(127, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"�� ��";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(117, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�˺� ID";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1218, 561);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"������";
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
			this->splitContainer1->Panel2->Controls->Add(this->button6);
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
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(763, 555);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &Patient::listView1_ItemSelectionChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"�������";
			this->columnHeader1->Width = 161;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"������Ŀ";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 173;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"������";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 179;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"�����������";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 150;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button6->AutoSize = true;
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(237, 518);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"��ӡ��ϸ����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Patient::button6_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(179, 400);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(154, 35);
			this->textBox9->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(179, 287);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(154, 35);
			this->textBox8->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(179, 174);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(154, 35);
			this->textBox7->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->label14->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(32, 397);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 48);
			this->label14->TabIndex = 3;
			this->label14->Text = L"  ����\r\n�������";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(32, 286);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 24);
			this->label13->TabIndex = 3;
			this->label13->Text = L"������";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(32, 175);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"������Ŀ";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(32, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 24);
			this->label11->TabIndex = 3;
			this->label11->Text = L"�������";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(16, 518);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"��ӡ�ñ�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Patient::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1218, 561);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"�ɷ����";
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
			this->splitContainer2->Panel1->Controls->Add(this->button5);
			this->splitContainer2->Panel1->Controls->Add(this->maskedTextBox1);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox3);
			this->splitContainer2->Panel1->Controls->Add(this->label17);
			this->splitContainer2->Panel1->Controls->Add(this->label18);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(1218, 561);
			this->splitContainer2->SplitterDistance = 55;
			this->splitContainer2->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button5->AutoSize = true;
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(965, 13);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 29);
			this->button5->TabIndex = 3;
			this->button5->Text = L"��ѯ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Patient::button5_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->maskedTextBox1->Location = System::Drawing::Point(106, 11);
			this->maskedTextBox1->Mask = L"0000-00-00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(167, 29);
			this->maskedTextBox1->TabIndex = 2;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"���з�ʽ", L"΢��", L"֧����", L"�ֽ�", L"���п�", L"���ÿ�",
					L"ҽ����"
			});
			this->comboBox3->Location = System::Drawing::Point(529, 13);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 27);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->Text = L"���з�ʽ";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(424, 14);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 19);
			this->label17->TabIndex = 0;
			this->label17->Text = L"���ʽ";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(38, 13);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 19);
			this->label18->TabIndex = 0;
			this->label18->Text = L"����";
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
			this->splitContainer3->SplitterDistance = 917;
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
			this->splitContainer4->Size = System::Drawing::Size(917, 502);
			this->splitContainer4->SplitterDistance = 452;
			this->splitContainer4->TabIndex = 0;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader5, this->columnHeader6,
					this->columnHeader9, this->columnHeader7, this->columnHeader8, this->columnHeader10, this->columnHeader11
			});
			this->listView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(0, 0);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(917, 452);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"�ͼ쵥��";
			this->columnHeader5->Width = 149;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"��������";
			this->columnHeader6->Width = 148;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"������Ŀ";
			this->columnHeader9->Width = 145;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"ҽ������";
			this->columnHeader7->Width = 142;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"ҽ�����";
			this->columnHeader8->Width = 141;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"�������";
			this->columnHeader10->Width = 149;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"���ʽ";
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
			this->splitContainer5->Size = System::Drawing::Size(917, 46);
			this->splitContainer5->SplitterDistance = 430;
			this->splitContainer5->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(430, 46);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"�ܷ��ã�";
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(483, 46);
			this->button4->TabIndex = 2;
			this->button4->Text = L"��ӡ�ɷ����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(297, 502);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(145, 185);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 29);
			this->textBox11->TabIndex = 13;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(145, 95);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 29);
			this->textBox10->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(30, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(256, 16);
			this->label10->TabIndex = 12;
			this->label10->Text = L"����xxx���û�δ�ɣ��뾡��ɷѣ�";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(38, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"δ�ɷ���";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(251, 188);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 19);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Ԫ";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(251, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 19);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Ԫ";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(38, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"�ѽɷ���";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Patient::timer1_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Patient::printDocument1_PrintPage);
			// 
			// printDocument2
			// 
			this->printDocument2->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Patient::printDocument2_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
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
			this->Text = L"С�ͼ����ϵͳ��Ϣ��ѯ�ˡ���XXX ��½ʱ��:xxxxx";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: String^ strConn;
		DataTable^ table;
		DateTime^ SigninTime;
private: System::Void Patient_Load(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Enabled = true;
	this->tabControl1->TabPages->Clear();
	this->tabControl1->TabPages->Add(tabPage1);
	MessageBox::Show("�������ڴ˲鿴���ĸ�����Ϣ�����������ɷ������", "���ڱ�ϵͳ");
	SigninTime = DateTime::Now;
	PersonalData(table);
	Loadlv1();
	Loadlv2();
}
private: void PersonalData(DataTable^ table) {
	this->Text = String::Format("С�ͼ����ϵͳ��Ϣ��ѯ ���� {0}  ��½ʱ�䣺 {1}", table->Rows[0]->ItemArray[2]->ToString(), SigninTime->ToString());
	this->toolStripStatusLabel1->Text = String::Format("{0}  ��ӭ����     ", table->Rows[0]->ItemArray[2]->ToString());
	this->textBox1->Text = table->Rows[0]->ItemArray[0]->ToString();
	this->textBox2->Text = table->Rows[0]->ItemArray[1]->ToString();
	this->textBox3->Text = table->Rows[0]->ItemArray[2]->ToString();
	this->comboBox5->SelectedIndex = table->Rows[0]->ItemArray[3]->ToString() == "��" ? 0:1;
	this->dateTimePicker1->Text = table->Rows[0]->ItemArray[5]->ToString();
	this->textBox4->Text = (int::Parse(DateTime::Now.ToString(L"yyyy")) - int::Parse(this->dateTimePicker1->Value.ToString("yyyy"))).ToString();
	this->textBox5->Text = table->Rows[0]->ItemArray[6]->ToString();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//����
	String^ str1 = this->textBox2->Text->Trim();
	String^ str2 = this->textBox3->Text->Trim();
	String^ str3 = this->comboBox5->Text->Trim();
	String^ str4 = this->textBox4->Text->Trim();
	String^ str5 = this->textBox5->Text->Trim();
	String^ str6 = this->dateTimePicker1->Value.ToString("yyyy/MM/dd");
	String^ strcom = String::Format("UPDATE patient SET ���� = '{0}', ���� = '{1}', �Ա� = '{2}', ���� = {3}, �������� = '{4}', ���֤�� = '{5}' WHERE ���˱�� = '{6}'",
		str1, str2, str3, int::Parse(str4), str6, str5, table->Rows[0]->ItemArray[0]->ToString());
	OleDbConnection^ conn = gcnew OleDbConnection(strConn);
	// ������ִ������
	OleDbCommand^ cmd = gcnew OleDbCommand(strcom, conn);
	// ִ�в���
	conn->Open();
	cmd->ExecuteNonQuery();
	conn->Close();
	String^ strcom1 = String::Format("SELECT * FROM patient");
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcom1, strConn);
	DataTable^ table1 = gcnew DataTable();
	adapter->Fill(table1);
	PersonalData(table1);
	MessageBox::Show("���³ɹ�", "��ʾ");
}
private: System::Void ������ϢIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage1))
		this->tabControl1->SelectedTab = tabPage1;
	else {
		this->tabControl1->TabPages->Add(tabPage1);
		this->tabControl1->SelectedTab = tabPage1;
	}
}
private: System::Void ������RToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else { 
		this->tabControl1->TabPages->Add(tabPage2); 
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: System::Void �ɷ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void �˳�XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Patient_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel; 
	this->timer1->Enabled = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void ����AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("�������ڴ˲鿴���ĸ�����Ϣ�����������ɷ������", "���ڱ�ϵͳ");
}
private: System::Void ����LToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("�������ڴ˲鿴���ĸ�����Ϣ�����������ɷ������", "���ڱ�ϵͳ");

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//��ϸ����
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // ȡ�������������ַ�
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->toolStripStatusLabel2->Text = String::Format("   ��ǰʱ�䣺  {0}", DateTime::Now.ToString());
}
private: System::Void ��ӡԤ��VToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���
	previewDlg->Document = this->printDocument1;         //���ô�ӡ�ĵ�����
	previewDlg->ShowDialog();                                      // ��ʾ��ӡԤ���Ի���
}
private: System::Void ��ӡPToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ printDlg = gcnew PrintDialog();                   //��ӡ�Ի���
	printDlg->Document = this->printDocument1;            //���ô�ӡ�ĵ�
	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		this->printDocument1->Print();                               //��ʼ��ӡ
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;
	int left = e->MarginBounds.Left;                   // ���Ͻ�Xλ��
	int top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��
	int width = e->MarginBounds.Width;                 //��Ч������
	int height = e->MarginBounds.Height;             // ��Ч����߶�
	// ��ӡҳͷ(����,26��)
	Drawing::Font^ headerFont = gcnew Drawing::Font(L"����", 26, FontStyle::Regular);
	g->DrawString(L"��������", headerFont, Brushes::Black, left + 230, top);
	// ��ӡ����(������ɫ,����,12��)
	top += 60;
	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);
	g->FillRectangle(Brushes::LightGray, Rectangle(left, top, width, 30));
	g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);
	Drawing::Font^ titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);
	g->DrawString(L"���", titlesFont, Brushes::Black, left + 40, top + 5);
	g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);          //�зָ���
	g->DrawString(L"������Ŀ", titlesFont, Brushes::Black, left + 160, top + 5);
	g->DrawLine(tablesPen, left + 280, top, left + 280, top + 30);
	g->DrawString(L"������", titlesFont, Brushes::Black, left + 320, top + 5);
	g->DrawLine(tablesPen, left + 440, top, left + 440, top + 30);
	g->DrawString(L"�����������", titlesFont, Brushes::Black, left + 480, top + 5);
	//g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);
	//g->DrawString(L"�ɼ�3", titlesFont, Brushes::Black, left + 450, top + 5);
	// ��ӡҳ��
	top += 30, height -= 30;
	Drawing::Font^ tablesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Regular);
	for each(ListViewItem^ item in this->listView1->Items) {
		g->DrawString(item->SubItems[0]->Text, tablesFont, Brushes::Black, left + 30, top + 5);      // ѧ��
		g->DrawLine(tablesPen, left + 120, top, left + 120, top + 30);             //�зָ���
		g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 140, top + 5);    // ����
		g->DrawLine(tablesPen, left + 280, top, left + 280, top + 30);
		g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 310, top + 5);    // �ɼ�1
		g->DrawLine(tablesPen, left + 440, top, left + 440, top + 30);
		g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 470, top + 5);    // �ɼ�2
		//g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);
		//g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 460, top + 5);    // �ɼ�3
		//g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);
		top += 30, height -= 30;
	}
	e->HasMorePages = false;
}
private: void Loadlv1() {
	String^ strcmd = String::Format("SELECT result.�������,result.������Ŀ,result.�����,project.��Ŀ�۸� FROM result INNER JOIN project ON result.������Ŀ = project.������Ŀ WHERE result.���˱�� = '{0}' AND result.���ʱ�� IS NOT NULL AND result.��ע IS NULL",table->Rows[0]->ItemArray[0]->ToString());
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		this->listView1->Items->Clear();
		for each(DataRow^ row in table1->Rows) {
			ListViewItem^ item = gcnew ListViewItem(row[0]->ToString());
			item->SubItems->Add(row[1]->ToString());
			item->SubItems->Add(row[2]->ToString());
			item->SubItems->Add(row[3]->ToString());
			this->listView1->Items->Add(item);
		}
	}
}
private: void Loadlv2() {
	String^ strcmd = String::Format("SELECT orders.�ͼ쵥��,orders.����ʱ��,orders.������Ŀ,doctor.����,orders.����ҽ�����,orders.�������,orders.���ʽ FROM orders INNER JOIN doctor ON orders.����ҽ����� = doctor.ҽ����� WHERE orders.���˱�� = '{0}'", table->Rows[0]->ItemArray[0]->ToString());
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		this->listView2->Items->Clear();
		for each(DataRow^ row in table1->Rows) {
			ListViewItem^ item = gcnew ListViewItem(row[0]->ToString());
			item->SubItems->Add(row[1]->ToString());
			item->SubItems->Add(row[2]->ToString());
			item->SubItems->Add(row[3]->ToString());
			item->SubItems->Add(row[4]->ToString());
			item->SubItems->Add(row[5]->ToString());
			item->SubItems->Add(row[6]->ToString());
			this->listView2->Items->Add(item);
		}
	}
	double yj = 0;
	double wj = 0;
	for each(ListViewItem^ item in this->listView2->Items) {
		if (item->SubItems[6]->Text->Trim() == "") {
			wj += Double::Parse(item->SubItems[5]->Text->Trim());
		}
		else yj += Double::Parse(item->SubItems[5]->Text->Trim());
	}
	this->textBox10->Text = ""+yj;
	this->textBox11->Text = ""+wj;
	if (wj != 0) {
		label10->Text = String::Format("������{0:F} Ԫδ�ɣ��뾡��ɷѣ�", wj);
	}
	else {
		label10->Text = "��ϲ�����ѽ�����á�";
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	this->textBox4->Text = (int::Parse(DateTime::Now.ToString(L"yyyy")) - int::Parse(this->dateTimePicker1->Value.ToString("yyyy"))).ToString();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox6->Text->Trim() == "") return;
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���
	previewDlg->Document = this->printDocument2;         //���ô�ӡ�ĵ�����
	previewDlg->ShowDialog();
}
private: System::Void printDocument2_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;
	int left = e->MarginBounds.Left;                   // ���Ͻ�Xλ��
	int top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��
	int width = e->MarginBounds.Width;                 //��Ч������
	int height = e->MarginBounds.Height;             // ��Ч����߶�
	// ��ӡҳͷ(����,26��)
	Drawing::Font^ headerFont = gcnew Drawing::Font(L"����", 26, FontStyle::Bold);
	g->DrawString(L"���鱨�浥", headerFont, Brushes::Black, left + 220, top);
	top += 50;
	//�����Ϣ
	String^ strcmd = String::Format("SELECT result.*,orders.����ʱ��,orders.����ҽ�����,orders.��������,orders.ȡ����� FROM result INNER JOIN orders ON result.�ͼ쵥�� = orders.�ͼ쵥�� WHERE ������� = '{0}'", this->textBox6->Text->Trim());
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (!adapter->Fill(table1)) {
		MessageBox::Show("���޴˱��棡");
		return;
	}
	String^ ybno = String::Format("������ţ�{0}", table1->Rows[0]->ItemArray[0]->ToString());
	String^ sjno = String::Format("�ͼ쵥�ţ�{0}", table1->Rows[0]->ItemArray[1]->ToString());
	String^ qytm = String::Format("ȡ��ʱ�䣺{0}", table1->Rows[0]->ItemArray[4]->ToString());
	String^ mch = String::Format("������{0}", table1->Rows[0]->ItemArray[7]->ToString());
	String^ jytm = String::Format("����ʱ�䣺{0}", table1->Rows[0]->ItemArray[8]->ToString()); 
	String^ shtm = String::Format("���ʱ�䣺{0}", table1->Rows[0]->ItemArray[12]->ToString());
	String^ kdtm = String::Format("����ʱ�䣺{0}", table1->Rows[0]->ItemArray[14]->ToString());
	String^ kdks = String::Format("�Ʊ�{0}", table1->Rows[0]->ItemArray[16]->ToString());
	String^ ybsy = String::Format("�������{0}", table1->Rows[0]->ItemArray[17]->ToString());
	strcmd = String::Format("SELECT * FROM doctor");
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ table2 = gcnew DataTable();
	adapter->Fill(table2);
	String^ sjdoc;
	String^ jydoc;
	String^ shdoc;
	for each(DataRow^ row in table2->Rows) {
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[15]->ToString()) {
			sjdoc = String::Format("�ͼ�ҽ����{0}", row[2]->ToString());
		}
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[6]->ToString()) {
			jydoc = String::Format("�����ߣ�{0}", row[2]->ToString());
		}
		if (row[0]->ToString() == table1->Rows[0]->ItemArray[11]->ToString()) {
			shdoc = String::Format("����ߣ�{0}", row[2]->ToString());
		}
	}
	String^ time = String::Format("��ӡ���ڣ�{0}", DateTime::Now.ToString());
	String^ name = String::Format("������{0}", this->textBox3->Text);
	String^ sex = String::Format("�Ա�{0}", this->comboBox5->Text);
	String^ age = String::Format("���䣺{0}",this->textBox4->Text);
	String^ jyxm = String::Format("{0}", table1->Rows[0]->ItemArray[3]->ToString()); //��Ŀ
	String^ jyjg = String::Format("{0}", table1->Rows[0]->ItemArray[9]->ToString()); //���
	strcmd = String::Format("SELECT * FROM project WHERE ������Ŀ ='{0}'", table1->Rows[0]->ItemArray[3]->ToString());
	adapter->SelectCommand->CommandText = strcmd;
	DataTable^ table3 = gcnew DataTable();
	adapter->Fill(table3);
	String^ ckz = String::Format("{0}", table3->Rows[0]->ItemArray[3]->ToString()); //���
	//
	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);
	Drawing::Font^ usualfont = gcnew Drawing::Font(L"����", 9);
	Drawing::Font^ imformation = gcnew Drawing::Font(L"����", 10);
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
	g->DrawString(L"��ϣ�", imformation, Brushes::Black, left, top + 20);
	g->DrawString(ybno, imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(ybsy, imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawLine(tablesPen, left, top + 20, left + width, top + 20);
	g->DrawString(L"��Ŀ", imformation, Brushes::Black, left + 50, top + 25);
	g->DrawString(L"���", imformation, Brushes::Black, left + 280, top + 25);
	g->DrawString(L"�ο�ֵ", imformation, Brushes::Black, left + 480, top + 25);
	g->DrawLine(tablesPen, left, top + 40, left + width, top + 40);
	top += 45;
	////��Ŀ //��� //�ο�ֵ
	g->DrawString(jyxm, imformation, Brushes::Black, left, top+5);
	g->DrawString(jyjg, imformation, Brushes::Black, left + 280, top+5);
	g->DrawString(ckz, imformation, Brushes::Black, left + 480, top+5);

	top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��
	top = top + height - 65;
	g->DrawString(L"����ͽ��ͣ�", imformation, Brushes::Black, left, top - 20);
	g->DrawLine(tablesPen, left, top, left + width, top);
	g->DrawString(qytm, usualfont, Brushes::Black, left, top + 5);
	g->DrawString(jytm, usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(jydoc, usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(kdtm, usualfont, Brushes::Black, left, top + 5);
	g->DrawString(shtm, usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(shdoc, usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"ע��������ֻ�Դ˷����������������ʣ����ڱ��淢����������ϵ���ҽʦ��", usualfont, Brushes::Black, left, top + 5);
	e->HasMorePages = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = this->maskedTextBox1->Text->Trim();
	String^ str2 = this->comboBox3->SelectedItem->ToString();
	if (str1 == "-  -" && str2 == "���з�ʽ") { 
		Loadlv2();
		return; 
	}
	if (str1->Length != 10) { MessageBox::Show("���ڸ�ʽ����"); return; }
	if (str1 != "-  -" && str2 != "���з�ʽ") {
		String^ strcmd = String::Format("SELECT orders.�ͼ쵥��,orders.����ʱ��,orders.������Ŀ,doctor.����,orders.����ҽ�����,orders.�������,orders.���ʽ FROM orders INNER JOIN doctor ON orders.����ҽ����� = doctor.ҽ����� WHERE orders.���˱�� = '{0}' AND year(orders.����ʱ��) = {1} AND month(orders.����ʱ��)= {2} AND day(orders.����ʱ��) = {3} AND orders.���ʽ = '{4}'",
			table->Rows[0]->ItemArray[0]->ToString(), str1->Substring(0,4),str1->Substring(5,2),str1->Substring(8,2), str2->Trim());
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
		DataTable^ table1 = gcnew DataTable();
		this->listView2->Items->Clear();
		if (adapter->Fill(table1)) {
			for each(DataRow^ row in table1->Rows) {
				ListViewItem^ item = gcnew ListViewItem(row[0]->ToString());
				item->SubItems->Add(row[1]->ToString());
				item->SubItems->Add(row[2]->ToString());
				item->SubItems->Add(row[3]->ToString());
				item->SubItems->Add(row[4]->ToString());
				item->SubItems->Add(row[5]->ToString());
				item->SubItems->Add(row[6]->ToString());
				this->listView2->Items->Add(item);
			}
		}
	}
	if (str1 != "-  -" &&str2 == "���з�ʽ") {
		String^ strcmd = String::Format("SELECT orders.�ͼ쵥��,orders.����ʱ��,orders.������Ŀ,doctor.����,orders.����ҽ�����,orders.�������,orders.���ʽ FROM orders INNER JOIN doctor ON orders.����ҽ����� = doctor.ҽ����� WHERE orders.���˱�� = '{0}' AND year(orders.����ʱ��) = {1} AND month(orders.����ʱ��)= {2} AND day(orders.����ʱ��) = {3}",
			 table->Rows[0]->ItemArray[0]->ToString(), str1->Substring(0, 4), str1->Substring(5, 2), str1->Substring(8, 2));
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
		DataTable^ table1 = gcnew DataTable();
		this->listView2->Items->Clear();
		if (adapter->Fill(table1)) {
			
			for each(DataRow^ row in table1->Rows) {
				ListViewItem^ item = gcnew ListViewItem(row[0]->ToString());
				item->SubItems->Add(row[1]->ToString());
				item->SubItems->Add(row[2]->ToString());
				item->SubItems->Add(row[3]->ToString());
				item->SubItems->Add(row[4]->ToString());
				item->SubItems->Add(row[5]->ToString());
				item->SubItems->Add(row[6]->ToString());
				this->listView2->Items->Add(item);
			}
		}
	}
	if (str1 == "-  -" && str2 != "���з�ʽ") {
		String^ strcmd = String::Format("SELECT orders.�ͼ쵥��,orders.����ʱ��,orders.������Ŀ,doctor.����,orders.����ҽ�����,orders.�������,orders.���ʽ FROM orders INNER JOIN doctor ON orders.����ҽ����� = doctor.ҽ����� WHERE orders.���˱�� = '{0}' AND orders.���ʽ = '{1}'",
			table->Rows[0]->ItemArray[0]->ToString(), str2->Trim());
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(strcmd, strConn);
		DataTable^ table1 = gcnew DataTable();
		this->listView2->Items->Clear();
		if (adapter->Fill(table1)) {
			for each(DataRow^ row in table1->Rows) {
				ListViewItem^ item = gcnew ListViewItem(row[0]->ToString());
				item->SubItems->Add(row[1]->ToString());
				item->SubItems->Add(row[2]->ToString());
				item->SubItems->Add(row[3]->ToString());
				item->SubItems->Add(row[4]->ToString());
				item->SubItems->Add(row[5]->ToString());
				item->SubItems->Add(row[6]->ToString());
				this->listView2->Items->Add(item);
			}
		}
	}
}
private: System::Void listView1_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {
	if (listView1->SelectedItems->Count < 1) return;
	ListViewItem^ item = listView1->SelectedItems[0];
	this->textBox6->Text = item->Text;
	this->textBox7->Text = item->SubItems[1]->Text;
	this->textBox8->Text = item->SubItems[2]->Text; 
	this->textBox9->Text = item->SubItems[3]->Text;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���
	previewDlg->Document = this->printDocument1;         //���ô�ӡ�ĵ�����
	previewDlg->ShowDialog();
}
};
}
