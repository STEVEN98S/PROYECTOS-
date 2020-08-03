//#include "frmPrincipal.h"
#include "frmPaint.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace PaintView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmPaint ventana;
	Application::Run(%ventana);
}