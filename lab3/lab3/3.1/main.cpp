#include "zar.h"

int main()
{
	time_t t;
	t = time(&t);

	int aparitii[6][6] = {0};
	int frecventa[6] = {0};

	//memset(aparitii, 0, 36);
	/*for (int  i = 0 ; i < 6;i++)
	{
		for (int  j = 0 ; j < 6;j++)
		{
			aparitii[i][j] = 0;
		}
	}*/

	srand((unsigned)t);

	CZar z1, z2;


	z1.Arunca();
	z2.Arunca();



	int index_i, index_j;
	index_i = (z1.GetFata() < z2.GetFata()) ? z1.GetFata():z2.GetFata();
	index_j = (z1.GetFata() > z2.GetFata()) ? z1.GetFata():z2.GetFata();

	frecventa[index_i-1]++;
	frecventa[index_j-1]++;
	aparitii[index_i-1][index_j-1]++;

	int maxim_aparitii = aparitii[index_i-1][index_j-1];
	int mim_aparitii = aparitii[index_i-1][index_j-1];
	int maxim_aparitii_consecutive = 0;
	int save_maxim_aparitii = 0;
	int save_i = index_i;
	int save_j = index_j;
	int arunc_ant_i = index_i;
	int arunc_ant_j = index_j;
	int poz_i = 0;
	int poz_j = 0;

	for (int  i = 0 ; i < 8999;i++)
	{
		z1.Arunca();
		z2.Arunca();
		index_i = (z1.GetFata() < z2.GetFata()) ? z1.GetFata():z2.GetFata();
		index_j = (z1.GetFata() > z2.GetFata()) ? z1.GetFata():z2.GetFata();

		frecventa[index_i-1]++;
		frecventa[index_j-1]++;

		aparitii[index_i-1][index_j-1]++;
		if (aparitii[index_i-1][index_j-1] > maxim_aparitii)
		{
			maxim_aparitii = aparitii[index_i-1][index_j-1];
			poz_i = index_i-1;
			poz_j = index_j-1;
		}

		if ((index_i == arunc_ant_i) && (index_j == arunc_ant_j))
		{
			maxim_aparitii_consecutive++;
		}
		else
		{
			if (maxim_aparitii_consecutive > save_maxim_aparitii)
			{
				save_maxim_aparitii = maxim_aparitii_consecutive;
				save_i = index_i;
				save_j = index_j;
			}

			maxim_aparitii_consecutive = 0;
			arunc_ant_i = index_i;
			arunc_ant_j = index_j;
		}


	}


	int min = aparitii[0][0];
	int poz_min_i = 0;
	int poz_min_j = 0;
	for (int  i = 0 ; i < 6;i++)
	{
		for (int  j = i ; j < 6;j++)
		{
			if (aparitii[i][j] < min)
			{
				min = aparitii[i][j];
				poz_min_i = i;
				poz_min_j = j;
			}
		}
	}
	// prima cerinta
	cout<<"perechea de numere cu cele mai multe aparitii "<<maxim_aparitii<< " este<";
	cout<<poz_i+1<<","<<poz_j+1<<">"<<endl;

	// cerinta a doua
	cout<<"perechea de numere cu cele mai multe aparitii consecutive "<<save_maxim_aparitii+1<< " este<";
	cout<<save_i<<","<<save_j<<">"<<endl;

	// cerinta a treia
	cout<<"perechea de numere cu cele mai putine aparitii "<<min<< " este<";
	cout<<poz_min_i+1<<","<<poz_min_j+1<<">"<<endl;

	//cerinta a patra
	int suma = 0;
	for (int  i = 0 ; i < 6;i++)
	{
		cout<<"frecventa de aparitie a fetei "<< i+1<<" este "<<frecventa[i]<<endl;
		suma += frecventa[i];
	}

	cout<<"Am aruncat oare de " <<suma<<" ?"<<endl;

	for (int  i = 0 ; i < 6;i++)
	{
		for (int  j = 0 ; j < 6;j++)
		{
			cout<<aparitii[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
