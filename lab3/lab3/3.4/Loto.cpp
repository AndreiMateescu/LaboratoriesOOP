#include "Loto.h"
#include <iostream>
#include <string>
#include <cstdlib>

Loto::Loto()
{
	//creare vector de bile
	for (int i=1; i<=49; i++)
	{
		this->bile[i].valoare = i; //valoare
		this->bile[i].extrasa = false; //stare initiala
	}
}

Bila Loto::extrage()
{
	int nr;
	do
	{
		nr = 1 + rand()% 48;
	} while (this->bile[nr].extrasa == true);
	//se alege (random) o bila pana se gaseste una care nu a fost jucata
	
	this->bile[nr].extrasa = true;
	// returneaza bila extrasa
	return this->bile[nr];
}

void Loto::startJoc()
{
	//extragere bile
	for(int i=1; i<=6; i++)
		cout<<this->extrage().valoare<<" ";
}



