#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class CarteJoc
{
private:
	string suita;
	int valoare;
	bool stare;
public:
	//constructor implicit
	CarteJoc ();
	//constructor general
	CarteJoc (string, int, bool st = false);
	//destructor 
	~CarteJoc ();
	// functia de intiliazare
	void init (string, int, bool st = false);
	// afisare
	void afisare ();
	//seteaza stare
	void setStare () { stare = true;}
	//get stare
	bool getStare () { return stare;}
	//get valoare
	int getValoare () { return valoare;}

};