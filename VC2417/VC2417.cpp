// VC2417.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"
#include "Signin.h"
#include "Patient.h"
#include "Doctor.h"
#include "Admin.h"
#include "JianYanKe.h"
#include "Print.h"
using namespace VC2417;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	//Application::Run(gcnew Signin());
	//Application::Run(gcnew Patient());
	//Application::Run(gcnew JianYanKe());
	Application::Run(gcnew Print());
	return 0;
}
