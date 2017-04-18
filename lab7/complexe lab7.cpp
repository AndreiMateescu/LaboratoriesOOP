#include<iostream>
#include<cmath>
#include<cstdlib>
#pragma once

using namespace std;

class Complexxx{

private:

    int real;
    int imaginar;

public:

    Complexxx(){
        this->real = 0;
        this->imaginar = 0;
    }
    Complexxx(int real){
        this->real = real;
        this->imaginar = 0;
    }
    Complexxx (int real, int imaginar){
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

    Complexxx operator + (Complexxx x){
        Complexxx z;
        z.real = x.real + y.real;
        z.imaginar = x.imaginar + y.imaginar;

        return z;
    }

    Complexxx operator - (Complexxx x){
        Complexxx z;

        z.real = x.real + this->real;
        z.imaginar = x.imaginar + this->imaginar;

        return z;
    }

    void operator ~ (Complexxx x){
         sqrt(pow(x.real,2) + pow(x.imaginar,2));
    }

    Complexxx operator / (Complexxx z1)
    {
        Complexxx z3;
        z3.real =((z1.real*this->real) - (z1.imaginar*(-this->imaginar)))/(pow(this->real,2)+pow(this->imaginar,2));

        z3.imaginar=(z1.real*(-this->imaginar) + this->real*z1.imaginar)/(pow(this->real,2)+pow(this->imaginar,2));

        return z3;
    }

    Complexxx operator * (Complexxx x){
        Complexxx z;

        z.real = x.real*this->real - x.imaginar*this->imaginar;
        y.imaginar = x.real*this->imaginar + x.imaginar*this->real;

        return z;
    }

    Complexxx operator ^ (Complexxx z){
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
	Complexxx z[100];
	cout<<"n = "; cin>>n;

    for (int i=1; i<=n; i++){
        cout<<"z"<<i<<endl;
        cin >> z[i];
    }

	Complexxx impare;
	Complexxx pare;
	Complexxx rez;

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
	cout<<endl<<"Rezultatul este "<<rez;
}
