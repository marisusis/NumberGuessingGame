#include "GuessingGame.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	NumberGuessingGame::GuessingGame form;
	Application::Run(%form);
}
