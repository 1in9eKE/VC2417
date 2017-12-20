#pragma once
#include "Change.h"
#include "Analyse.h"
#include "newfile.h"
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
	/// Admin 摘要
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  窗口WToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  关于AToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;



	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看数据库ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  新建文本文档ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  修改添加资料ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripMenuItem^  层叠ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  水平平铺ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  垂直平铺ToolStripMenuItem;
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
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建文本文档ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->修改添加资料ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->查看数据库ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗口WToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->层叠ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->水平平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->垂直平铺ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
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
				this->文件FToolStripMenuItem,
					this->窗口WToolStripMenuItem, this->工具TToolStripMenuItem, this->帮助HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗口WToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(969, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->新建文本文档ToolStripMenuItem,
					this->修改添加资料ToolStripMenuItem, this->统计分析ToolStripMenuItem, this->toolStripSeparator1, this->查看数据库ToolStripMenuItem, this->toolStripSeparator2,
					this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 新建文本文档ToolStripMenuItem
			// 
			this->新建文本文档ToolStripMenuItem->Name = L"新建文本文档ToolStripMenuItem";
			this->新建文本文档ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->新建文本文档ToolStripMenuItem->Text = L"文档编辑器";
			this->新建文本文档ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::新建文本文档ToolStripMenuItem_Click);
			// 
			// 修改添加资料ToolStripMenuItem
			// 
			this->修改添加资料ToolStripMenuItem->Name = L"修改添加资料ToolStripMenuItem";
			this->修改添加资料ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->修改添加资料ToolStripMenuItem->Text = L"修改/添加窗口";
			// 
			// 统计分析ToolStripMenuItem
			// 
			this->统计分析ToolStripMenuItem->Name = L"统计分析ToolStripMenuItem";
			this->统计分析ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->统计分析ToolStripMenuItem->Text = L"统计分析窗口";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(150, 6);
			// 
			// 查看数据库ToolStripMenuItem
			// 
			this->查看数据库ToolStripMenuItem->Name = L"查看数据库ToolStripMenuItem";
			this->查看数据库ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->查看数据库ToolStripMenuItem->Text = L"查看数据库";
			this->查看数据库ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::调入数据库ToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(150, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->退出XToolStripMenuItem->Text = L"退出(&X)";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::退出XToolStripMenuItem_Click);
			// 
			// 窗口WToolStripMenuItem
			// 
			this->窗口WToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->层叠ToolStripMenuItem,
					this->水平平铺ToolStripMenuItem, this->垂直平铺ToolStripMenuItem
			});
			this->窗口WToolStripMenuItem->Name = L"窗口WToolStripMenuItem";
			this->窗口WToolStripMenuItem->Size = System::Drawing::Size(64, 21);
			this->窗口WToolStripMenuItem->Text = L"窗口(&W)";
			this->窗口WToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Admin::窗口WToolStripMenuItem_DropDownItemClicked);
			// 
			// 层叠ToolStripMenuItem
			// 
			this->层叠ToolStripMenuItem->Name = L"层叠ToolStripMenuItem";
			this->层叠ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->层叠ToolStripMenuItem->Text = L"层叠";
			// 
			// 水平平铺ToolStripMenuItem
			// 
			this->水平平铺ToolStripMenuItem->Name = L"水平平铺ToolStripMenuItem";
			this->水平平铺ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->水平平铺ToolStripMenuItem->Text = L"水平平铺";
			// 
			// 垂直平铺ToolStripMenuItem
			// 
			this->垂直平铺ToolStripMenuItem->Name = L"垂直平铺ToolStripMenuItem";
			this->垂直平铺ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->垂直平铺ToolStripMenuItem->Text = L"垂直平铺";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
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
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5
			});
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
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(703, 17);
			this->toolStripStatusLabel2->Spring = true;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->AutoSize = false;
			this->toolStripStatusLabel3->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel3->BorderStyle = System::Windows::Forms::Border3DStyle::Sunken;
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(40, 17);
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel4->BorderStyle = System::Windows::Forms::Border3DStyle::Sunken;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(40, 17);
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::Sunken;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(40, 17);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Admin::timer1_Tick);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 664);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"管理员：XXX 登陆时间：xxx";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Admin::Admin_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: String^ strConn;
		String^ ID;
private: DataTable^ table = gcnew DataTable();
		 //String^ strConn= "Provider=Microsoft.Jet.OLEDB.4.0; Data Source=DB.mdb";
		 Change^ Cdlg = gcnew Change();
		 Analyse^ Adlg = gcnew Analyse();
private: System::Void 修改添加资料ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	bool f = true;
	for (int i = 0; i < this->MdiChildren->Length; i++)
	{
		if (this->MdiChildren[i]->Name == "Cdlg") {
			this->MdiChildren[i]->Activate();
			f = false;
		}
		
	}
	if(f)
	{
		//Change^ Cdlg = gcnew Change();
		Cdlg->strconn = this->strConn;
		Cdlg->MdiParent = this;
		Cdlg->Name = "Cdlg";
		Cdlg->Show();
	}
	
}
private: System::Void 统计分析ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	bool f = true;
	for (int i = 0; i < this->MdiChildren->Length; i++)
	{
		if (this->MdiChildren[i]->Name == "Adlg") {
			this->MdiChildren[i]->Activate();
			f = false;
		}

	}
	if (f)
	{
		//Analyse^ Adlg = gcnew Analyse();
		Adlg->strConn = this->strConn;
		Adlg->MdiParent = this;
		Adlg->Name = "Adlg";
		Adlg->Show();
	}
	
}
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 调入数据库ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void Admin_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
}
private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
	this->Text = String::Format("管理员： {0}  登陆时间： {1} ", ID, DateTime::Now.ToString());
	this->timer1->Enabled = true;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->toolStripStatusLabel1->Text = String::Format("当前时间：{0}", DateTime::Now.ToString());
	if (Control::IsKeyLocked(Keys::CapsLock))
		this->toolStripStatusLabel3->Text = "大写";
	else
		this->toolStripStatusLabel3->Text = "";
	if (Control::IsKeyLocked(Keys::NumLock))
		this->toolStripStatusLabel4->Text = "数字";
	else
		this->toolStripStatusLabel4->Text = "";
	if (Control::IsKeyLocked(Keys::Scroll))
		this->toolStripStatusLabel5->Text = "滚动";
	else
		this->toolStripStatusLabel5->Text = "";
}
		 static int FormCount = 1;
private: System::Void 新建文本文档ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	newfile^ newMDIChild = gcnew newfile();
	newMDIChild->MdiParent = this;
	newMDIChild->Text = "文档" + FormCount.ToString();
	FormCount++;
	newMDIChild->Show();//显示子窗口
}
private: System::Void 窗口WToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == 层叠ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::Cascade);    //层叠
	else if (item == 水平平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileHorizontal);//水平平铺
	else if (item == 垂直平铺ToolStripMenuItem)
		this->LayoutMdi(MdiLayout::TileVertical);//垂直平铺
}
};
}
