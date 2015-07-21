#include "GuessingGame.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;
using namespace std; //if problems occur, then remove using namespace std

int num;
int guess[7];

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	NumberGuessingGame::GuessingGame form;
	Application::Run(%form);
}
int main() {
	srand((unsigned int)time(0));
	num = rand() % 100;
	for ( int i=0; i<8; i++ ) {
		
	}
}
void setGuess(int numguess, int guess) {

}