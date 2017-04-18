#include <iostream>
#include <string>

using namespace std;

class Carte
{
	string titlu;
	string autor;
	string editura;
	string ISBN;
	int an_aparitie;
	float pret;
public:
	void Citire();
	void Afisare ();
	string getTitlu () { return titlu;}
	string getEditura () { return editura;}
	string getISBN () { return ISBN;}
};

void cautaCarte (string, int, Carte*, int);