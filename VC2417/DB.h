#pragma once

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
	/// DB ժҪ
	/// </summary>
	public ref class DB : public System::Windows::Forms::Form
	{
	public:
		DB(void)
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
		~DB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ݿ�ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ݿ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 25);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer1->Size = System::Drawing::Size(874, 512);
			this->splitContainer1->SplitterDistance = 48;
			this->splitContainer1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(633, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"��ѯ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DB::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(453, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 29);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(123, 11);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 27);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DB::On_SelChange);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(385, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"���";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(35, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ѡ���";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(874, 460);
			this->dataGridView1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�ļ�FToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(874, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ݿ�ToolStripMenuItem });
			this->�ļ�FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->�ļ�FToolStripMenuItem->MergeIndex = 0;
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			// 
			// �����ݿ�ToolStripMenuItem
			// 
			this->�����ݿ�ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->�����ݿ�ToolStripMenuItem->MergeIndex = 4;
			this->�����ݿ�ToolStripMenuItem->Name = L"�����ݿ�ToolStripMenuItem";
			this->�����ݿ�ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->�����ݿ�ToolStripMenuItem->Text = L"�����ݿ�";
			this->�����ݿ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DB::On_DBOpen);
			// 
			// DB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 537);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"DB";
			this->Text = L"DB";
			this->Load += gcnew System::EventHandler(this, &DB::DB_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: String^ strConn;
private:String^ strTableName;
private: System::Void On_DBOpen(System::Object^  sender, System::EventArgs^  e) {

	OpenFileDialog^  pOFD = gcnew OpenFileDialog();

	pOFD->Filter = "Access�ļ�(*.mdb)|*.mdb";

	pOFD->DefaultExt = "mdb";

	if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

	strConn = String::Format(

		"Provider=Microsoft.Jet.OLEDB.4.0; DataSource={0}", pOFD->FileName);

	OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

	con1->Open();    // ������

					 // �����Ͽ���б���

	this->comboBox1->Items->Clear();

	// ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��

	// ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��

	array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};

	DataTable^table = con1->GetOleDbSchemaTable(

		OleDbSchemaGuid::Tables, strs);       // ��ȡ���ݱ���

	if (table->Rows->Count > 0)

	{

		for each(DataRow^ row in table->Rows)

		{

			this->comboBox1->Items->Add(row["TABLE_NAME"]);

		}

		this->comboBox1->SelectedIndex = 0;

	}

	con1->Close();

}
private: System::Void DB_Load(System::Object^  sender, System::EventArgs^  e) {
	OleDbConnection^ con1 = gcnew OleDbConnection(strConn);

	con1->Open();    // ������

						// �����Ͽ���б���

	this->comboBox1->Items->Clear();

	// ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��

	// ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��

	array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};

	DataTable^table = con1->GetOleDbSchemaTable(

		OleDbSchemaGuid::Tables, strs);       // ��ȡ���ݱ���

	if (table->Rows->Count > 0)

	{

		for each(DataRow^ row in table->Rows)

		{
			if (row["TABLE_NAME"]->ToString()->Substring(0,1)!="~")
				this->comboBox1->Items->Add(row["TABLE_NAME"]);

		}

		this->comboBox1->SelectedIndex = 0;

	}

	con1->Close();
}
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {

	int nIndex = this->comboBox1->SelectedIndex;

	if (nIndex < 0) return;

	// ��ȡѡ������ݱ���

	strTableName = this->comboBox1->Items[nIndex]->ToString();

	// ʹ��DataAdapter��DataSet

	String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

	OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);

	DataSet^ theSet1 = gcnew DataSet();

	da1->Fill(theSet1, "Test");         // ����ָ��������

	this->dataGridView1->DataSource = theSet1;

	this->dataGridView1->DataMember = "Test"; // ָ��Ҫ�򿪵ı�

	/* ֱ��ʹ�ñ�

	DataTable^ table = gcnew DataTable;

	da1->Fill( table );

	this->dataGridView1->DataSource =table;*/

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox1->Text->Trim() == "") return;
	String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);
	OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);
	DataTable^ table = gcnew DataTable();
	da1->Fill(table);         // ����ָ��������
	DataRow^ selrow;
	for each(DataRow^ row in table->Rows) {
		if (row[0]->ToString() == this->textBox1->Text->Trim())
			
			selrow = row;
	}
	DataTable^ seltable = gcnew DataTable();
	seltable->Rows->Clear();
	seltable->Rows->Add(selrow);
	this->dataGridView1->DataSource = seltable;
}
};
}
