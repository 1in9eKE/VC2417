#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Admin ժҪ
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
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
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ӽ�����ĿToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
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
			this->��Ӽ�����ĿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�ļ�FToolStripMenuItem,
					this->�༭EToolStripMenuItem, this->����TToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(969, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->�½�NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->�½�NToolStripMenuItem->Text = L"�½�(&N)";
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->��OToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(162, 6);
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripMenuItem.Image")));
			this->����SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->����SToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// ���ΪAToolStripMenuItem
			// 
			this->���ΪAToolStripMenuItem->Name = L"���ΪAToolStripMenuItem";
			this->���ΪAToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->���ΪAToolStripMenuItem->Text = L"���Ϊ(&A)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(162, 6);
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripMenuItem.Image")));
			this->��ӡPToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(&P)";
			// 
			// ��ӡԤ��VToolStripMenuItem
			// 
			this->��ӡԤ��VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��VToolStripMenuItem.Image")));
			this->��ӡԤ��VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��ӡԤ��VToolStripMenuItem->Name = L"��ӡԤ��VToolStripMenuItem";
			this->��ӡԤ��VToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->��ӡԤ��VToolStripMenuItem->Text = L"��ӡԤ��(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(162, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(165, 22);
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
			this->����UToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->����UToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->����UToolStripMenuItem->Text = L"����(&U)";
			// 
			// �ظ�RToolStripMenuItem
			// 
			this->�ظ�RToolStripMenuItem->Name = L"�ظ�RToolStripMenuItem";
			this->�ظ�RToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->�ظ�RToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->�ظ�RToolStripMenuItem->Text = L"�ظ�(&R)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(158, 6);
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����TToolStripMenuItem.Image")));
			this->����TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->����TToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripMenuItem.Image")));
			this->����CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->����CToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ճ��PToolStripMenuItem
			// 
			this->ճ��PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripMenuItem.Image")));
			this->ճ��PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ճ��PToolStripMenuItem->Name = L"ճ��PToolStripMenuItem";
			this->ճ��PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->ճ��PToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->ճ��PToolStripMenuItem->Text = L"ճ��(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(158, 6);
			// 
			// ȫѡAToolStripMenuItem
			// 
			this->ȫѡAToolStripMenuItem->Name = L"ȫѡAToolStripMenuItem";
			this->ȫѡAToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->ȫѡAToolStripMenuItem->Text = L"ȫѡ(&A)";
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�Զ���CToolStripMenuItem,
					this->ѡ��OToolStripMenuItem, this->��Ӽ�����ĿToolStripMenuItem
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
			this->����CToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ����IToolStripMenuItem
			// 
			this->����IToolStripMenuItem->Name = L"����IToolStripMenuItem";
			this->����IToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->����IToolStripMenuItem->Text = L"����(&I)";
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(122, 6);
			// 
			// ����AToolStripMenuItem
			// 
			this->����AToolStripMenuItem->Name = L"����AToolStripMenuItem";
			this->����AToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->����AToolStripMenuItem->Text = L"����(&A)...";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 642);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(969, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
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
			this->toolStrip1->Size = System::Drawing::Size(969, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
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
			// ��Ӽ�����ĿToolStripMenuItem
			// 
			this->��Ӽ�����ĿToolStripMenuItem->Name = L"��Ӽ�����ĿToolStripMenuItem";
			this->��Ӽ�����ĿToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��Ӽ�����ĿToolStripMenuItem->Text = L"��Ӽ�����Ŀ";
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 664);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
