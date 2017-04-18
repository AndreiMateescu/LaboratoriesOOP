#include"complex.h"


void functie_test()
{
	int n;
	complex z[100]; // tabloul numerelor complexe 
	cout << "\n n=";
		cin >>n;

		for (int i=1; i<=n; i++)
		{ // citirea celor n numere complexe
			cout<<"z"<<i<<endl;
				cin >> z[i];
		}
	
	complex impare;
	complex pare;
	complex rez;
	for(int i=1; i<=n; i++)
	if(i%2==0)
	{ // i este par 
		z[i] = z[i]^4;
		pare = pare + z[i];
	}
	else
	{// i este impar
		z[i] = z[i]^3;
		impare = impare + z[i];
	}
	rez = impare/pare; // calculare rezultat
	cout<<"\n Rezultatul este "<<rez;
}

int main ()
{
	functie_test ();
}