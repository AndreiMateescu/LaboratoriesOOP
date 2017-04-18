#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

class CCaine{
protected:
    char *nume;
    int inaltime;
    int greutate;
    int varsta;
    char *culoare;
public:

    CCaine(){
        nume = new char[0];
        inaltime = 0;
        greutate = 0;
        varsta = 0;
        culoare = new char[0];
    }

    CCaine(char *nume, int inaltime, int greutate, int varsta, char *culoare){
            int len = strlen(nume);
            this->nume = new char[len+2];
            strcpy(this->nume, nume);

            this->inaltime = inaltime;
            this->greutate = greutate;
            this->varsta = varsta;

            int lenght = strlen(culoare);
            this->culoare = new char[lenght+2];
            strcpy(this->culoare,culoare);
    }


    ~CCaine(){
        delete [] nume;
        delete [] culoare;
    }
};

class CCaineFaraPete:public CCaine{
    public:
        void citire_date(){
            cout<<"Nume: "; cin>>nume;
            cout<<"Inaltime: "; cin>>inaltime;
            cout<<"Greutate: "; cin>>greutate;
            cout<<"Varsta: "; cin>>varsta;
            cout<<"Culoare: "; cin>>culoare;
        }

        void afisare_date(){
            cout<<"Nume: "<<nume<<endl;
            cout<<"Inaltime: "<<inaltime<<endl;
            cout<<"Greutate: "<<greutate<<endl;
            cout<<"Varsta: "<<varsta<<endl;
            cout<<"Culoare: "<<culoare<<endl;
            cout<<endl;
        }
};

class CCaineCuPete:public CCaine{
protected:
    int numar_pete = 0;
public:
    CCaineCuPete():CCaine(){
        numar_pete = 0;
    }
    CCaineCuPete(char *nume, int inaltime, int greutate, int varsta, char *culoare, int numar_pete):CCaine(nume, inaltime, greutate, varsta, culoare){
        this->numar_pete = numar_pete;
    }

    void citire_date_pete(){
            cout<<"Nume: "; cin>>nume;
            cout<<"Inaltime: "; cin>>inaltime;
            cout<<"Greutate: "; cin>>greutate;
            cout<<"Varsta: "; cin>>varsta;
            cout<<"Culoare: "; cin>>culoare;
            cout<<"Numar pete: "; cin>>numar_pete;
        }

    void afisare_date_pete(){
            cout<<"Nume: "<<nume<<endl;
            cout<<"Inaltime: "<<inaltime<<endl;
            cout<<"Greutate: "<<greutate<<endl;
            cout<<"Varsta: "<<varsta<<endl;
            cout<<"Culoare: "<<culoare<<endl;
            cout<<"Numar pete: "<<numar_pete<<endl;
            cout<<endl;
        }
};

int main ()
{
    CCaineFaraPete *x;
    CCaineCuPete *y;

    int n,m;
    cout<<"Caini fara pete: "; cin>>n;
    x = new CCaineFaraPete[n+2];
    cout<<"Caini cu pete: "; cin>>m;
    y = new CCaineCuPete[m+2];

    int i;
    for(i=1;i<=n;i++)
        x[i].citire_date();

    for(i=1;i<=n;i++)
        x[i].afisare_date();

    for(i=1;i<=m;i++)
        y[i].citire_date_pete();

    for(i=1;i<=m;i++)
        y[i].afisare_date_pete();

    return 0;
}
