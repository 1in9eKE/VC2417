#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// JianYanKe ժҪ
	/// </summary>
	public ref class JianYanKe : public System::Windows::Forms::Form
	{
	public:
		JianYanKe(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ΪAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡԤ��VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ظ�RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ճ��PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  ȫѡAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �Զ���CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ѡ��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����IToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����¼��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���鱨�����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ѯToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���鱨���ѯToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ܴ�ӡToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ŀ�����ѯToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ﱨ���ӡToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͳ�Ʒ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ۺ�ͳ�Ʊ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ݻ�������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʱ��ͳ�Ʒ���ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  �½�NToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��OToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����SToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ��ӡPToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripButton^  ����UToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����CToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ճ��PToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripButton^  ����LToolStripButton;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(JianYanKe::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ΪAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��ӡPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡԤ��VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ظ�RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ճ��PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ȫѡAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Զ���CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ѡ��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��OToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����SToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��ӡPToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����UToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����CToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ճ��PToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����¼��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���鱨�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ѯToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���鱨���ѯToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ܴ�ӡToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��Ŀ�����ѯToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ﱨ���ӡToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͳ�Ʒ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ۺ�ͳ�Ʊ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ݻ�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʱ��ͳ�Ʒ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
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
			this->tabControl3->SuspendLayout();
			this->tabControl4->SuspendLayout();
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->�ļ�FToolStripMenuItem,
					this->�༭EToolStripMenuItem, this->����TToolStripMenuItem, this->����HToolStripMenuItem, this->��������ToolStripMenuItem, this->�������ToolStripMenuItem,
					this->�����ѯToolStripMenuItem, this->ͳ�Ʒ���ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(936, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 511);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(936, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->�½�NToolStripButton,
					this->��OToolStripButton, this->����SToolStripButton, this->��ӡPToolStripButton, this->toolStripSeparator6, this->����UToolStripButton,
					this->����CToolStripButton, this->ճ��PToolStripButton, this->toolStripSeparator7, this->����LToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(936, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->�½�NToolStripMenuItem,
					this->��OToolStripMenuItem, this->toolStripSeparator, this->����SToolStripMenuItem, this->���ΪAToolStripMenuItem, this->toolStripSeparator1,
					this->��ӡPToolStripMenuItem, this->��ӡԤ��VToolStripMenuItem, this->toolStripSeparator2, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripMenuItem.Image")));
			this->�½�NToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->�½�NToolStripMenuItem->Text = L"�½�(&N)";
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 6);
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripMenuItem.Image")));
			this->����SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// ���ΪAToolStripMenuItem
			// 
			this->���ΪAToolStripMenuItem->Name = L"���ΪAToolStripMenuItem";
			this->���ΪAToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->���ΪAToolStripMenuItem->Text = L"���Ϊ(&A)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 6);
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripMenuItem.Image")));
			this->��ӡPToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(&P)";
			// 
			// ��ӡԤ��VToolStripMenuItem
			// 
			this->��ӡԤ��VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��VToolStripMenuItem.Image")));
			this->��ӡԤ��VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡԤ��VToolStripMenuItem->Name = L"��ӡԤ��VToolStripMenuItem";
			this->��ӡԤ��VToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->��ӡԤ��VToolStripMenuItem->Text = L"��ӡԤ��(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(&X)";
			// 
			// �༭EToolStripMenuItem
			// 
			this->�༭EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->����UToolStripMenuItem,
					this->�ظ�RToolStripMenuItem, this->toolStripSeparator3, this->����TToolStripMenuItem, this->����CToolStripMenuItem, this->ճ��PToolStripMenuItem,
					this->toolStripSeparator4, this->ȫѡAToolStripMenuItem
			});
			this->�༭EToolStripMenuItem->Name = L"�༭EToolStripMenuItem";
			this->�༭EToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->�༭EToolStripMenuItem->Text = L"�༭(&E)";
			// 
			// ����UToolStripMenuItem
			// 
			this->����UToolStripMenuItem->Name = L"����UToolStripMenuItem";
			this->����UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����UToolStripMenuItem->Text = L"����(&U)";
			// 
			// �ظ�RToolStripMenuItem
			// 
			this->�ظ�RToolStripMenuItem->Name = L"�ظ�RToolStripMenuItem";
			this->�ظ�RToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�ظ�RToolStripMenuItem->Text = L"�ظ�(&R)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����TToolStripMenuItem.Image")));
			this->����TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripMenuItem.Image")));
			this->����CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ճ��PToolStripMenuItem
			// 
			this->ճ��PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripMenuItem.Image")));
			this->ճ��PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripMenuItem->Name = L"ճ��PToolStripMenuItem";
			this->ճ��PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ճ��PToolStripMenuItem->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(149, 6);
			// 
			// ȫѡAToolStripMenuItem
			// 
			this->ȫѡAToolStripMenuItem->Name = L"ȫѡAToolStripMenuItem";
			this->ȫѡAToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ȫѡAToolStripMenuItem->Text = L"ȫѡ(&A)";
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�Զ���CToolStripMenuItem,
					this->ѡ��OToolStripMenuItem
			});
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// �Զ���CToolStripMenuItem
			// 
			this->�Զ���CToolStripMenuItem->Name = L"�Զ���CToolStripMenuItem";
			this->�Զ���CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�Զ���CToolStripMenuItem->Text = L"�Զ���(&C)";
			// 
			// ѡ��OToolStripMenuItem
			// 
			this->ѡ��OToolStripMenuItem->Name = L"ѡ��OToolStripMenuItem";
			this->ѡ��OToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ѡ��OToolStripMenuItem->Text = L"ѡ��(&O)";
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����CToolStripMenuItem,
					this->����IToolStripMenuItem, this->����SToolStripMenuItem, this->toolStripSeparator5, this->����AToolStripMenuItem
			});
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->����HToolStripMenuItem->Text = L"����(&H)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ����IToolStripMenuItem
			// 
			this->����IToolStripMenuItem->Name = L"����IToolStripMenuItem";
			this->����IToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����IToolStripMenuItem->Text = L"����(&I)";
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(149, 6);
			// 
			// ����AToolStripMenuItem
			// 
			this->����AToolStripMenuItem->Name = L"����AToolStripMenuItem";
			this->����AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����AToolStripMenuItem->Text = L"����(&A)...";
			// 
			// �½�NToolStripButton
			// 
			this->�½�NToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�½�NToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�½�NToolStripButton.Image")));
			this->�½�NToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�½�NToolStripButton->Name = L"�½�NToolStripButton";
			this->�½�NToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�½�NToolStripButton->Text = L"�½�(&N)";
			// 
			// ��OToolStripButton
			// 
			this->��OToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��OToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripButton.Image")));
			this->��OToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripButton->Name = L"��OToolStripButton";
			this->��OToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��OToolStripButton->Text = L"��(&O)";
			// 
			// ����SToolStripButton
			// 
			this->����SToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����SToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripButton.Image")));
			this->����SToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripButton->Name = L"����SToolStripButton";
			this->����SToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����SToolStripButton->Text = L"����(&S)";
			// 
			// ��ӡPToolStripButton
			// 
			this->��ӡPToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��ӡPToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripButton.Image")));
			this->��ӡPToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripButton->Name = L"��ӡPToolStripButton";
			this->��ӡPToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��ӡPToolStripButton->Text = L"��ӡ(&P)";
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// ����UToolStripButton
			// 
			this->����UToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����UToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����UToolStripButton.Image")));
			this->����UToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����UToolStripButton->Name = L"����UToolStripButton";
			this->����UToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����UToolStripButton->Text = L"����(&U)";
			// 
			// ����CToolStripButton
			// 
			this->����CToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����CToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripButton.Image")));
			this->����CToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripButton->Name = L"����CToolStripButton";
			this->����CToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����CToolStripButton->Text = L"����(&C)";
			// 
			// ճ��PToolStripButton
			// 
			this->ճ��PToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ճ��PToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripButton.Image")));
			this->ճ��PToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripButton->Name = L"ճ��PToolStripButton";
			this->ճ��PToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ճ��PToolStripButton->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(6, 25);
			// 
			// ����LToolStripButton
			// 
			this->����LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����LToolStripButton.Image")));
			this->����LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����LToolStripButton->Name = L"����LToolStripButton";
			this->����LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����LToolStripButton->Text = L"����(&L)";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����¼��ToolStripMenuItem });
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����¼��ToolStripMenuItem
			// 
			this->����¼��ToolStripMenuItem->Name = L"����¼��ToolStripMenuItem";
			this->����¼��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����¼��ToolStripMenuItem->Text = L"����¼��";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���鱨�����ToolStripMenuItem });
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ���鱨�����ToolStripMenuItem
			// 
			this->���鱨�����ToolStripMenuItem->Name = L"���鱨�����ToolStripMenuItem";
			this->���鱨�����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���鱨�����ToolStripMenuItem->Text = L"���鱨�����";
			// 
			// �����ѯToolStripMenuItem
			// 
			this->�����ѯToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���鱨���ѯToolStripMenuItem,
					this->������ܴ�ӡToolStripMenuItem, this->��Ŀ�����ѯToolStripMenuItem, this->���ﱨ���ӡToolStripMenuItem
			});
			this->�����ѯToolStripMenuItem->Name = L"�����ѯToolStripMenuItem";
			this->�����ѯToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->�����ѯToolStripMenuItem->Text = L"�����ѯ";
			// 
			// ���鱨���ѯToolStripMenuItem
			// 
			this->���鱨���ѯToolStripMenuItem->Name = L"���鱨���ѯToolStripMenuItem";
			this->���鱨���ѯToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���鱨���ѯToolStripMenuItem->Text = L"���鱨���ѯ";
			// 
			// ������ܴ�ӡToolStripMenuItem
			// 
			this->������ܴ�ӡToolStripMenuItem->Name = L"������ܴ�ӡToolStripMenuItem";
			this->������ܴ�ӡToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->������ܴ�ӡToolStripMenuItem->Text = L"������ܴ�ӡ";
			// 
			// ��Ŀ�����ѯToolStripMenuItem
			// 
			this->��Ŀ�����ѯToolStripMenuItem->Name = L"��Ŀ�����ѯToolStripMenuItem";
			this->��Ŀ�����ѯToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��Ŀ�����ѯToolStripMenuItem->Text = L"��Ŀ�����ѯ";
			// 
			// ���ﱨ���ӡToolStripMenuItem
			// 
			this->���ﱨ���ӡToolStripMenuItem->Name = L"���ﱨ���ӡToolStripMenuItem";
			this->���ﱨ���ӡToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���ﱨ���ӡToolStripMenuItem->Text = L"���ﱨ���ӡ";
			// 
			// ͳ�Ʒ���ToolStripMenuItem
			// 
			this->ͳ�Ʒ���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ۺ�ͳ�Ʊ���ToolStripMenuItem,
					this->���ݻ�������ToolStripMenuItem, this->ʱ��ͳ�Ʒ���ToolStripMenuItem
			});
			this->ͳ�Ʒ���ToolStripMenuItem->Name = L"ͳ�Ʒ���ToolStripMenuItem";
			this->ͳ�Ʒ���ToolStripMenuItem->Size = System::Drawing::Size(68, 21);
			this->ͳ�Ʒ���ToolStripMenuItem->Text = L"ͳ�Ʒ���";
			// 
			// �ۺ�ͳ�Ʊ���ToolStripMenuItem
			// 
			this->�ۺ�ͳ�Ʊ���ToolStripMenuItem->Name = L"�ۺ�ͳ�Ʊ���ToolStripMenuItem";
			this->�ۺ�ͳ�Ʊ���ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�ۺ�ͳ�Ʊ���ToolStripMenuItem->Text = L"�ۺ�ͳ�Ʊ���";
			// 
			// ���ݻ�������ToolStripMenuItem
			// 
			this->���ݻ�������ToolStripMenuItem->Name = L"���ݻ�������ToolStripMenuItem";
			this->���ݻ�������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���ݻ�������ToolStripMenuItem->Text = L"���ݻ�������";
			// 
			// ʱ��ͳ�Ʒ���ToolStripMenuItem
			// 
			this->ʱ��ͳ�Ʒ���ToolStripMenuItem->Name = L"ʱ��ͳ�Ʒ���ToolStripMenuItem";
			this->ʱ��ͳ�Ʒ���ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ʱ��ͳ�Ʒ���ToolStripMenuItem->Text = L"ʱ��ͳ�Ʒ���";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 50);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(936, 461);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(928, 435);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"���鱨�����";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(928, 435);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
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
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl4);
			this->splitContainer1->Size = System::Drawing::Size(922, 429);
			this->splitContainer1->SplitterDistance = 418;
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
			this->splitContainer2->Size = System::Drawing::Size(418, 429);
			this->splitContainer2->SplitterDistance = 222;
			this->splitContainer2->TabIndex = 0;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(222, 429);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(214, 403);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(192, 74);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage5);
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl3->Location = System::Drawing::Point(0, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(192, 429);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(184, 403);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(192, 74);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage7);
			this->tabControl4->Controls->Add(this->tabPage8);
			this->tabControl4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl4->Location = System::Drawing::Point(0, 0);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(500, 429);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(492, 403);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"tabPage7";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(192, 74);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"tabPage8";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(120, 17);
			this->toolStripStatusLabel1->Text = L"���鱨������ �Ѽ���";
			// 
			// JianYanKe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 533);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"JianYanKe";
			this->Text = L"JianYanKe";
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
			this->tabControl3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
