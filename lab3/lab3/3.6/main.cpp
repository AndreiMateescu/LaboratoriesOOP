#include "carte.h"

int main ()
{
	Carte *carti = new Carte[3];

	for (int i = 0 ; i < 1;i++)
	{
		carti[i].Citire ();
	}
	cautaCarte ("Capra_cu_3_iezi", 3, carti, 0);
	cautaCarte ("Sitech", 3, carti, 1);
	cautaCarte ("123-4-5", 3, carti, 2);
	

	/*int note [] = { 7, 8 ,9, 6, 5, 9};
	student stud1 ("popovici", 12345, 6, note);
	
	int note1 [] = { 7, 8 ,9 , 10};
	
	student stud2 ("ioniti", 145, 4, note1);*/
	//student stud3;
	
	//student *_vstud =  new student[10];
	//stud2 = stud2;
	
	//stud.note [0] = stud.note [1] = stud.note [2] = 9;
	//stud.note [3] = stud.note [4] = 8;

	//detMedia (stud);
	//cout<<"Adresa variabilei este "<<&stud<<endl;
	/*stud1.detMedia ();
	stud1.Afisare ();
	stud2.detMedia ();
	stud2.Afisare ();


	student::AfisareNrTotal ();
	stud1.AfisareContor ();
	stud2.AfisareContor ();
	stud3.AfisareContor ();*/

	//cout<<"folosire "<<endl;

	// .....

	delete []carti;


	return 0;
}