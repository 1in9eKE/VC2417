#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	/// <summary>
	/// Print 摘要
	/// </summary>
	public ref class Print : public System::Windows::Forms::Form
	{
	public:
		Print(void)
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
		~Print()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Print::typeid));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Print::printDocument1_PrintPage_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(420, 594);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Print::button1_Click);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(133, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"姓名：xxx";
			// 
			// Print
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 594);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Print";
			this->Text = L"Print";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
Bitmap^ memoryImage;
int x;
int y;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		CaptureScreen();
		//printDocument1->Print();
		printPreviewDialog1->Document = printDocument1;   
		printPreviewDialog1->ShowDialog();
	}
	private: void CaptureScreen()
	{
		Graphics^ myGraphics = this->CreateGraphics();
		System::Drawing::Size s = this->pictureBox1->Size;
		memoryImage = gcnew Bitmap(s.Width, s.Height, myGraphics);
		x = s.Width * 2;
		y = s.Height * 2;
		Graphics^ memoryGraphics = Graphics::FromImage(memoryImage);
		memoryGraphics->CopyFromScreen(this->Location.X+7, this->Location.Y+30, 0, 0, s);
	}
	private: System::Void printDocument1_PrintPage_1(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		int newWidth=memoryImage->Width*2-14;
		int newHeight=memoryImage->Height*2-20;
		Bitmap ^newImg = gcnew Bitmap(newWidth, newHeight);
		Graphics ^g = Graphics::FromImage(newImg);
		g->DrawImage(memoryImage, 0, 0, newWidth, newHeight);
		e->Graphics->DrawImage(newImg, 0,0, newWidth, newHeight);
	}
	};
}
