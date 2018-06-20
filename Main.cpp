#include <iostream>
#include "Hangman.h"

using namespace std;

int main()

{
	Hangman h;
	h.saveWord();
	h.loadWord();
	h.Game();
	//h.end();
	system("PAUSE");
	return 0;
}