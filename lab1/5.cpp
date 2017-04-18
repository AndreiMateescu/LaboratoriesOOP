#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct card{
    char nume[20];
    char prenume[20];
    int pin;
    long cod;
    int sold;
}x[100];

struct card aux;

void creare_baza_date(int i)
{
    cout<<"Nume: "; cin>>x[i].nume;
    cout<<"Prenume: "; cin>>x[i].prenume;
    cout<<"Pin: "; cin>>x[i].pin;
    cout<<"Cod: "; cin>>x[i].cod;
    cout<<"Lei: "; cin>>x[i].sold;
}

void extragere(int p, int y)
{
    x[p].sold = x[p].sold - y;
}

void afisare(int i)
{
    cout<<endl;
    cout<<"Sold curent: ";
    cout<<x[i].sold;
}

void transfer(int i, int y)
{
    cout<<endl;
    x[i].sold = x[i].sold + y;
}

void verificare1(int &ok, int &poz, int n)
{
    ok = 0;
    int i;
    poz = 0;
    cout<<"Nume: "; cin>>aux.nume;
    cout<<"Prenume: "; cin>>aux.prenume;
    cout<<"Pin: "; cin>>aux.pin;
    for(i=1;i<=n;i++){
        if(strcmp(x[i].nume,aux.nume)==0 && strcmp(x[i].prenume,aux.prenume) == 0 && x[i].pin==aux.pin){
            cout<<"Informatii valide";
            poz = i;
            ok = 1;
            break;
        }
    }
}

void verificare2(int &ok, int &poz, int n)
{
    cout<<"informatii valide"<<endl;
    cout<<"Pentru transfer: "<<endl;
    ok = 0;
    cout<<"Nume: "; cin>>aux.nume;
    cout<<"Prenume: "; cin>>aux.prenume;
    int i;
    for(i=1;i<=n;i++){
        if(strcmp(x[i].nume,aux.nume)==0 && strcmp(x[i].prenume,aux.prenume) == 0){
            cout<<"Informatii valide";
            poz = i;
            ok = 1;
            break;
            }
        }
}

int main ()
{
    int option,i;
    int ok,okay,k,p,n;
    cout<<"Cate elemente doriti sa aiba baza de date: "; cout<<"Raspuns: "; cin>>n;
    for(i=1;i<=n;i++)
        creare_baza_date(i);

    cout<<"S-a creat baza de date"<<endl;
    cout<<"1. Extragere suma bani"<<endl<<"2. Afisare sold curent"<<endl<<"3. Transfer catre un alt cont"<<endl;
    cout<<"4.Iesire";
    cout<<"Optiune: "<<endl; cin>>option;

    while(option!=4){
        if(option == 1){
            cout<<endl<<"Extragere suma"<<endl;

            verificare1(ok,p,n);

            if(ok == 1){
                int suma;
                cout<<"Suma pe care doriti s-o extrageti: "; cin>>suma;
                if(x[p].sold < suma){
                    cout<<"Suma este prea mare"<<endl;
                }
                else{
                    extragere(p,suma);
                    cout<<"Tranzactie completa";
                }
            }
        }
        else{
            if(option == 2){
                cout<<"Afisare sold curent";

                verificare1(ok,p,n);

                if(ok == 1){
                    cout<<"informatii valide";
                    afisare(p);
                }
            }
            else{
                if(option == 3){
                    cout<<"Transfer catre un alt card";
                    verificare1(ok,p,n);

                    if(ok == 1){
                       verificare2(okay,k,n);
                        if(okay == 1){
                            cout<<"Suma pe care vreti s-o transferati: "<<endl;
                            int suma;
                            cin>>suma;
                            cout<<endl;
                            if(x[p].sold < suma)
                                cout<<"Transfer nereusit"<<endl;
                            else{
                                transfer(k,suma);
                                extragere(p,suma);
                            }
                        }
                    }
                }
            }
        }
            cout<<endl<<"Option: "; cin>>option;
    }
    return 0;
}
