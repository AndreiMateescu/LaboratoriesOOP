#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;

class CAdresa;
class CNode;
class CAbonat;

class CAdresa{

private:
    char *strada;
    int numar_strada;

public:

    CAdresa(){
        strada = new char[20];
    }

    CAdresa(char *strada, int numar_strada){
        int len = strlen(strada);
        this->strada = new char[len+2];
        strcpy(this->strada,strada);

        this->numar_strada = numar_strada;
    }

    char* getStrada(){
        return strada;
    }

    int getNr_strada(){
        return numar_strada;
    }

    void setStrada(char *strada){
        int len = strlen(strada);
        this->strada = new char[len+2];
        strcpy(this->strada,strada);
    }

    void setNr_strada(int numar_strada){
        this->numar_strada = numar_strada;
    }

    ~CAdresa(){
        delete [] strada;
    }
};

class CNode{

private:
    char *nume;
    long numar_telefon;
    CAdresa addr;
    CNode *next;

    friend class CAbonat;

public:
    CNode(){
    }
    ~CNode(){
        delete [] nume;
    }
};


class CAbonat{

private:
    CNode *first;
    CNode *last;
    CAdresa addr;

public:

    CAbonat(){
    }
    ~CAbonat(){
    }

    void initializare()
    {
        char *aux1;
        int aux2;

        CNode *p;

        p = new CNode;
        p->nume = new char[20];
        aux1 = new char[20];

        cout<<"Nume: "; cin>>p->nume;
        cout<<"Strada: "; cin>>aux1;
        p->addr.setStrada(aux1);

        cout<<"Numar strada: "; cin>>aux2;
        p->addr.setNr_strada(aux2);
        cout<<"Numar telefon: "; cin>>p->numar_telefon;

        first = last = p;
    }

    void citire()
    {
        char *aux1;
        int aux2;

        CNode *p;

        p = new CNode;
        p->nume = new char[20];
        aux1 = new char[20];

        cout<<endl<<"Nume: "; cin>>p->nume;
        cout<<"Strada: "; cin>>aux1;
        p->addr.setStrada(aux1);

        cout<<"Numar strada: "; cin>>aux2;
        p->addr.setNr_strada(aux2);
        cout<<"Numar telefon: "; cin>>p->numar_telefon;

        last->next = p;
        last = p;
    }

    void init_null()
    {
        last->next = NULL;
    }

    void afisare()
    {
        CNode *p;
        cout<<endl;
        p = first;
        while(p!=NULL){
            cout<<"Nume: "<<p->nume<<endl;
            cout<<"Strada: "<<p->addr.getStrada()<<endl;
            cout<<"Numar strada: "<<p->addr.getNr_strada()<<endl;
            cout<<"Numar telefon: "<<"0"<<p->numar_telefon<<endl;
            cout<<endl;
            p = p->next;
        }
    }

    void adaugare(char *nume, char *aux1, int aux2, int numar_telefon)
    {
        CNode *p;
        p = first;

        int option;
        cout<<"1. Adaugare la inceput"<<endl<<"2. Adaugare la final"<<endl;
        cin>>option;

        if(option == 1){
            p = new CNode;
            p->nume = new char[20];

            p->nume = nume;
            p->addr.setStrada(aux1);
            p->addr.setNr_strada(aux2);
            p->numar_telefon = numar_telefon;

            p->next = first;
            first = p;
        }
        else
            if(option == 2){
                p = new CNode;
                p->nume = new char[20];

                p->nume = nume;
                p->addr.setStrada(aux1);
                p->addr.setNr_strada(aux2);
                p->numar_telefon = numar_telefon;

                last->next = p;
                last = p;
                last->next = NULL;
                }
    }

     int cautare (char *nume)
     {
         cout<<endl;
         int ok=0;
         CNode *p;
         p = first;
         while(p!=NULL){
                if(strcmp(p->nume,nume)==0){
                    cout<<endl<<p->numar_telefon<<endl;
                    ok = 1;
                }
                p = p->next;
         }
         return ok;
     }
};

int main ()
{
    CAbonat prim,ultim;
    int n;
    cout<<"Numar abonati: "; cin>>n;

    prim.initializare();
    for(int i=1;i<n;i++)
        prim.citire();

    prim.init_null();

    int optiune;
    cout<<"Daca doriti sa mai adaugati in agenda, apasati 1, 0 in caz contar: "; cin>>optiune;

    if(optiune==1){
        char *name, *street;
        int nr_street, nr_phone;
        name = new char[20];
        street = new char[20];

        cout<<"Adaugare: "<<endl<<"Nume: "; cin>>name;
        cout<<"Strada: "; cin>>street;
        cout<<"Numar strada: "; cin>>nr_street;
        cout<<"Numar telefon: "; cin>>nr_phone;
        prim.adaugare(name,street,nr_street,nr_phone);
    }

    int k;
    char *name;
    name = new char[20];
    cout<<"Cautare dupa nume: "; cin>>name;

    k = prim.cautare(name);
    if(k==0)
        cout<<"Nu exista"<<endl;

    cout<<endl;
    prim.afisare();
    return 0;
}
