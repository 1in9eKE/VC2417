#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// DBset ժҪ
	/// </summary>
	public ref class DBset : public System::Windows::Forms::Form
	{
	public:
		DBset(void)
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
		~DBset()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(81, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ȷ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DBset::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(295, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 0;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DBset::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(182, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 29);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(182, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 29);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(182, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 29);
			this->textBox3->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(182, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 29);
			this->textBox4->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(52, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(52, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"��½�˻���";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(52, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"�˻����룺";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(52, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 19);
			this->label4->TabIndex = 2;
			this->label4->Text = L"���ݿ�����";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 12);
			this->label5->TabIndex = 3;
			this->label5->Text = L"��ȷ�������ݿ��еı�ṹ���ϳ���Ҫ��";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(232, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 12);
			this->label6->TabIndex = 3;
			this->label6->Text = L"����Ҫ����鿴README.txt";
			// 
			// DBset
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 388);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DBset";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"���ݿ���������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:String^ strConn = "Provider=Microsoft.Jet.OLEDB.4.0; Data Source=DB.mdb";
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show(L"�����˲�����ʹ��Ĭ�����ݿ⣬�޷���̨���Թ������ݣ��Ƿ�ȷ��������", "��ʾ", MessageBoxButtons::YesNo)) {
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Close();
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		strConn = String::Format(L"Provider=SQLNCLI11;Data Source={0};Password={1};User ID={2};Initial Catalog={3}", this->textBox1->Text, this->textBox3->Text, this->textBox2->Text, this->textBox4->Text);

	}
	};
}
