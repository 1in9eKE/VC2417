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
	/// newfile ժҪ
	/// </summary>
	public ref class newfile : public System::Windows::Forms::Form
	{
	public:
		newfile(void)
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
		~newfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ΪAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
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
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ɫToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(newfile::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ΪAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
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
			this->��ʽToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ɫToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�ļ�FToolStripMenuItem,
					this->�༭EToolStripMenuItem, this->��ʽToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(787, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��OToolStripMenuItem,
					this->toolStripSeparator, this->����SToolStripMenuItem, this->���ΪAToolStripMenuItem, this->toolStripSeparator1, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->�ļ�FToolStripMenuItem->MergeIndex = 0;
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��OToolStripMenuItem.Image")));
			this->��OToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��OToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->��OToolStripMenuItem->MergeIndex = 4;
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->��OToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			this->��OToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::��OToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator->MergeIndex = 5;
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(162, 6);
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����SToolStripMenuItem.Image")));
			this->����SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->����SToolStripMenuItem->MergeIndex = 6;
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->����SToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			this->����SToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::����SToolStripMenuItem_Click);
			// 
			// ���ΪAToolStripMenuItem
			// 
			this->���ΪAToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->���ΪAToolStripMenuItem->MergeIndex = 7;
			this->���ΪAToolStripMenuItem->Name = L"���ΪAToolStripMenuItem";
			this->���ΪAToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->���ΪAToolStripMenuItem->Text = L"���Ϊ(&A)";
			this->���ΪAToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::���ΪAToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator1->MergeIndex = 8;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(162, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->�˳�XToolStripMenuItem->MergeIndex = 11;
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->�˳�XToolStripMenuItem->Text = L"�ر��ĵ�";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::�˳�XToolStripMenuItem_Click);
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
			this->�༭EToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &newfile::�༭EToolStripMenuItem_DropDownItemClicked);
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
			// ��ʽToolStripMenuItem
			// 
			this->��ʽToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->��ɫToolStripMenuItem
			});
			this->��ʽToolStripMenuItem->Name = L"��ʽToolStripMenuItem";
			this->��ʽToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->��ʽToolStripMenuItem->Text = L"��ʽ";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::����ToolStripMenuItem_Click);
			// 
			// ��ɫToolStripMenuItem
			// 
			this->��ɫToolStripMenuItem->Name = L"��ɫToolStripMenuItem";
			this->��ɫToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->��ɫToolStripMenuItem->Text = L"��ɫ";
			this->��ɫToolStripMenuItem->Click += gcnew System::EventHandler(this, &newfile::��ɫToolStripMenuItem_Click);
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
private: String ^filename;//�༭���ļ���
public: property String ^FileName//���ԣ����ڶ�д�ļ����ֶΣ�������������ʹ��
{       //�޸��ļ���ʱ��Ҫͬʱ����������Ӧ�ļ���richTextBox�У����Ҹ��ı���
	void set(String ^name)
	{
		filename = name;
		if (Path::GetExtension(filename) == ".rtf" || Path::GetExtension(filename) == ".mtxt") {
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::RichText);//����������Ӧ�ļ���richTextBox��
		}
		else if (Path::GetExtension(filename) == ".txt") {
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::PlainText);//����������Ӧ�ļ���richTextBox��
		}
		this->Text = filename + "���༭��";       //���ı���
	}
	String^ get()
	{
		return filename;
	}
}
private: System::Void ��OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^filename;
	System::Windows::Forms::DialogResult dlg;   //��ȡͨ�öԻ��������
	//openFileDialog1->InitialDirectory = "E:\\C++\\VCPP\\";
	openFileDialog1->Filter = "�ҵ��ĵ�(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|�ı��ļ�(*.txt)|*.txt";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName = "";
	dlg = openFileDialog1->ShowDialog();
	try {

		if (dlg == System::Windows::Forms::DialogResult::OK)

		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".rtf" || Path::GetExtension(openFileDialog1->FileName) == ".mtxt" || Path::GetExtension(openFileDialog1->FileName) == ".txt") {  //ʹ��Path������ǰ�����using namespace System::IO;
				filename = openFileDialog1->FileName;
				this->FileName = filename;
			}
			else MessageBox::Show(L"ѡ��Ĳ���mtxt��RTF��TXT��ʽ���ļ�����Ч", "����", MessageBoxButtons::OK);
		}
	}
	catch (System::ArgumentException ^e) {
		MessageBox::Show(L"���ļ�����", "����", MessageBoxButtons::OK);
	}
}
private: System::Void �˳�XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void newfile_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;
}
bool DoModified()
{
	if (this->richTextBox1->Modified == false)return true;
	System::Windows::Forms::DialogResult dlg;
	dlg = MessageBox::Show(L"��ǰ�ļ��е��������޸ģ���Ҫ������", "���ĵ��༭��", MessageBoxButtons::YesNoCancel);
	if (dlg == System::Windows::Forms::DialogResult::Yes)
	{
		����SToolStripMenuItem_Click(nullptr, nullptr);
		return true;
	}
	if (dlg == System::Windows::Forms::DialogResult::No)return true;
	if (dlg == System::Windows::Forms::DialogResult::Cancel)return false;
	return false;
}
private: System::Void ���ΪAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	saveFileDialog1->Filter = "�ҵ��ı��ļ�(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|�ı��ļ�(*.txt)|*.txt";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->DefaultExt = ".mtxt";
	dlg = saveFileDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		filename = saveFileDialog1->FileName;
	else return;
	try {
		if (Path::GetExtension(saveFileDialog1->FileName) == ".rtf"
			|| Path::GetExtension(saveFileDialog1->FileName) == ".mtxt")  //ʹ��Path������ǰ�����using namespace System::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--���ĵ��༭��";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(saveFileDialog1->FileName) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--���ĵ��༭��";
				richTextBox1->Modified = false;
			}
			else MessageBox::Show(L"ѡ��Ĳ���MTXT��RTF��TXT��ʽ���ļ�����Ч", "����", MessageBoxButtons::OK);
	}
	catch (IOException^e)
	{
		String^Message = "�޷�����" + filename;
		MessageBox::Show(Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->Text = filename;
}
private: System::Void ����SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (filename == nullptr)
		���ΪAToolStripMenuItem_Click(this, e);
	else
		try {
		if (Path::GetExtension(filename) == ".rtf"
			|| Path::GetExtension(filename) == ".mtxt") //ʹ��Path������ǰ�����using namespaceSystem::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--���ĵ��༭��";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(filename) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--���ĵ��༭��";
				richTextBox1->Modified = false;
			}
		else MessageBox::Show(L"ѡ��Ĳ���MTXT��RTF��TXT��ʽ���ļ�����Ч", "����", MessageBoxButtons::OK);
	}
	catch (IOException^e)
	{
		String ^Message = "�޷�����" + filename;
		MessageBox::Show(Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void newfile_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	e->Cancel = !DoModified();
}
private: System::Void �༭EToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;
	if (e == nullptr)
		item = safe_cast<ToolStripMenuItem^>(sender);
	else
		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == ����UToolStripMenuItem)
		this->richTextBox1->Undo();//����
	else if (item == �ظ�RToolStripMenuItem)
		this->richTextBox1->Redo();//�ظ�
	else if (item == ����TToolStripMenuItem)
		this->richTextBox1->Cut();//����
	else if (item == ����CToolStripMenuItem)
		this->richTextBox1->Copy();//����
	else if (item == ճ��PToolStripMenuItem)
		this->richTextBox1->Paste();//ճ��
	else if (item == ȫѡAToolStripMenuItem)
		this->richTextBox1->SelectAll();//ȫѡ	
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = fontDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionFont = fontDialog1->Font;
}

private: System::Void ��ɫToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = colorDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionColor = colorDialog1->Color;
}
};
}
