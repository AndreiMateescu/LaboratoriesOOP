#include<iostream>
#include<cmath>

using namespace std;

class complex
{
private:

public:

    double real;
    double imaginar;

    complex(int r , int i )
    {
        this->real = r;
        this->imaginar = i;
    }

    // operatia de adunare
    complex operator+(complex z2)
    {
        complex z3;
        z3.real = z2.real;
        z3.imaginar = z2.imaginar;
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

        z3.imaginar=(z1.real*(-z2.imaginar) + z2.real*z1.imaginar)/(pow(z2.real,2)+pow(z2.imaginar,2));

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

    //ridicare la putere
    complex operator ^ (complex z, int p)
    {
        if (p==1)
            return z;
        for (int i=2; i<=p; i++)
            z = z*z;
        return z;
    }
};

int main ()
{
    int n;
	complex z[100];
	cout << "\n n=";
		cin >>n;

		for (int i=1; i<=n; i++){
			cout<<"z"<<i<<endl;
				cin >> z[i];
		}

	complex impare;
	complex pare;
	complex rez;

	for(int i=1; i<=n; i++)
        if(i%2==0){
            z[i] = z[i]^4;
            pare = pare + z[i];
        }
        else{
            z[i] = z[i]^3;
            impare = impare + z[i];
        }


	rez = impare/pare; // calculare rezultat
	cout<<"\n Rezultatul este "<<rez;
}
