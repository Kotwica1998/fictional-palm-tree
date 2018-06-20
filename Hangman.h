#pragma once
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
class Hangman
{
	string word_;
	int moves_;
	char* tab;
	bool e;
public:
	Hangman();
	~Hangman();
	void loadWord();
	void saveWord();
	int wordLength();
	void Game();
	void turn();
	void end();
};

