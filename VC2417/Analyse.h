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
	/// Analyse 摘要
	/// </summary>
	public ref class Analyse : public System::Windows::Forms::Form
	{
	public:
		Analyse(void)
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
		~Analyse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  项目统计ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  营业额ToolStripMenuItem;


	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;




	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::ListBox^  listBox2;

	private: System::Windows::Forms::ToolStripMenuItem^  保存图表ToolStripMenuItem1;


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
	private: System::Windows::Forms::ToolStripMenuItem^  刷新ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  样本数ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存图表ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  分类统计ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存图表ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  保存ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	protected:
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
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->项目统计ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->样本数ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存图表ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->分类统计ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存图表ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->营业额ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存图表ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->刷新ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->文件FToolStripMenuItem,
					this->工具TToolStripMenuItem
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
			this->退出XToolStripMenuItem->MergeIndex = 7;
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->退出XToolStripMenuItem->Text = L"关闭窗体";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::退出XToolStripMenuItem_Click);
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->统计分析ToolStripMenuItem });
			this->工具TToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->工具TToolStripMenuItem->MergeIndex = 2;
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
			// 
			// 统计分析ToolStripMenuItem
			// 
			this->统计分析ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->项目统计ToolStripMenuItem,
					this->营业额ToolStripMenuItem
			});
			this->统计分析ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"统计分析ToolStripMenuItem.Image")));
			this->统计分析ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->统计分析ToolStripMenuItem->MergeIndex = 0;
			this->统计分析ToolStripMenuItem->Name = L"统计分析ToolStripMenuItem";
			this->统计分析ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->统计分析ToolStripMenuItem->Text = L"统计分析";
			// 
			// 项目统计ToolStripMenuItem
			// 
			this->项目统计ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->样本数ToolStripMenuItem,
					this->分类统计ToolStripMenuItem
			});
			this->项目统计ToolStripMenuItem->Name = L"项目统计ToolStripMenuItem";
			this->项目统计ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->项目统计ToolStripMenuItem->Text = L"检验项目统计";
			this->项目统计ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::项目统计ToolStripMenuItem_Click);
			// 
			// 样本数ToolStripMenuItem
			// 
			this->样本数ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->保存图表ToolStripMenuItem2 });
			this->样本数ToolStripMenuItem->Name = L"样本数ToolStripMenuItem";
			this->样本数ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->样本数ToolStripMenuItem->Text = L"样本数";
			// 
			// 保存图表ToolStripMenuItem2
			// 
			this->保存图表ToolStripMenuItem2->Name = L"保存图表ToolStripMenuItem2";
			this->保存图表ToolStripMenuItem2->Size = System::Drawing::Size(124, 22);
			this->保存图表ToolStripMenuItem2->Text = L"保存图表";
			this->保存图表ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Analyse::保存图表ToolStripMenuItem2_Click);
			// 
			// 分类统计ToolStripMenuItem
			// 
			this->分类统计ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->保存图表ToolStripMenuItem3 });
			this->分类统计ToolStripMenuItem->Name = L"分类统计ToolStripMenuItem";
			this->分类统计ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->分类统计ToolStripMenuItem->Text = L"分类统计";
			// 
			// 保存图表ToolStripMenuItem3
			// 
			this->保存图表ToolStripMenuItem3->Name = L"保存图表ToolStripMenuItem3";
			this->保存图表ToolStripMenuItem3->Size = System::Drawing::Size(124, 22);
			this->保存图表ToolStripMenuItem3->Text = L"保存图表";
			this->保存图表ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &Analyse::保存图表ToolStripMenuItem3_Click);
			// 
			// 营业额ToolStripMenuItem
			// 
			this->营业额ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->保存图表ToolStripMenuItem1 });
			this->营业额ToolStripMenuItem->Name = L"营业额ToolStripMenuItem";
			this->营业额ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->营业额ToolStripMenuItem->Text = L"营业额统计";
			this->营业额ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::营业额ToolStripMenuItem_Click);
			// 
			// 保存图表ToolStripMenuItem1
			// 
			this->保存图表ToolStripMenuItem1->Name = L"保存图表ToolStripMenuItem1";
			this->保存图表ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->保存图表ToolStripMenuItem1->Text = L"保存图表";
			this->保存图表ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Analyse::保存图表ToolStripMenuItem1_Click);
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
			this->tabPage1->Text = L"项目统计";
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
			this->tabPage3->Text = L"样本数";
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
			this->groupBox1->Text = L"样本数统计";
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
				this->刷新ToolStripMenuItem,
					this->保存ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(101, 48);
			// 
			// 刷新ToolStripMenuItem
			// 
			this->刷新ToolStripMenuItem->Name = L"刷新ToolStripMenuItem";
			this->刷新ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->刷新ToolStripMenuItem->Text = L"刷新";
			this->刷新ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::刷新ToolStripMenuItem_Click);
			// 
			// 保存ToolStripMenuItem
			// 
			this->保存ToolStripMenuItem->Name = L"保存ToolStripMenuItem";
			this->保存ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->保存ToolStripMenuItem->Text = L"保存";
			this->保存ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analyse::保存ToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->tabPage4->Text = L"分类统计";
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
			this->groupBox3->Text = L"分类统计";
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
			this->listBox3->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->tabPage2->Text = L"营业额统计";
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
			this->groupBox2->Text = L"营业额统计";
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
			this->listBox2->Font = (gcnew System::Drawing::Font(L"宋体", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->Text = L"统计分析";
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
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 项目统计ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void 营业额ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->tabControl1->Contains(tabPage2))
		this->tabControl1->SelectedTab = tabPage2;
	else {
		this->tabControl1->TabPages->Add(tabPage2);
		this->tabControl1->SelectedTab = tabPage2;
	}
}
private: void LoadChart1() {
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
		series1->IsValueShownAsLabel = true;
		this->chart1->Series->Clear();
		series1->LegendText = "样本数";
		this->chart1->Series->Add(series1);
	}
	listBox1->Items->Clear();
	String^ stry = DateTime::Now.ToString("yyyy");
	String^ strm = DateTime::Now.ToString("MM");
	String^ strd = DateTime::Now.ToString("dd");
	str = String::Format("select * from result where 审核时间 is not NULL AND day(审核时间) = {0} AND month(审核时间) = {1} AND year(审核时间) = {2}", strd, strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabled = gcnew DataTable();
	adapter->Fill(tabled);
	int dn = tabled->Rows->Count;
	listBox1->Items->Add(String::Format("本日已检验样本： {0}", dn));
	str = String::Format("select * from result where 审核时间 is not NULL AND month(审核时间) = {0} AND year(审核时间) = {1}", strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tablem = gcnew DataTable();
	adapter->Fill(tablem);
	int mn = tablem->Rows->Count;
	listBox1->Items->Add(String::Format("本月已检验样本： {0}", mn));
	str = String::Format("select * from result where 审核时间 is not NULL AND year(审核时间) = {0}",stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabley = gcnew DataTable();
	adapter->Fill(tabley);
	int yn = tabley->Rows->Count;
	listBox1->Items->Add(String::Format("本年已检验样本： {0}", yn));
}
private: void LoadChart2() {
	String^ str = "SELECT year(开单时间), month(开单时间), day(开单时间), sum(所需费用),count(*) FROM orders WHERE 付款方式 IS NOT NULL GROUP BY year(开单时间), month(开单时间), day(开单时间);";
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
		series1->LegendText = "营业额";
		this->chart2->Series->Add(series1);
	}
	listBox2->Items->Clear();
	String^ stry = DateTime::Now.ToString("yyyy");
	String^ strm = DateTime::Now.ToString("MM");
	String^ strd = DateTime::Now.ToString("dd");
	str = String::Format("SELECT orders.所需费用 FROM orders WHERE 付款方式 IS NOT NULL AND day(开单时间) = {0} AND month(开单时间) = {1} AND year(开单时间) = {2}", strd, strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabled = gcnew DataTable();
	double dn = 0;
	if (adapter->Fill(tabled)) {
		for (int i = 0; i < tabled->Rows->Count; i++) {
			dn += double::Parse(tabled->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("本日营业额： {0}", dn));
	str = String::Format("SELECT orders.所需费用 FROM orders WHERE 付款方式 IS NOT NULL AND month(开单时间) = {0} AND year(开单时间) = {1}", strm, stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tablem = gcnew DataTable();
	double mn=0;
	if (adapter->Fill(tablem)) {
		for (int i = 0; i < tablem->Rows->Count; i++) {
			mn += double::Parse(tablem->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("本月营业额： {0}", mn));
	str = String::Format("SELECT orders.所需费用 FROM orders WHERE 付款方式 IS NOT NULL AND year(开单时间) = {0}", stry);
	adapter->SelectCommand->CommandText = str;
	DataTable^ tabley = gcnew DataTable();
	double yn = 0;
	if (adapter->Fill(tabley)) {
		for (int i = 0; i < tabley->Rows->Count; i++) {
			yn += double::Parse(tabley->Rows[i]->ItemArray[0]->ToString());
		}
	}
	listBox2->Items->Add(String::Format("本年营业额： {0}", yn));
}
//private: System::Void 保存图表ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
//	pSFD->Filter = "图片(*.png)|*.jpg|所有文件(*.*)|*.*";
//	pSFD->DefaultExt = "png";
//	pSFD->FileName = "*.png";
//	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
//	chart1->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
//	MessageBox::Show("保存成功！", "提示");
//}
private: System::Void 保存图表ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "图片(*.png)|*.jpg|所有文件(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart2->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("保存成功！", "提示");
}
private: System::Void 关于AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("统计分析窗体可以查看在系统录入的样本数以及营业额。");
}
private: void LoadChart3() {
	String^ str = "select 检验项目,count(*) from result where 审核时间 is not NULL group by 检验项目";
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
		series1["PieLabelStyle"] = "Outside";//将文字移到外侧
	}
}
private: System::Void 刷新ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadChart1();
	LoadChart2();
	LoadChart3();
}
private: System::Void 保存图表ToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "图片(*.png)|*.jpg|所有文件(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart1->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("保存成功！", "提示");
}
private: System::Void 保存图表ToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^  pSFD = gcnew SaveFileDialog();
	pSFD->Filter = "图片(*.png)|*.jpg|所有文件(*.*)|*.*";
	pSFD->DefaultExt = "png";
	pSFD->FileName = "*.png";
	if (pSFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	chart3->SaveImage(String::Format("{0}", pSFD->FileName), System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("保存成功！", "提示");
}
private: System::Void 保存ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Chart^ chart = gcnew Chart();
	chart = safe_cast<Chart^>(this->contextMenuStrip1->SourceControl);
	if (chart->Name == L"chart1") 保存图表ToolStripMenuItem2_Click(nullptr, nullptr);
	else if (chart->Name == L"chart2") 保存图表ToolStripMenuItem2_Click(nullptr, nullptr);
	else if (chart->Name == L"chart3") 保存图表ToolStripMenuItem3_Click(nullptr, nullptr);
}
};
}
