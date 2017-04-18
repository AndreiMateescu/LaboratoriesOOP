#include "carteJoc.h"

//constructor implicit
CarteJoc::CarteJoc ()
{
	//cout<<"constructor implicit"<<endl;
	suita = "";
	valoare = 0;
	stare = false;
}

//constructor general
CarteJoc::CarteJoc (string s, int v, bool st)
{
	cout<<"constructor general"<<endl;
	suita = s;
	valoare = v;
	stare = st;
}

//cfct. de intializare
void CarteJoc::init (string s, int v, bool st)
{
	//cout<<"constructor general"<<endl;
	suita = s;
	valoare = v;
	stare = st;
}

// afisare
void CarteJoc::afisare ()
{
	cout<<suita<<" "<<valoare<<" "<<stare<<endl;
}

//destructor
CarteJoc::~CarteJoc ()
{
	//cout<<"destructor "<<endl;
}
