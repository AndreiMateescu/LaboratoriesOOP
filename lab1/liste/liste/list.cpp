#include "list.h"

using namespace std;

void creare(lista *&prim, lista *&ultim, int n)
{
    lista *p;

    p = new lista;
    cout<<"Nume: "; cin>>p->nume;
    cout<<"Nota: "; cin>>p->nota;

    prim = ultim = p;
    int i;
    for(i=2;i<=n;i++){
        p = new lista;
        cout<<"Nume: "; cin>>p->nume;
        cout<<"Nota: "; cin>>p->nota;
        ultim->next = p;
        ultim = p;
    }
    ultim->next = NULL;
}

void afisare(lista *prim)
{
    lista *p;

    p = prim;
    while(p!=NULL){
        cout<<p->nume<<" "<<p->nota<<endl;
        p = p->next;
    }
}

void sortare(lista *&prim, int n)
{
    int i,j;
    lista *q,*r;

    float aux_nota;
    char aux_nume[20];

    r = prim;
    for(i=1;i<=n-1;i++){
        q = r->next;
        for(j=i+1;j<=n;j++){
            if(r->nota < q->nota){
                aux_nota = r->nota;
                r->nota = q->nota;
                q->nota = aux_nota;

                strcpy(aux_nume,r->nume);
                strcpy(r->nume,q->nume);
                strcpy(q->nume,aux_nume);
            }
            if(j!=n)
                q = q->next;
        }
        r = r->next;
    }

}

void cautare(lista *prim)
{
    lista *p;

    p = prim;
    char a[20];
    cout<<endl;
    cout<<"Studentul pe care doriti sa-l cautati: "<<endl;
    cout<<"Nume: "; cin>>a;

    while(p!=NULL){
        if(strcmp(p->nume,a) == 0){
            cout<<"Student gasit!"<<endl;
            cout<<"Nota studentului: "<<p->nota;
            break;
        }
        p = p->next;
    }
    if(p==NULL)
        cout<<"Studentul nu exista!";
}

void separare(lista *prim, lista *&prim_admis, lista *&prim_respins)
{
    lista *q,*t,*p;
    lista *ultim_admis, *ultim_respins;
    q = new lista;
    prim_admis = ultim_admis = q;

    t = new lista;
    prim_respins = ultim_respins = t;

    p = prim;
    while(p!=NULL){
        if(p->nota >= 5){
            q = new lista;
            q->nota = p->nota;
            strcpy(q->nume,p->nume);
            ultim_admis->next = q;
            ultim_admis = q;
        }
        else{
            q = new lista;
            q->nota = p->nota;
            strcpy(q->nume,p->nume);
            ultim_respins->next = q;
            ultim_respins = q;
        }
        p = p->next;
    }
    ultim_admis->next = NULL;
    ultim_respins->next = NULL;

    p = prim_admis;
    prim_admis = p->next;
    delete p;

    p = prim_respins;
    prim_respins = p->next;
    delete p;
}
