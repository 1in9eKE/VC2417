#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Analyse ժҪ
	/// </summary>
	public ref class Analyse : public System::Windows::Forms::Form
	{
	public:
		Analyse(void)
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
		~Analyse()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::ToolStripMenuItem^  ͳ�Ʒ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ŀͳ��ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  Ӫҵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����IToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::ListBox^  listBox2;
	protected:
































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Analyse::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->ͳ�Ʒ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��Ŀͳ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ӫҵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�ļ�FToolStripMenuItem,
					this->�༭EToolStripMenuItem, this->����TToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(929, 25);
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
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->�½�NToolStripMenuItem->Text = L"�½�(&N)";
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(137, 6);
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripMenuItem.Image")));
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			// 
			// ���ΪAToolStripMenuItem
			// 
			this->���ΪAToolStripMenuItem->Name = L"���ΪAToolStripMenuItem";
			this->���ΪAToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->���ΪAToolStripMenuItem->Text = L"���Ϊ(&A)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(137, 6);
			// 
			// ��ӡPToolStripMenuItem
			// 
			this->��ӡPToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡPToolStripMenuItem.Image")));
			this->��ӡPToolStripMenuItem->Name = L"��ӡPToolStripMenuItem";
			this->��ӡPToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->��ӡPToolStripMenuItem->Text = L"��ӡ(&P)";
			// 
			// ��ӡԤ��VToolStripMenuItem
			// 
			this->��ӡԤ��VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��VToolStripMenuItem.Image")));
			this->��ӡԤ��VToolStripMenuItem->Name = L"��ӡԤ��VToolStripMenuItem";
			this->��ӡԤ��VToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->��ӡԤ��VToolStripMenuItem->Text = L"��ӡԤ��(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(137, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(140, 22);
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
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ����CToolStripMenuItem
			// 
			this->����CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����CToolStripMenuItem.Image")));
			this->����CToolStripMenuItem->Name = L"����CToolStripMenuItem";
			this->����CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����CToolStripMenuItem->Text = L"����(&C)";
			// 
			// ճ��PToolStripMenuItem
			// 
			this->ճ��PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ճ��PToolStripMenuItem.Image")));
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
			this->����TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ͳ�Ʒ���ToolStripMenuItem });
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ͳ�Ʒ���ToolStripMenuItem
			// 
			this->ͳ�Ʒ���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��Ŀͳ��ToolStripMenuItem,
					this->Ӫҵ��ToolStripMenuItem
			});
			this->ͳ�Ʒ���ToolStripMenuItem->Name = L"ͳ�Ʒ���ToolStripMenuItem";
			this->ͳ�Ʒ���ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ͳ�Ʒ���ToolStripMenuItem->Text = L"ͳ�Ʒ���";
			// 
			// ��Ŀͳ��ToolStripMenuItem
			// 
			this->��Ŀͳ��ToolStripMenuItem->Name = L"��Ŀͳ��ToolStripMenuItem";
			this->��Ŀͳ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��Ŀͳ��ToolStripMenuItem->Text = L"������Ŀͳ��";
			// 
			// Ӫҵ��ToolStripMenuItem
			// 
			this->Ӫҵ��ToolStripMenuItem->Name = L"Ӫҵ��ToolStripMenuItem";
			this->Ӫҵ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Ӫҵ��ToolStripMenuItem->Text = L"Ӫҵ��ͳ��";
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
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(929, 598);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(921, 572);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��Ŀͳ��";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(921, 572);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ӫҵ��ͳ��";
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
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listBox1);
			this->splitContainer1->Size = System::Drawing::Size(915, 566);
			this->splitContainer1->SplitterDistance = 587;
			this->splitContainer1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(587, 566);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 17);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(581, 546);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(324, 566);
			this->listBox1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->groupBox2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->listBox2);
			this->splitContainer2->Size = System::Drawing::Size(915, 566);
			this->splitContainer2->SplitterDistance = 587;
			this->splitContainer2->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(587, 566);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(3, 17);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(581, 546);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(0, 0);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(324, 566);
			this->listBox2->TabIndex = 0;
			// 
			// Analyse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(929, 623);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Analyse";
			this->Text = L"Analyse";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
