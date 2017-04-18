#include "carteJoc.h"
#include<time.h>
#include<stdlib.h>

int main ()
{
	time_t t;
	time (&t);
	srand (t);
	string suite[] = {"trefla", "romb", "inima neagra", "inima rosie"};
	//CarteJoc joker ("joker", 15);
	CarteJoc *pachet;
	pachet = new CarteJoc[52];

	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 4;j++)
		{
			pachet [i+j*13].init (suite[j], i+1);
		}
	}

	int suma1 = 0;
	int suma2 = 0;

	while (true)
	{
		int nr = rand () % 52;
		if (!pachet[nr].getStare ())
		{
			pachet[nr].setStare ();
			suma1 += pachet[nr].getValoare ();
		}

		nr = rand () % 52;
		if (!pachet[nr].getStare ())
		{
			pachet[nr].setStare ();
			suma2 += pachet[nr].getValoare ();
		}


		if (suma1 == 21)
		{
			cout<<"Jucatorul 1 a castigat!"<<endl;
			break;
		}
		if (suma2 == 21)
		{
			cout<<"Jucatorul 2 a castigat!"<<endl;
			break;
		}
		if (suma1 > 21)
		{
			cout<<"Jucatorul 2 a castigat!"<<endl;
			break;
		}
		if (suma2 > 21)
		{
			cout<<"Jucatorul 1 a castigat!"<<endl;
			break;
		}

	}

	/*for (int i = 0; i < 52; i++)
	{
		pachet[i].afisare ();
	}*/

	delete [] pachet;
}
