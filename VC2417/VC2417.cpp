// VC2417.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"
#include "Signin.h"
using namespace VC2417;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	//Application::Run(gcnew Form1());
	Application::Run(gcnew Signin());
	return 0;
}
