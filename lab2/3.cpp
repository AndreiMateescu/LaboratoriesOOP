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
}*x;

using namespace std;

void creare(int n);
void afisare(int n);

void creare(int n, struct student *x)
{
	int i, j, S = 0;
	x = new struct student[n];
	for (i = 1; i <= n; i++){
		S = 0;
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
		cout << x[i].media_promovare << endl;
		cout << "Absente: "; cin >> x[i].absente;
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

void adaugare(int n,struct student *x)
{
    int i,S,j;
    char a[2];
    cout<<"Doriti sa alocati memorie pentru inca un student?"<<endl<<"Da sau Nu?"<<endl;
    if(a[0] == 'D' && a[1] == 'a'){
        cout<<"Ati ales sa adaugati"<<endl;
        x = new struct student[n+1];
        for(i=1;i<=n;i++)
            ;
        //i = n
        i++;
        S = 0;
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
		cout << x[i].media_promovare << endl;
		cout << "Absente: "; cin >> x[i].absente;

    }
    else{
        cout<<"Ati ales sa nu adaugati student";
    }
}

void Modificare(int n, struct student *x)
{
    cout<<endl<<"Ati ales sa modificati informatii ";
    cout<<endl<<"Cautare dupa nume ";
    char aux[20]; cin>>aux;
    int i;
    for(i=1;i<=n;i++){
        if(strcmp(aux,x[i].nume) == 0){
            cout<<"Student gasit: ";
            cout<<endl<<"Ce doriti sa modificati?"<<endl<<"1. Oras"<<endl<<"2. Cod oras"<<endl<<"3. Strada"<<endl<<"4. Numar"<<endl<<"5. Numar telefon"<<endl<<"6. Varsta";
            int opt;
            while(opt!=0){
                if(opt == 1)
                    cin>>x[i].ad.nume_oras;
                if(opt == 2)
                    cin>>x[i].ad.cod_oras;
                if(opt == 3)
                    cin>>x[i].ad.strada;
                if(opt == 4)
                    cin>>x[i].ad.numar;
                if(opt == 5){
                    cin>>x[i].tel.prefix;
                    cin>>x[i].tel.numar_efectiv;
                }
                if(opt == 6)
                    cin>>x[i].varsta;
                cout<<"Optiune: "; cin>>opt;
            }
        }
    }
}

void Stergere(int n, struct student *x)
{
    cout<<endl<<"Ati ales sa stergeti un student ";
    cout<<endl<<"Cautare dupa nume ";
    char aux[20]; cin>>aux;
    int i,poz;
    for(i=1;i<=n;i++){
        if(strcmp(aux,x[i].nume) == 0){
            poz = i;
            break;
        }
    }
    for(i=poz+1;i<=n;i++)
        x[i-1] = x[i];
    x = new struct student[n-1];
}

int main()
{
	int n,option;
	cout << "Numarul de studenti: "; cin >> n;
	creare(n,x);
	cout<<"Baza de date este creata: ";
	cout << endl << endl << "Studentii grupei: " << endl;
	afisare(n);

	cout<<"Baza de date este creata: "<<endl<<"1. Adaugarea unui student"<<endl<<"2. Modificarea informatiilor despre un student"<<endl<<"3. Stergerea unui student"<<endl;
	while(option!=0){
        if(option == 1){
            adaugare(n,x);
            n = n+1;
        }
        else{
            if(option == 2){
                Modificare(n,x);
            }
            else
                if(option == 3){
                    Stergere(n,x);
                    n--;
                }
            }
	}
	afisare(n);
	_getche();
	return 0;
}

