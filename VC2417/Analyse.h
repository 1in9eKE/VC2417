#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Data::OleDb;
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
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͳ�Ʒ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ŀͳ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ӫҵ��ToolStripMenuItem;


	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;




	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::ListBox^  listBox2;

	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼ��ToolStripMenuItem1;


	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Drawing::Printing::PrintDocument^  printDocument2;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ˢ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼ��ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͳ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ͼ��ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Analyse::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͳ�Ʒ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��Ŀͳ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼ��ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͳ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼ��ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ӫҵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ͼ��ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ˢ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabPage2->SuspendLayout();
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�ļ�FToolStripMenuItem,
					this->����TToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1224, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�˳�XToolStripMenuItem });
			this->�ļ�FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->�ļ�FToolStripMenuItem->MergeIndex = 0;
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->�˳�XToolStripMenuItem->MergeIndex = 7;
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�˳�XToolStripMenuItem->Text = L"�رմ���";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::�˳�XToolStripMenuItem_Click);
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ͳ�Ʒ���ToolStripMenuItem });
			this->����TToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->����TToolStripMenuItem->MergeIndex = 2;
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
			this->ͳ�Ʒ���ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ͳ�Ʒ���ToolStripMenuItem.Image")));
			this->ͳ�Ʒ���ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->ͳ�Ʒ���ToolStripMenuItem->MergeIndex = 0;
			this->ͳ�Ʒ���ToolStripMenuItem->Name = L"ͳ�Ʒ���ToolStripMenuItem";
			this->ͳ�Ʒ���ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ͳ�Ʒ���ToolStripMenuItem->Text = L"ͳ�Ʒ���";
			// 
			// ��Ŀͳ��ToolStripMenuItem
			// 
			this->��Ŀͳ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->����ͳ��ToolStripMenuItem
			});
			this->��Ŀͳ��ToolStripMenuItem->Name = L"��Ŀͳ��ToolStripMenuItem";
			this->��Ŀͳ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��Ŀͳ��ToolStripMenuItem->Text = L"������Ŀͳ��";
			this->��Ŀͳ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::��Ŀͳ��ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ͼ��ToolStripMenuItem2 });
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ����ͼ��ToolStripMenuItem2
			// 
			this->����ͼ��ToolStripMenuItem2->Name = L"����ͼ��ToolStripMenuItem2";
			this->����ͼ��ToolStripMenuItem2->Size = System::Drawing::Size(124, 22);
			this->����ͼ��ToolStripMenuItem2->Text = L"����ͼ��";
			this->����ͼ��ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Analyse::����ͼ��ToolStripMenuItem2_Click);
			// 
			// ����ͳ��ToolStripMenuItem
			// 
			this->����ͳ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ͼ��ToolStripMenuItem3 });
			this->����ͳ��ToolStripMenuItem->Name = L"����ͳ��ToolStripMenuItem";
			this->����ͳ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ͳ��ToolStripMenuItem->Text = L"����ͳ��";
			// 
			// ����ͼ��ToolStripMenuItem3
			// 
			this->����ͼ��ToolStripMenuItem3->Name = L"����ͼ��ToolStripMenuItem3";
			this->����ͼ��ToolStripMenuItem3->Size = System::Drawing::Size(124, 22);
			this->����ͼ��ToolStripMenuItem3->Text = L"����ͼ��";
			this->����ͼ��ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &Analyse::����ͼ��ToolStripMenuItem3_Click);
			// 
			// Ӫҵ��ToolStripMenuItem
			// 
			this->Ӫҵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ͼ��ToolStripMenuItem1 });
			this->Ӫҵ��ToolStripMenuItem->Name = L"Ӫҵ��ToolStripMenuItem";
			this->Ӫҵ��ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Ӫҵ��ToolStripMenuItem->Text = L"Ӫҵ��ͳ��";
			this->Ӫҵ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::Ӫҵ��ToolStripMenuItem_Click);
			// 
			// ����ͼ��ToolStripMenuItem1
			// 
			this->����ͼ��ToolStripMenuItem1->Name = L"����ͼ��ToolStripMenuItem1";
			this->����ͼ��ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->����ͼ��ToolStripMenuItem1->Text = L"����ͼ��";
			this->����ͼ��ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Analyse::����ͼ��ToolStripMenuItem1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1224, 586);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1216, 560);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��Ŀͳ��";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1210, 554);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer1);
			this->tabPage3->Location = System::Drawing::Point(22, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1184, 546);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"������";
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
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listBox1);
			this->splitContainer1->Size = System::Drawing::Size(1178, 540);
			this->splitContainer1->SplitterDistance = 755;
			this->splitContainer1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(755, 540);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������ͳ��";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ContextMenuStrip = this->contextMenuStrip1;
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 17);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(749, 520);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ˢ��ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 48);
			// 
			// ˢ��ToolStripMenuItem
			// 
			this->ˢ��ToolStripMenuItem->Name = L"ˢ��ToolStripMenuItem";
			this->ˢ��ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->ˢ��ToolStripMenuItem->Text = L"ˢ��";
			this->ˢ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::ˢ��ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::����ToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(419, 540);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->splitContainer3);
			this->tabPage4->Location = System::Drawing::Point(22, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1184, 546);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"����ͳ��";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->groupBox3);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->listBox3);
			this->splitContainer3->Size = System::Drawing::Size(1178, 540);
			this->splitContainer3->SplitterDistance = 755;
			this->splitContainer3->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chart3);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(755, 540);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"����ͳ��";
			// 
			// chart3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			this->chart3->ContextMenuStrip = this->contextMenuStrip1;
			this->chart3->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			this->chart3->Location = System::Drawing::Point(3, 17);
			this->chart3->Name = L"chart3";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(749, 520);
			this->chart3->TabIndex = 0;
			this->chart3->Text = L"chart3";
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 21;
			this->listBox3->Location = System::Drawing::Point(0, 0);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(419, 540);
			this->listBox3->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1216, 560);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ӫҵ��ͳ��";
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
			this->splitContainer2->Panel1->Controls->Add(this->groupBox2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->listBox2);
			this->splitContainer2->Size = System::Drawing::Size(1210, 554);
			this->splitContainer2->SplitterDistance = 776;
			this->splitContainer2->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(776, 554);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ӫҵ��ͳ��";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->ContextMenuStrip = this->contextMenuStrip1;
			this->chart2->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(3, 17);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(770, 534);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 21;
			this->listBox2->Location = System::Drawing::Point(0, 0);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(430, 554);
			this->listBox2->TabIndex = 0;
			// 
			// Analyse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 611);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Analyse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ͳ�Ʒ���";
			this->Load += gcnew System::EventHandler(this, &Analyse::Analyse_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabPage2->ResumeLayout(false);
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
public: String^ strConn;
private: System::Void �˳�XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void ��Ŀͳ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage1))
		this->tabControl1->SelectedTab = tabPage1;
	else {
		this->tabControl1->TabPages->Add(tabPage1);
		this->tabControl1->SelectedTab = tabPage1;
	}
}
private: System::Void Analyse_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;
	LoadChart1();
	LoadChart2();
	LoadChart3();
}
private: System::Void Ӫҵ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: void LoadChart1() {
	String^ str = "select year(���ʱ��),month(���ʱ��),day(���ʱ��),count(*) from result where ���ʱ�� is not NULL group by year(���ʱ��),month(���ʱ��),day(���ʱ��) ";
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(str, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		Series^ series1 = gcnew Series();
		for (int i = 0; i < table1->Rows->Count; i++) {
			String^ x = String::Format("{0}-{1}-{2}", table1->Rows[i]->ItemArray[0]->ToString(), table1->Rows[i]->ItemArray[1]->ToString(), table1->Rows[i]->ItemArray[2]->ToString());
			int y = Int32::Parse(table1->Rows[i]->ItemArray[3]->ToString());
			series1->Points->AddXY(x, y);
		}
		series1->IsValueShownAsLabel = true;
		this->chart1->Series->Clear();
		series1->LegendText = "������";
		this->chart1->Series->Add(series1);
	}
	listBox1->Items->Clear();
	String^ stry = DateTime::Now.ToString("yyyy");
	String^ strm = DateTime::Now.ToString("MM");
	String^ strd = DateTime::Now.ToString("dd");
	str = String::Format("select * from result where ���ʱ�� is not NULL AND day(���ʱ��) = {0} AND month(���ʱ��) = {1} AND year(���ʱ��) = {2}", strd, strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabled = gcnew DataTable();
	adapter->Fill(tabled);
	int dn = tabled->Rows->Count;
	listBox1->Items->Add(String::Format("�����Ѽ��������� {0}", dn));
	str = String::Format("select * from result where ���ʱ�� is not NULL AND month(���ʱ��) = {0} AND year(���ʱ��) = {1}", strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tablem = gcnew DataTable();
	adapter->Fill(tablem);
	int mn = tablem->Rows->Count;
	listBox1->Items->Add(String::Format("�����Ѽ��������� {0}", mn));
	str = String::Format("select * from result where ���ʱ�� is not NULL AND year(���ʱ��) = {0}",stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabley = gcnew DataTable();
	adapter->Fill(tabley);
	int yn = tabley->Rows->Count;
	listBox1->Items->Add(String::Format("�����Ѽ��������� {0}", yn));
}
private: void LoadChart2() {
	String^ str = "SELECT year(����ʱ��), month(����ʱ��), day(����ʱ��), sum(�������),count(*) FROM orders WHERE ���ʽ IS NOT NULL GROUP BY year(����ʱ��), month(����ʱ��), day(����ʱ��);";
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(str, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		Series^ series1 = gcnew Series();
		for (int i = 0; i < table1->Rows->Count; i++) {
			String^ x = String::Format("{0}-{1}-{2}", table1->Rows[i]->ItemArray[0]->ToString(), table1->Rows[i]->ItemArray[1]->ToString(), table1->Rows[i]->ItemArray[2]->ToString());
			double y = Double::Parse(table1->Rows[i]->ItemArray[3]->ToString());
			series1->Points->AddXY(x, y);
		}
		series1->IsValueShownAsLabel = true;
		this->chart2->Series->Clear();
		series1->LegendText = "Ӫҵ��";
		this->chart2->Series->Add(series1);
	}
	listBox2->Items->Clear();
	String^ stry = DateTime::Now.ToString("yyyy");
	String^ strm = DateTime::Now.ToString("MM");
	String^ strd = DateTime::Now.ToString("dd");
	str = String::Format("SELECT orders.������� FROM orders WHERE ���ʽ IS NOT NULL AND day(����ʱ��) = {0} AND month(����ʱ��) = {1} AND year(����ʱ��) = {2}", strd, strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabled = gcnew DataTable();
	double dn = 0;
	if (adapter->Fill(tabled)) {
		for (int i = 0; i < tabled->Rows->Count; i++) {
			dn += double::Parse(tabled->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("����Ӫҵ� {0}", dn));
	str = String::Format("SELECT orders.������� FROM orders WHERE ���ʽ IS NOT NULL AND month(����ʱ��) = {0} AND year(����ʱ��) = {1}", strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tablem = gcnew DataTable();
	double mn=0;
	if (adapter->Fill(tablem)) {
		for (int i = 0; i < tablem->Rows->Count; i++) {
			mn += double::Parse(tablem->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("����Ӫҵ� {0}", mn));
	str = String::Format("SELECT orders.������� FROM orders WHERE ���ʽ IS NOT NULL AND year(����ʱ��) = {0}", stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabley = gcnew DataTable();
	double yn = 0;
	if (adapter->Fill(tabley)) {
		for (int i = 0; i < tabley->Rows->Count; i++) {
			yn += double::Parse(tabley->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("����Ӫҵ� {0}", yn));
}
//private: System::Void ����ͼ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
//	pSFD->Filter = "ͼƬ(*.png)|*.jpg|�����ļ�(*.*)|*.*";
//	pSFD->DefaultExt = "png";
//	pSFD->FileName = "*.png";
//	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
//	chart1->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
//	MessageBox::Show("����ɹ���", "��ʾ");
//}
private: System::Void ����ͼ��ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "ͼƬ(*.png)|*.jpg|�����ļ�(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart2->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("����ɹ���", "��ʾ");
}
private: System::Void ����AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ͳ�Ʒ���������Բ鿴��ϵͳ¼����������Լ�Ӫҵ�");
}
private: void LoadChart3() {
	String^ str = "select ������Ŀ,count(*) from result where ���ʱ�� is not NULL group by ������Ŀ";
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(str, strConn);
	DataTable^ table1 = gcnew DataTable();
	if (adapter->Fill(table1)) {
		array<int>^ y = gcnew array<int>(table1->Rows->Count);
		array<String^>^ x = gcnew array<String^>(table1->Rows->Count);
		listBox3->Items->Clear();
		for (int i = 0; i < table1->Rows->Count; i++) {
			y[i] = int::Parse(table1->Rows[i]->ItemArray[1]->ToString());
			x[i] = String::Format("{0}:{1}", table1->Rows[i]->ItemArray[0]->ToString(), y[i]);
			listBox3->Items->Add(x[i]);
		}
		Series^ series1 = gcnew Series();
		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
		chart3->Series->Clear();
		series1->Points->DataBindXY(x, y);
		chart3->Series->Add(series1);
		series1["PieLabelStyle"] = "Outside";//�������Ƶ����
	}
}
private: System::Void ˢ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadChart1();
	LoadChart2();
	LoadChart3();
}
private: System::Void ����ͼ��ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "ͼƬ(*.png)|*.jpg|�����ļ�(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart1->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("����ɹ���", "��ʾ");
}
private: System::Void ����ͼ��ToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "ͼƬ(*.png)|*.jpg|�����ļ�(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart3->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("����ɹ���", "��ʾ");
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Chart^ chart = gcnew Chart();
	chart = safe_cast<Chart^>(this->contextMenuStrip1->SourceControl);
	if (chart->Name == L"chart1") ����ͼ��ToolStripMenuItem2_Click(nullptr, nullptr);
	else if (chart->Name == L"chart2") ����ͼ��ToolStripMenuItem2_Click(nullptr, nullptr);
	else if (chart->Name == L"chart3") ����ͼ��ToolStripMenuItem3_Click(nullptr, nullptr);
}
};
}
