#include "Loto.h"
#include <ctime>
#include<stdlib.h>

int main ()
{
	srand(time(0));
	//initializare functie rand
	Loto joc;
	//instantiere variabila tip loto
	cout<<"\n Bilele extrase sunt : ";
	//extragere bile
	joc.startJoc();
	return 0;
}
