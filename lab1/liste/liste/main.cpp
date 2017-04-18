#include "list.h"

using namespace std;

int main ()
{
    lista *prim,*ultim;

    int n;
    cout<<"Numarul de elevi: "; cin>>n;
    creare(prim,ultim,n);
    cout<<endl;
    sortare(prim,n);
    cout<<endl;
    afisare(prim);
    cout<<endl<<endl;

    lista *prim_admis,*prim_respins;
    separare(prim,prim_admis,prim_respins);
    cautare(prim);
    cout<<"Lista candidatilor admisi: ";
    afisare(prim_admis);
    cout<<endl;
    cout<<"Lista candidatilor respinsi: ";
    afisare(prim_respins);
    return 0;
}
