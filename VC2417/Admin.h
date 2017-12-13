#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ToolStrip^  toolStrip1;









	private: System::Windows::Forms::ToolStripButton^  帮助LToolStripButton;
	private: System::Windows::Forms::ToolStripMenuItem^  添加检验项目ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计分析ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具TToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->窗口WToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->添加检验项目ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->帮助LToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->统计分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->设置ToolStripMenuItem,
					this->toolStripSeparator2, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
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
			// 窗口WToolStripMenuItem
			// 
			this->窗口WToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->添加检验项目ToolStripMenuItem,
					this->统计分析ToolStripMenuItem
			});
			this->窗口WToolStripMenuItem->Name = L"窗口WToolStripMenuItem";
			this->窗口WToolStripMenuItem->Size = System::Drawing::Size(64, 21);
			this->窗口WToolStripMenuItem->Text = L"窗口(&W)";
			// 
			// 添加检验项目ToolStripMenuItem
			// 
			this->添加检验项目ToolStripMenuItem->Name = L"添加检验项目ToolStripMenuItem";
			this->添加检验项目ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->添加检验项目ToolStripMenuItem->Text = L"添加检验项目";
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
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->帮助LToolStripButton });
			this->toolStrip1->Location = System::Drawing::Point(0, 25);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(969, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// 帮助LToolStripButton
			// 
			this->帮助LToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->帮助LToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"帮助LToolStripButton.Image")));
			this->帮助LToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->帮助LToolStripButton->Name = L"帮助LToolStripButton";
			this->帮助LToolStripButton->Size = System::Drawing::Size(23, 22);
			this->帮助LToolStripButton->Text = L"帮助(&L)";
			// 
			// 统计分析ToolStripMenuItem
			// 
			this->统计分析ToolStripMenuItem->Name = L"统计分析ToolStripMenuItem";
			this->统计分析ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->统计分析ToolStripMenuItem->Text = L"统计分析";
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->设置ToolStripMenuItem->Text = L"设置";
			// 
			// 工具TToolStripMenuItem
			// 
			this->工具TToolStripMenuItem->Name = L"工具TToolStripMenuItem";
			this->工具TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->工具TToolStripMenuItem->Text = L"工具(&T)";
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
			this->Text = L"管理员：XXX 登陆时间：xxx";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
