#include"complex.h"
#include<cmath>

// constructor
complex::complex(int r , int i )
{
	this->real = r;
	this->imaginar = i;
}

// operatia de adunare
complex operator+(complex z1, complex z2)
{
	complex z3;
	z3.real = z1.real + z2.real;
	z3.imaginar = z1.imaginar + z2.imaginar;
	return z3; 
}

// operatia de scadere
complex operator-(complex z1, complex z2)
{
	complex z3;
	z3.real = z1.real - z2.real;
	z3.imaginar = z1.imaginar - z2.imaginar;
	return z3; 
}


// afisare
ostream& operator << (ostream& out, complex z1)
{
     out << "\n Parte reala = " << z1.real << " \n Parte imaginara = " << z1.imaginar<<"i \n ";
     return out;
} 

istream& operator >> (istream& is, complex& z)
{
	cout<<"\n parte reala";
	cin >> z.real;
	cout<<"\n parte imaginara";
	cin >> z.imaginar;
	return is;
}

// modulul unui numar complex
complex operator ~ (complex z)
{
	return sqrt(pow(z.real,2) + pow(z.imaginar,2));
}

// impartirea numerelor complexe
complex operator/(complex z1, complex z2)
{
	complex z3;
	z3.real =((z1.real*z2.real) - (z1.imaginar*(-z2.imaginar)))/(pow(z2.real,2)+pow(z2.imaginar,2));
	//calculare parte reala
	z3.imaginar=(z1.real*(-z2.imaginar) + z2.real*z1.imaginar)/(pow(z2.real,2)+pow(z2.imaginar,2));
	//calculare parte imaginara
	return z3;
}

//inmultirea numerelor complexe
complex operator*(complex z1, complex z2)
{
	complex z3;
	z3.real = z1.real*z2.real - z1.imaginar*z2.imaginar;
	z3.imaginar = z1.imaginar*z2.real + z1.real*z2.imaginar;
	return z3;
}

complex &complex::operator = (const complex &z) 
{ 
	real = z.real; 
	imaginar = z.imaginar; 
	return *this;
}


//ridicare la putere
complex operator ^ (complex z, int p)
{
	if (p==1)
		return z;
	for (int i=2; i<=p; i++)
		z = z*z;
	return z;
}

