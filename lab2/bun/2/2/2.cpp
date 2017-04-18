#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<string>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
#include<malloc.h>
#include<limits.h>

struct adresa{
	char nume_oras[20];
	int cod_oras;
	char strada[25];
	int numar;
};

struct telefon{
	int prefix;
	long numar_efectiv;
};

struct student{
	char nume[20];
	struct adresa ad;
	struct telefon tel;
	char facultate[10];
	int varsta;
	int note[10];
	float media_promovare;
	int absente;
}x[10];

using namespace std;

void creare(int n);
void afisare(int n);

void creare(int n)
{
	int i, j, S = 0;
	for (i = 1; i <= n; i++){
		cout << "Nume: "; cin >> x[i].nume;
		cout << "Adresa: " << endl;
		cout << "Nume oras: "; cin >> x[i].ad.nume_oras;
		cout << "Cod oras: "; cin >> x[i].ad.cod_oras;
		cout << "Strada: "; cin >> x[i].ad.strada;
		cout << "Numar: "; cin >> x[i].ad.numar;
		cout << "Telefon " << endl;
		cout << "Prefix: "; cin >> x[i].tel.prefix;
		cout << "Numar efectiv: "; cin >> x[i].tel.numar_efectiv;
		cout << "Facultate: "; cin >> x[i].facultate;
		cout << "Varsta: "; cin >> x[i].varsta;
		cout << "Note: ";
		for (j = 0; j <= 9; j++)
			cin >> x[i].note[j];
		cout << "Medie promovare: ";
		for (j = 0; j <= 9; j++)
			S = S + x[i].note[j];
		x[i].media_promovare = (float)S / 10;
		cout << x[i].media_promovare<<endl;
		cout << "Absente: "; cin >> x[i].absente;
		S = 0;
	}
}


void afisare(int n)
{
	int i, j;
	for (i = 1; i <= n; i++){
		cout << endl << endl;
		cout << "Nume: " << x[i].nume << endl;
		cout << "Adresa: " << endl;
		cout << "Nume oras: " << x[i].ad.nume_oras << endl;
		cout << "Cod oras: " << x[i].ad.cod_oras << endl;
		cout << "Strada: " << x[i].ad.strada << endl;
		cout << "Numar: " << x[i].ad.numar << endl;
		cout << "Telefon " << endl;
		cout << "Prefix: 0" << x[i].tel.prefix << endl;
		cout << "Numar efectiv: " << x[i].tel.numar_efectiv << endl;
		cout << "Facultate: " << x[i].facultate << endl;
		cout << "Varsta: " << x[i].varsta << endl;
		cout << "Note: ";
		for (j = 0; j <= 9; j++)
			cout << x[i].note[j] << " ";
		cout << endl;
		cout << "Medie promovare: " << x[i].media_promovare << endl;
		cout << "Absente: " << x[i].absente << endl;
	}
}

int main()
{
	int n;
	cout << "Numarul de studenti: "; cin >> n;
	creare(n);
	cout << endl << endl << "Studentii grupei: " << endl;
	afisare(n);
	_getche();
	return 0;
}
