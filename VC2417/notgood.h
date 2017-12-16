#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// notgood 摘要
	/// </summary>
	public ref class notgood : public System::Windows::Forms::Form
	{
	public:
		notgood(void)
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
		~notgood()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"回退理由：";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(83, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(263, 180);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 2;
			this->button1->Text = L"确认回退";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &notgood::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(271, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &notgood::button2_Click);
			// 
			// notgood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 270);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"notgood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"回退";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();
	}
};
}
