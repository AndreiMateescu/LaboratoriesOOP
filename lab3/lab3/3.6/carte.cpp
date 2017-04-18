#include "carte.h"

void Carte::Citire()
{
	cout<<"titlu"<<" ";
	cin>>titlu;
	cout<<"autor"<<" ";
	cin>>autor;
	cout<<"editura"<<" ";
	cin>>editura;
	cout<<"ISBN"<<" ";
	cin>>ISBN;
	cout<<"an_aparitie"<<" ";
	cin>>an_aparitie;
	cout<<"pret"<<" ";
	cin>>pret;
}

void Carte::Afisare ()
{
	cout<<titlu<<" ";
	cout<<autor<<" ";
	cout<<editura<<" ";
	cout<<ISBN<<" ";
	cout<<an_aparitie<<" ";
	cout<<pret<<endl;
}

void cautaCarte (string str, int n, Carte* v_carti, int tip) 
{
	// tip = 0 - cautare dupa titlu 
	// tip = 1 - cautare dupa editura
	// tip = 2 - cautare dupa ISBN
	switch (tip)
	{
	case 0:
		for (int i = 0; i < n;i++)
		{
			if (v_carti[i].getTitlu () == str)
			{
				v_carti[i].Afisare ();
			}
		}
		break;
	case 1:
		for (int i = 0; i < n;i++)
		{
			if (v_carti[i].getEditura () == str)
			{
				v_carti[i].Afisare ();
			}
		}
		break;
	case 2:
		for (int i = 0; i < n;i++)
		{
			if (v_carti[i].getISBN () == str)
			{
				v_carti[i].Afisare ();
			}
		}
		break;
	default:
		for (int i = 0; i < n;i++)
		{
			v_carti[i].Afisare ();
		}
	}

}