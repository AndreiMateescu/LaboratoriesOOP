#ifndef LOTO_H
#define LOTO_H
#include <iostream>
#include "Bila.h"
using namespace std;

//clasa pentru joc loto
class Loto
{
public:
	//proprietati 

	//metode
	Loto(); //constructor
	void startJoc (); //rulare joc
private:
	//proprietati
	Bila bile[50]; //vectorul celor 49 de bile

	//metode
	Bila extrage(); //extragere bila
};
#endif