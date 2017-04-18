#include<iostream>
#include<cmath>
#include<string.h>
#include<string>
#include<conio.h>
#include<limits.h>
#include<cstdlib>

using namespace std;

class CAnimal()
{
protected:
    char *nume;
    int zi;
    int luna;
    int an;
    int greutate;
    char *hrana_preferata;
    float cantitate_hrana;
public:
    CAnimal(){
    }
    CAnimal(char *nume, int zi, int luna, int an, int greutate, char *hrana_preferata, float cantitate_hrana)
    {
        int lenght;
        lenght = strlen(nume);
        this->nume = new char[lenght+2];
        strcpy(this->nume, nume);
        this->zi = zi;
        this->luna = luna;
        this->an = an;
        this->greutate = greutate;

        lenght = strlen(hrana_preferata);
        this->hrana_preferata = new char[lenght+2];
        strcpy(this->hrana_preferata,hrana_preferata);

        this->cantitate_hrana = cantitate_hrana;
    }

    virtual void citire(){
    }
    virtual void afisare(){
    }
};

class CAnimalIerbivor():public CAnimal{
    public:
        virtual void citire(){
        }
        virtual void afisare(){
        }
};

class CAnimalCarnivor():public CAnimal{
    public:
        virtual void citire(){
        }
        virtual void afisare(){
        }
};

class CIepure():public CAnimalIerbivor{
    protected:
        float suprafata;
    public:
        CIepure(){
        }
        CIepure(char *nume, int zi, int luna, int an, int greutate, char *hrana_preferata, float cantitate_hrana, float suprafata):CAnimal(*nume,zi,luna,an,greutate,*hrana_preferata){
            this->suprafata = suprafata;
        }
        virtual void citire(){
            nume = new char[20];
            cout<<"Nume: "; cin>>nume;
            cout<<"Zi: "; cin>>zi;
            cout<<"Luna: "; cin>>luna;
            cout<<"Greutate: "; cin>>greutate;
            hrana_preferata = new char[20];
            cout<<"Hrana preferata: "; cin>>hrana_preferata;
            cout<"Suprafata: "; cin>>suprafata;
        }
        virtual void afisare(){
            cout<<"Nume: "<<nume;
            cout<<"Zi: "<<zi;
            cout<<"Luna: "<<luna;
            cout<<"Greutate: "<<greutate;
            cout<<"Hrana preferata: "<<hrana_preferata;
            cout<"Suprafata: "<<suprafata;
        }
};

class CVulpe():public CAnimalCarnivor{
    protected:
        float temperatura_maxima;
        char *tip;
    public:
        CVulpe(){
        }
        CVulpe(char *nume, int zi, int luna, int an, int greutate, char *hrana_preferata, float cantitate_hrana, float temperatura_maxima, char *tip):CAnimal(*nume,zi,luna,an,greutate,*hrana_preferata){
            this->temperatura_maxima = temperatura_maxima;
            
            int lenght;
            lenght = strlen(tip);
            this->tip = new char[lenght+2];
            strcpy(this->tip,tip);
        }
        virtual void citire(){
            nume = new char[20];
            cout<<"Nume: "; cin>>nume;
            cout<<"Zi: "; cin>>zi;
            cout<<"Luna: "; cin>>luna;
            cout<<"Greutate: "; cin>>greutate;
            hrana_preferata = new char[20];
            cout<<"Hrana preferata: "; cin>>hrana_preferata;
            cout<<"Temperatura maxima: " cin>>temperatura_maxima;
            tip = new char[20];
            cout<<"Tip: "; cin>>tip;
        }
        virtual void afisare(){
            cout<<"Nume: "<<nume;
            cout<<"Zi: "<<zi;
            cout<<"Luna: "<<luna;
            cout<<"Greutate: "<<greutate;
            cout<<"Hrana preferata: "<<hrana_preferata;
            cout<<"Temperatura maxima: "<<temperatura_maxima;
            cout<<"Tip: "<<tip;
        }
};

class Leu():public CAnimalCarnivor(){
    protected:
        int temperatura_minima;
        char *tara;
    public:
        Leu(){
        }
        Leu(char *nume, int zi, int luna, int an, int greutate, char *hrana_preferata, float cantitate_hrana, float temperatura_minima, char *tara):CAnimal(*nume,zi,luna,an,greutate,*hrana_preferata){
            this->temperatura_maxima = temperatura_maxima;
            
            int lenght;
            lenght = strlen(tip);
            this->tip = new char[lenght+2];
            strcpy(this->tip,tip);
        }
}