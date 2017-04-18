#include<string>
#include<iostream>

//#define NR_NOTE 5

using namespace std;

class student
{
private:
	string nume;
	int *note;
	int nr_note;
	int nr_matricol;
	float media;

	static int NR_total;
	int contor;
public:
	student (string s="", int n=0, int nn=0, int *v=0);

	student (const student&);
	
	void operator= (const student&);

	~student ();

	void detMedia ();
	void Afisare ();

	static void AfisareNrTotal ();
	void AfisareContor ();
	friend void detMedia (student &);
};


