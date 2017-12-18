#pragma once

namespace VC2417 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// testprint ժҪ
	/// </summary>
	public ref class testprint : public System::Windows::Forms::Form
	{
	public:
		testprint(void)
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
	PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); // ��ӡԤ���Ի���
	previewDlg->Document = this->printDocument1;         //���ô�ӡ�ĵ�����
	previewDlg->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;
	int left = e->MarginBounds.Left;                   // ���Ͻ�Xλ��
	int top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��
	int width = e->MarginBounds.Width;                 //��Ч������
	int height = e->MarginBounds.Height;             // ��Ч����߶�
	// ��ӡҳͷ(����,26��)
	Drawing::Font^ headerFont = gcnew Drawing::Font(L"����", 26, FontStyle::Bold);
	g->DrawString(L"���鱨�浥", headerFont, Brushes::Black, left + 220, top);
	top += 50;
	//�����Ϣ
	String^ time = String::Format("��ӡ���ڣ�{0}", DateTime::Now.ToString());
	//String^ name = String::Format("������{0}" );
	//
	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);	
	Drawing::Font^ usualfont = gcnew Drawing::Font(L"����", 9);
	Drawing::Font^ imformation = gcnew Drawing::Font(L"����", 10);
	g->DrawString(time, usualfont, Brushes::Black, left + 440, top);
	g->DrawLine(tablesPen, left, top + 15, left + width, top + 15);
	g->DrawString(L"������", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"�Ա�", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"���䣺", imformation, Brushes::Black, left + 300, top + 20);
	g->DrawString(L"�ͼ�ҽ����", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(L"�Ʊ�", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"������", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"�ͼ쵥�ţ�", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawString(L"��ϣ�", imformation, Brushes::Black, left, top + 20);
	g->DrawString(L"������ţ�", imformation, Brushes::Black, left + 150, top + 20);
	g->DrawString(L"�������", imformation, Brushes::Black, left + 450, top + 20);
	top += 20;
	g->DrawLine(tablesPen, left, top + 20, left + width, top + 20);
	g->DrawString(L"��Ŀ", imformation, Brushes::Black, left + 50, top + 25);
	g->DrawString(L"���", imformation, Brushes::Black, left + 280, top + 25);
	g->DrawString(L"�ο�ֵ", imformation, Brushes::Black, left + 480, top + 25);
	g->DrawLine(tablesPen, left, top + 40, left + width, top + 40);
	top += 45;
	////��Ŀ //��� //�ο�ֵ
	g->DrawString(L"��Ŀ", imformation, Brushes::Black, left, top );
	g->DrawString(L"���", imformation, Brushes::Black, left + 280, top );
	g->DrawString(L"�ο�ֵ", imformation, Brushes::Black, left + 480, top );
	top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��
	top = top + height - 65;
	g->DrawString(L"����ͽ��ͣ�", imformation, Brushes::Black, left, top -20);
	g->DrawLine(tablesPen, left, top, left + width, top);
	g->DrawString(L"ȡ��ʱ�䣺", usualfont, Brushes::Black, left, top + 5);
	g->DrawString(L"����ʱ�䣺", usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(L"�����ߣ�", usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"¼��ʱ�䣺", usualfont, Brushes::Black, left, top + 5);
	g->DrawString(L"���ʱ�䣺", usualfont, Brushes::Black, left + 250, top + 5);
	g->DrawString(L"����ߣ�", usualfont, Brushes::Black, left + 480, top + 5);
	top += 20;
	g->DrawString(L"ע��������ֻ�Դ˷����������������ʣ����ڱ��淢����������ϵ���ҽʦ��", usualfont, Brushes::Black, left, top + 5);
	e->HasMorePages = false;
}
	};
}
