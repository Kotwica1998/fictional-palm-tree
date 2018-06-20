#include "Hangman.h"



Hangman::Hangman()
{
	loadWord();
	moves_ = 12;
	int L = wordLength();
	this -> tab = new char[L];
	for (int i = 0; i < L; i++) tab[i] = '_';
}

Hangman::~Hangman()
{
	delete tab;
}
void Hangman::loadWord()
{
	ifstream nazwa("jakasnazwa.txt");
	nazwa >> word_;
	//cout << word_;
}
void Hangman::saveWord()
{
	string h;
	cout << "podaj nowe slowo haslo do ogadnienciaaa" << endl;
	cin >> h;
	ofstream nazwa("jakasnazwa.txt");
	nazwa.clear();
	nazwa << h;
}
int Hangman::wordLength()
{
	return word_.size();
}
void Hangman::Game()
{
	do	
	{
			turn();
			end();
	} while (moves_ != 0&& e ==false);
}
void Hangman::turn()
{
	cout << "pozostalo Ci :" << moves_ << "kresek wisielca" << endl;
	cout << "podaj literke" << endl;
	char l;
	bool val=false;
	cin >> l;
	for (int i = 0; i < wordLength(); i++)
	{
		if (word_[i] == l) { tab[i] = l; val = true; }
	}
	if (val == false) moves_--;
	
	
}
void Hangman::end()
{
	e = true;
	for (int i = 0; i < wordLength(); i++)
	{
		cout << tab[i];
		if (tab[i] == '_') e = false;
	}
}