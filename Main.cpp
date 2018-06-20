#include <iostream>
#include "Hangman.h"

using namespace std;

int main()

{
	//pisze tu komentarz z 14 pracy na zajenciach xD
	Hangman h;
	h.saveWord();
	h.loadWord();
	h.Game();
	//h.end();
	system("PAUSE");
	return 0;
}