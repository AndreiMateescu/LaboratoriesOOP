#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;

class CList;

class CNode{
private:
    int data;
    CNode *next;

    friend class CList;

public:
    CNode(){
    }
    ~CNode(){
    }
};

class CList{
private:
    CNode *first,*last;

    int numar_elemente()
    {
        CNode *p;
        p = first;
        int nr = 0;
        while(p!=NULL){
            nr++;
            p=p->next;
        }

        return nr;
    }

public:
    CList(){
    }
    ~CList(){
    }

    void initializare()
    {
        CNode *p;
        p = new CNode;
        cin>>p->data;
        first = last = p;
    }

    void citire(){
        CNode *p;
        p = new CNode;
        cin>>p->data;
        last->next = p;
        last = p;
    }

    void nulllista()
    {
        last -> next = NULL;
    }

    void afisare(){
        CNode *p;
        p = first;
        cout<<endl;
        while(p!=NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
    }

    void adaugare_element(int x)
    {
        int option;
        cout<<"1. Adaugare la inceput"<<endl<<"2. Adaugare la sfarsit";
        cin>>option;
        if(option == 1){
            CNode *p;
            p = new CNode;
            p->data = x;
            p->next = first;
            first = p;
        }
        else
            if(option == 2){
                CNode *p;
                p = new CNode;
                p->data = x;
                last->next = p;
                last = p;
                last->next = NULL;
            }
    }

    void stergere_element(int x)
    {
        CNode *p,*q;
        p = first;
        while(p!=NULL && p->data != x){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }

    void eliminare_elemente(int x)
    {
        CNode *p,*q,*r;

        p = first;
        while (first!=NULL && first->data < x) {
            p = first;
            first = first->next;
            delete p;
        }

        if (first == NULL)
            return;

        p = first;
        while (p->next != NULL) {
            if (p->next->data < x) {
                r = p->next;
                p->next = r->next;
                delete r;
            } else
                p = p->next;
        }
    }

    float medie_aritmetica()
    {
        CNode *p;
        float x = numar_elemente();
        p = first;

        float S=0.0;
        while(p!=NULL){
            S = S + p->data;
            p = p->next;
        }

        return S/x;
    }

};

int main ()
{
    CList prim;
    int n;
    cout<<"Numarul de elemente: "; cin>>n;
    int i;

    prim.initializare();
    for(i=2;i<=n;i++)
        prim.citire();
    prim.nulllista();

    int aux;
    cout<<"Elementul pe care doriti sa-l adaugati: "; cin>>aux;
    prim.adaugare_element(aux);

    //cout<<"Elementul pe care doriti sa-l stergeti: "; cin>>aux;
    //prim.stergere_element(aux);
    cout<<"Numar: "; cin>>aux;
    cout<<"Veti sterge toate elementele mai mici decat "<<aux;
    prim.eliminare_elemente(aux);

    //float medie;
    //medie = prim.medie_aritmetica();
    //cout<<medie;
    //cout<<endl;
    prim.afisare();
    return 0;
}
