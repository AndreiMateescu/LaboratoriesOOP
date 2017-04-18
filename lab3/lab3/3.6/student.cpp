#include "student.h"

int student::NR_total = 0;
//fct. constructor general
student::student (string _nume, int _nr, int _nr_note, int *_note)
{
	contor = 0;
	cout<<"constr. implicit/general"<<endl;
	nume =_nume;
	nr_matricol = _nr;
	nr_note = _nr_note;
	note = new int[nr_note];
	for (int i = 0; i < nr_note;i++)
	{
		note[i] = _note[i];
	}
	NR_total++;
	contor++;
}

//constr. de copiere
student::student (const student& s)
{
	contor = 0;
	cout<<"constr. copiere"<<endl;
	nume =s.nume;
	nr_matricol = s.nr_matricol;
	nr_note = s.nr_note;
	
	note = new int[nr_note];
	for (int i = 0; i < nr_note;i++)
	{
		note[i] = s.note[i];
	}
	NR_total++;
	contor++;
}

void student::operator= (const student&s)
{
	if (this != &s)
	{
		cout<<"operator atribuire"<<endl;
		nume =s.nume;
		nr_matricol = s.nr_matricol;
		nr_note = s.nr_note;
		
		delete []note;
		note = new int[nr_note];
		for (int i = 0; i < nr_note;i++)
		{
			note[i] = s.note[i];
		}
	}
}
student::~student ()
{
	cout<<"destructor"<<endl;
	delete []note;
}

//fct. membra
void student::detMedia ()
{
	//cout<<"This este "<<this<<endl;
	float medie = 0.0;
	for (int i = 0; i < nr_note;i++)
	{
		medie += this->note[i];
	}
	this->media = medie/nr_note;
}

void student::Afisare ()
{
	cout<<"Media studentului "<<nume<<" este "<<media<<endl;
}

void student::AfisareNrTotal ()
{
	cout<<"Numarul de studenti este "<<NR_total  <<endl;
}

void student::AfisareContor ()
{
	cout<<"valoare contorului este "<<contor  <<endl;
}
//fct. globala
void detMedia (student &s)
{
	float medie = 0.0;
	for (int i = 0; i < s.nr_note;i++)
	{
		medie += s.note[i];
	}
	s.media = medie/s.nr_note;
}