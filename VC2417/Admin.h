#pragma once
#include "Change.h"
#include "Analyse.h"
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
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����WToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����AToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  �޸��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͳ�Ʒ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ݿ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
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
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ݿ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����WToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�޸��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͳ�Ʒ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
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
				this->�ļ�FToolStripMenuItem,
					this->����WToolStripMenuItem, this->����TToolStripMenuItem, this->����HToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����WToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(969, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ݿ�ToolStripMenuItem,
					this->toolStripSeparator1, this->����ToolStripMenuItem, this->toolStripSeparator2, this->�˳�XToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// �������ݿ�ToolStripMenuItem
			// 
			this->�������ݿ�ToolStripMenuItem->Name = L"�������ݿ�ToolStripMenuItem";
			this->�������ݿ�ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�������ݿ�ToolStripMenuItem->Text = L"�������ݿ�";
			this->�������ݿ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::�������ݿ�ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(133, 6);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(133, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳�(&X)";
			this->�˳�XToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::�˳�XToolStripMenuItem_Click);
			// 
			// ����WToolStripMenuItem
			// 
			this->����WToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�޸��������ToolStripMenuItem,
					this->ͳ�Ʒ���ToolStripMenuItem
			});
			this->����WToolStripMenuItem->Name = L"����WToolStripMenuItem";
			this->����WToolStripMenuItem->Size = System::Drawing::Size(64, 21);
			this->����WToolStripMenuItem->Text = L"����(&W)";
			// 
			// �޸��������ToolStripMenuItem
			// 
			this->�޸��������ToolStripMenuItem->Name = L"�޸��������ToolStripMenuItem";
			this->�޸��������ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->�޸��������ToolStripMenuItem->Text = L"�޸�/��Ӵ���";
			this->�޸��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::�޸��������ToolStripMenuItem_Click);
			// 
			// ͳ�Ʒ���ToolStripMenuItem
			// 
			this->ͳ�Ʒ���ToolStripMenuItem->Name = L"ͳ�Ʒ���ToolStripMenuItem";
			this->ͳ�Ʒ���ToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->ͳ�Ʒ���ToolStripMenuItem->Text = L"ͳ�Ʒ�������";
			this->ͳ�Ʒ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::ͳ�Ʒ���ToolStripMenuItem_Click);
			// 
			// ����TToolStripMenuItem
			// 
			this->����TToolStripMenuItem->Name = L"����TToolStripMenuItem";
			this->����TToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->����TToolStripMenuItem->Text = L"����(&T)";
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����AToolStripMenuItem });
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->����HToolStripMenuItem->Text = L"����(&H)";
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
			this->Text = L"����Ա��XXX ��½ʱ�䣺xxx";
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
private: System::Void �޸��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void ͳ�Ʒ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
		Adlg->MdiParent = this;
		Adlg->Name = "Adlg";
		Adlg->Show();
	}
	
}
private: System::Void �˳�XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void �������ݿ�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^  pOFD = gcnew OpenFileDialog();
	pOFD->Filter = "Access�ļ�(*.mdb)|*.mdb";
	pOFD->DefaultExt = "mdb";
	if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
	strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
	Cdlg->strconn = this->strConn;
}
private: System::Void Admin_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
}
private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
	this->Text = String::Format("����Ա�� {0}  ��½ʱ�䣺 {1} ", ID, DateTime::Now.ToString());
}
};
}
