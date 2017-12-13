#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  撤消UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重复RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  全选AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  项目统计ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  营业额ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  内容CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  索引IToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  搜索SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Analyse::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->撤消UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重复RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->项目统计ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->营业额ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->内容CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->索引IToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->搜索SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->文件FToolStripMenuItem,
					this->编辑EToolStripMenuItem, this->工具TToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(929, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->toolStripSeparator, this->保存SToolStripMenuItem, this->另存为AToolStripMenuItem, this->toolStripSeparator1,
					this->打印PToolStripMenuItem, this->打印预览VToolStripMenuItem, this->toolStripSeparator2, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"新建NToolStripMenuItem.Image")));
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->新建NToolStripMenuItem->Text = L"新建(&N)";
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripMenuItem.Image")));
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->打开OToolStripMenuItem->Text = L"打开(&O)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(137, 6);
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripMenuItem.Image")));
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			// 
			// 另存为AToolStripMenuItem
			// 
			this->另存为AToolStripMenuItem->Name = L"另存为AToolStripMenuItem";
			this->另存为AToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->另存为AToolStripMenuItem->Text = L"另存为(&A)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(137, 6);
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(137, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->撤消UToolStripMenuItem,
					this->重复RToolStripMenuItem, this->toolStripSeparator3, this->剪切TToolStripMenuItem, this->复制CToolStripMenuItem, this->粘贴PToolStripMenuItem,
					this->toolStripSeparator4, this->全选AToolStripMenuItem
			});
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->编辑EToolStripMenuItem->Text = L"编辑(&E)";
			// 
			// 撤消UToolStripMenuItem
			// 
			this->撤消UToolStripMenuItem->Name = L"撤消UToolStripMenuItem";
			this->撤消UToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->撤消UToolStripMenuItem->Text = L"撤消(&U)";
			// 
			// 重复RToolStripMenuItem
			// 
			this->重复RToolStripMenuItem->Name = L"重复RToolStripMenuItem";
			this->重复RToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->重复RToolStripMenuItem->Text = L"重复(&R)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切TToolStripMenuItem.Image")));
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->剪切TToolStripMenuItem->Text = L"剪切(&T)";
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripMenuItem.Image")));
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->复制CToolStripMenuItem->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripMenuItem.Image")));
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(149, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->全选AToolStripMenuItem->Text = L"全选(&A)";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->统计分析ToolStripMenuItem });
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
			this->统计分析ToolStripMenuItem->Name = L"统计分析ToolStripMenuItem";
			this->统计分析ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->统计分析ToolStripMenuItem->Text = L"统计分析";
			// 
			// 项目统计ToolStripMenuItem
			// 
			this->项目统计ToolStripMenuItem->Name = L"项目统计ToolStripMenuItem";
			this->项目统计ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->项目统计ToolStripMenuItem->Text = L"检验项目统计";
			// 
			// 营业额ToolStripMenuItem
			// 
			this->营业额ToolStripMenuItem->Name = L"营业额ToolStripMenuItem";
			this->营业额ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->营业额ToolStripMenuItem->Text = L"营业额统计";
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->内容CToolStripMenuItem,
					this->索引IToolStripMenuItem, this->搜索SToolStripMenuItem, this->toolStripSeparator5, this->关于AToolStripMenuItem
			});
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助(&H)";
			// 
			// 内容CToolStripMenuItem
			// 
			this->内容CToolStripMenuItem->Name = L"内容CToolStripMenuItem";
			this->内容CToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->内容CToolStripMenuItem->Text = L"内容(&C)";
			// 
			// 索引IToolStripMenuItem
			// 
			this->索引IToolStripMenuItem->Name = L"索引IToolStripMenuItem";
			this->索引IToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->索引IToolStripMenuItem->Text = L"索引(&I)";
			// 
			// 搜索SToolStripMenuItem
			// 
			this->搜索SToolStripMenuItem->Name = L"搜索SToolStripMenuItem";
			this->搜索SToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->搜索SToolStripMenuItem->Text = L"搜索(&S)";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(122, 6);
			// 
			// 关于AToolStripMenuItem
			// 
			this->关于AToolStripMenuItem->Name = L"关于AToolStripMenuItem";
			this->关于AToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->关于AToolStripMenuItem->Text = L"关于(&A)...";
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
			this->tabPage1->Text = L"项目统计";
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
			this->tabPage2->Text = L"营业额统计";
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
