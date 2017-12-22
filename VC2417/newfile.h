#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// newfile 摘要
	/// </summary>
	public ref class newfile : public System::Windows::Forms::Form
	{
	public:
		newfile(void)
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
		~newfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
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
	private: System::Windows::Forms::ToolStripMenuItem^  格式ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  颜色ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(newfile::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
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
			this->格式ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->编辑EToolStripMenuItem, this->格式ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(787, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->打开OToolStripMenuItem,
					this->toolStripSeparator, this->保存SToolStripMenuItem, this->另存为AToolStripMenuItem, this->toolStripSeparator1, this->退出XToolStripMenuItem
			});
			this->文件FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->文件FToolStripMenuItem->MergeIndex = 0;
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打开OToolStripMenuItem.Image")));
			this->打开OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打开OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打开OToolStripMenuItem->MergeIndex = 4;
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->打开OToolStripMenuItem->Text = L"打开(&O)";
			this->打开OToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::打开OToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator->MergeIndex = 5;
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(162, 6);
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripMenuItem.Image")));
			this->保存SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->保存SToolStripMenuItem->MergeIndex = 6;
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::保存SToolStripMenuItem_Click);
			// 
			// 另存为AToolStripMenuItem
			// 
			this->另存为AToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->另存为AToolStripMenuItem->MergeIndex = 7;
			this->另存为AToolStripMenuItem->Name = L"另存为AToolStripMenuItem";
			this->另存为AToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->另存为AToolStripMenuItem->Text = L"另存为(&A)";
			this->另存为AToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::另存为AToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator1->MergeIndex = 8;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(162, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->退出XToolStripMenuItem->MergeIndex = 11;
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->退出XToolStripMenuItem->Text = L"关闭文档";
			this->退出XToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::退出XToolStripMenuItem_Click);
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
			this->编辑EToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &newfile::编辑EToolStripMenuItem_DropDownItemClicked);
			// 
			// 撤消UToolStripMenuItem
			// 
			this->撤消UToolStripMenuItem->Name = L"撤消UToolStripMenuItem";
			this->撤消UToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->撤消UToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->撤消UToolStripMenuItem->Text = L"撤消(&U)";
			// 
			// 重复RToolStripMenuItem
			// 
			this->重复RToolStripMenuItem->Name = L"重复RToolStripMenuItem";
			this->重复RToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->重复RToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->重复RToolStripMenuItem->Text = L"重复(&R)";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(158, 6);
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切TToolStripMenuItem.Image")));
			this->剪切TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->剪切TToolStripMenuItem->Text = L"剪切(&T)";
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripMenuItem.Image")));
			this->复制CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->复制CToolStripMenuItem->Text = L"复制(&C)";
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripMenuItem.Image")));
			this->粘贴PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(&P)";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(158, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->全选AToolStripMenuItem->Text = L"全选(&A)";
			// 
			// 格式ToolStripMenuItem
			// 
			this->格式ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->字体ToolStripMenuItem,
					this->颜色ToolStripMenuItem
			});
			this->格式ToolStripMenuItem->Name = L"格式ToolStripMenuItem";
			this->格式ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->格式ToolStripMenuItem->Text = L"格式";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->字体ToolStripMenuItem->Text = L"字体";
			this->字体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::字体ToolStripMenuItem_Click);
			// 
			// 颜色ToolStripMenuItem
			// 
			this->颜色ToolStripMenuItem->Name = L"颜色ToolStripMenuItem";
			this->颜色ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->颜色ToolStripMenuItem->Text = L"颜色";
			this->颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::颜色ToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(787, 550);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// newfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 575);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"newfile";
			this->Text = L"newfile";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &newfile::newfile_FormClosing);
			this->Load += gcnew System::EventHandler(this, &newfile::newfile_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: String ^filename;//编辑的文件名
public: property String ^FileName//属性：用于读写文件名字段，公开给其他类使用
{       //修改文件名时，要同时重新载入相应文件到richTextBox中，并且更改标题
	void set(String ^name)
	{
		filename = name;
		if (Path::GetExtension(filename) == ".rtf" || Path::GetExtension(filename) == ".mtxt") {
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::RichText);//重新载入相应文件到richTextBox中
		}
		else if (Path::GetExtension(filename) == ".txt") {
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::PlainText);//重新载入相应文件到richTextBox中
		}
		this->Text = filename + "—编辑器";       //更改标题
	}
	String^ get()
	{
		return filename;
	}
}
private: System::Void 打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //获取通用对话框的输入
	//openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";
	openFileDialog1->Filter = "我的文档(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|文本文件(*.txt)|*.txt";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try {

		if (dlg == System::Windows::Forms::DialogResult::OK)

		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf" || Path::GetExtension(openFileDialog1->FileName) == ".mtxt" || Path::GetExtension(openFileDialog1->FileName) == ".txt") {  //使用Path类需在前面添加using namespace System::IO;
				filename = openFileDialog1->FileName;
				this->FileName = filename;
			}
			else MessageBox::Show(L"选择的不是mtxt、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
		}
	}
	catch (System::ArgumentException ^e) {
		MessageBox::Show(L"打开文件出错！", "错误", MessageBoxButtons::OK);
	}
}
private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void newfile_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;
}
bool DoModified()
{
	if (this->richTextBox1->Modified == false)return true;
	System::Windows::Forms::DialogResult dlg;
	dlg = MessageBox::Show(L"当前文件中的内容有修改，需要保存吗？", "多文档编辑器", MessageBoxButtons::YesNoCancel);
	if (dlg == System::Windows::Forms::DialogResult::Yes)
	{
		保存SToolStripMenuItem_Click(nullptr, nullptr);
		return true;
	}
	if (dlg == System::Windows::Forms::DialogResult::No)return true;
	if (dlg == System::Windows::Forms::DialogResult::Cancel)return false;
	return false;
}
private: System::Void 另存为AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	saveFileDialog1->Filter = "我的文本文件(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|文本文件(*.txt)|*.txt";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->DefaultExt = ".mtxt";
	dlg = saveFileDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		filename = saveFileDialog1->FileName;
	else return;
	try {
		if (Path::GetExtension(saveFileDialog1->FileName) == ".rtf"
			|| Path::GetExtension(saveFileDialog1->FileName) == ".mtxt")  //使用Path类需在前面添加using namespace System::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--多文档编辑器";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(saveFileDialog1->FileName) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--多文档编辑器";
				richTextBox1->Modified = false;
			}
			else MessageBox::Show(L"选择的不是MTXT、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
	}
	catch (IOException^e)
	{
		String^Message = "无法保存" + filename;
		MessageBox::Show(Message, "保存出错", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->Text = filename;
}
private: System::Void 保存SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (filename == nullptr)
		另存为AToolStripMenuItem_Click(this, e);
	else
		try {
		if (Path::GetExtension(filename) == ".rtf"
			|| Path::GetExtension(filename) == ".mtxt") //使用Path类需在前面添加using namespaceSystem::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--多文档编辑器";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(filename) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--多文档编辑器";
				richTextBox1->Modified = false;
			}
		else MessageBox::Show(L"选择的不是MTXT、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
	}
	catch (IOException^e)
	{
		String ^Message = "无法保存" + filename;
		MessageBox::Show(Message, "保存出错", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void newfile_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	e->Cancel = !DoModified();
}
private: System::Void 编辑EToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == 撤消UToolStripMenuItem)
		this->richTextBox1->Undo();//撤销
	else if (item == 重复RToolStripMenuItem)
		this->richTextBox1->Redo();//重复
	else if (item == 剪切TToolStripMenuItem)
		this->richTextBox1->Cut();//剪切
	else if (item == 复制CToolStripMenuItem)
		this->richTextBox1->Copy();//复制
	else if (item == 粘贴PToolStripMenuItem)
		this->richTextBox1->Paste();//粘贴
	else if (item == 全选AToolStripMenuItem)
		this->richTextBox1->SelectAll();//全选	
}
private: System::Void 字体ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = fontDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionFont = fontDialog1->Font;
}

private: System::Void 颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = colorDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionColor = colorDialog1->Color;
}
};
}
