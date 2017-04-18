#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Complex{
private:
    int real;
    int imaginar;

public:
    Complex(){
        this->real = 0;
        this->imaginar = 0;
    }
    Complex(int real){
        this->real = real;
        this->imaginar = 0;
    }
    Complex (int real, int imaginar){
        this->real = real;
        this->imaginar = imaginar;
    }

    int getReal(){
        return this->real;
    }
    int getImaginar(){
        return this->imaginar;
    }

    void setReal(int real){
        this->real = real;
    }
    void setImaginar(int imaginar){
        this->imaginar = imaginar;
    }

    void citire()
    {
        cout<<"Parte reala: "; cin>>this->real;
        cout<<"Partea imaginara: "; cin>>this->imaginar;
    }

    void afisare()
    {
        cout<<"Parte reala: "<<this->real<<endl;
        cout<<"Partea imaginara: "<<this->imaginar<<endl;
    }

    Complex operator+(Complex a)
    {
        Complex b;
        b.real = a.real + this->real;
        b.imaginar = a.imaginar + this->imaginar;

        return b;
    }

    Complex operator-(Complex a)
    {
        Complex b;
        b.real = a.real - this->real;
        b.imaginar = a.imaginar - this->imaginar;

        return b;
    }

    Complex operator*(Complex a)
    {
        Complex b;
        b.real = a.real*this->real - a.imaginar*this->imaginar;
        b.imaginar = a.imaginar*this->real + a.real*this->imaginar;

        return b;
    }

    Complex operator/(Complex a)
    {
        Complex b;
        b.real =((a.real*this->real) - (a.imaginar*(-this->imaginar)))/(pow(this->real,2)+pow(this->imaginar,2));
        b.imaginar=(a.real*(-this->imaginar) + this->real*a.imaginar)/(pow(this->real,2)+pow(this->imaginar,2));

        return b;
    }

    Complex operator^(int p)
    {
        Complex a=*this;
        if(p==1)
            return a;
        else
            for(int i=2;i<=p;i++)
                a = a*(*this);

        return a;
    }

    double operator~()
    {
        return sqrt(pow(this->real,2) + pow(this->imaginar,2));
    }
};

int main ()
{
    /*
    Complex x(1,1);
    Complex y(2,0);
    Complex z,t,w,l;

    z = x+y;
    t = x*y;
    w = z;
    l = z;
    w = w^2;

    double q;
    q = (~l);
    cout<<"Adunare: "<<z.getReal()<<" "<<z.getImaginar()<<endl;
    cout<<"Ridicare la putere: "<<w.getReal()<<" "<<w.getImaginar()<<endl;
    cout<<"Modulul: "<<q<<endl;
    cout<<"Inmultire: "<<t.getReal()<<" "<<t.getImaginar()<<endl;

    return 0;
    */

    Complex *z;
    int n;
    cout<<"Numarul de elemente: "; cin>>n;
    z = new Complex[2*n+1];
    for (int i=1;i<=2*n;i++)
        z[i].citire();

    Complex impare;
	Complex pare;
	Complex rez;

	for(int i=1; i<=2*n; i++)
        if(i%2==0){
            z[i] = z[i]^4;
            pare = pare + z[i];
        }
        else{
            z[i] = z[i]^3;
            impare = impare + z[i];
        }


	rez = impare/pare;
	rez.afisare();
	return 0;
}
