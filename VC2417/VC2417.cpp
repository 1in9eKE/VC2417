// VC2417.cpp: 主项目文件。

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
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 创建主窗口并运行它
	//Application::Run(gcnew Signin());
	//Application::Run(gcnew Patient());
	//Application::Run(gcnew JianYanKe());
	Application::Run(gcnew Print());
	return 0;
}
