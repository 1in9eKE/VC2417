#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// testprint 摘要
	/// </summary>
	public ref class testprint : public System::Windows::Forms::Form
	{
	public:
		testprint(void)
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
		~testprint()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
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
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->SuspendLayout();
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &testprint::printDocument1_PrintPage);
			// 
			// testprint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 354);
			this->Name = L"testprint";
			this->Text = L"testprint";
			this->Load += gcnew System::EventHandler(this, &testprint::testprint_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void testprint_Load(System::Object^  sender, System::EventArgs^  e) {
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // 打印预览对话框
	previewDlg->Document = this->printDocument1;         //设置打印文档对象
	previewDlg->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;
	int left = e->MarginBounds.Left;                   // 左上角X位置
	int top = e->MarginBounds.Top;                   // 左上角Y位置
	int width = e->MarginBounds.Width;                 //有效区域宽度
	int height = e->MarginBounds.Height;             // 有效区域高度
	// 打印页头(宋体,26号)
	Drawing::Font^ headerFont = gcnew Drawing::Font(L"宋体", 26, FontStyle::Bold);
	g->DrawString(L"检验报告单", headerFont, Brushes::Black, left + 220, top);
	top += 50;
	//相关信息
	String^ time = String::Format("打印日期：{0}", DateTime::Now.ToString());
	//String^ name = String::Format("姓名：{0}" );
	//
	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);	
	Drawing::Font^ usualfont = gcnew Drawing::Font(L"宋体", 9);
	Drawing::Font^ imformation = gcnew Drawing::Font(L"宋体", 10);
	g->DrawString(time, usualfont, Brushes::Black, left + 440, top);
	g->DrawLine(tablesPen, left, top + 15, left + width, top + 15);
	g->DrawString(L"姓名：", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"性别：", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"年龄：", imformation, Brushes::Black, left + 300, top + 20);
	g->DrawString(L"送检医生：", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(L"科别：", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"仪器：", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"送检单号：", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(L"诊断：", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"样本编号：", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"样本类别：", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawLine(tablesPen, left, top + 20, left + width, top + 20);
	g->DrawString(L"项目", imformation, Brushes::Black, left + 50, top + 25);
	g->DrawString(L"结果", imformation, Brushes::Black, left + 280, top + 25);
	g->DrawString(L"参考值", imformation, Brushes::Black, left + 480, top + 25);
	g->DrawLine(tablesPen, left, top + 40, left + width, top + 40);
	top += 45;
	////项目 //结果 //参考值
	g->DrawString(L"项目", imformation, Brushes::Black, left, top );
	g->DrawString(L"结果", imformation, Brushes::Black, left + 280, top );
	g->DrawString(L"参考值", imformation, Brushes::Black, left + 480, top );
	top = e->MarginBounds.Top;                   // 左上角Y位置
	top = top + height - 65;
	g->DrawString(L"建议和解释：", imformation, Brushes::Black, left, top -20);
	g->DrawLine(tablesPen, left, top, left + width, top);
	g->DrawString(L"取样时间：", usualfont, Brushes::Black, left, top + 5);
	g->DrawString(L"检验时间：", usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(L"检验者：", usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"录入时间：", usualfont, Brushes::Black, left, top + 5);
	g->DrawString(L"审核时间：", usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(L"审核者：", usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"注：本报告只对此份样本负责，如有疑问，请在报告发出五日内联系相关医师！", usualfont, Brushes::Black, left, top + 5);
	e->HasMorePages = false;
}
	};
}
