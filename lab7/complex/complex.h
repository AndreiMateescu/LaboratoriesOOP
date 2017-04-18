#pragma once
#include<iostream>
using namespace std;

class complex
{
	private:

	public:
	//proprietati
	double real; // parte reala
	double imaginar; //parte imaginara
	complex (int r=0 , int i=0); // constructor
	friend complex operator + (complex, complex); // operatie de adunare
	friend complex operator - (complex, complex); // operatie de scadere
	friend ostream& operator << (ostream&, complex);  // supraincarcare operator afisare
	friend istream& operator>>(istream&, complex&);
	friend complex operator / (complex, complex);  // operatie de impartire
	friend complex operator * (complex, complex);  // operatie de inmultire
	friend complex operator ~ (complex); // modulul unui numar complex
	friend complex operator ^ (complex, int); // ridicare la putere
	complex &complex::operator = (const complex &z) ;
	
};