#include "CUser.h"

int main ()
{
    CUser x[12];
    CAdmin administrator;
    int i,k;

    for(i=1;i<=10;i++)
        x[i].citire_user();

    administrator.citire_admin();

    int option,aux;
    char *administ, *parola;
    cout<<"Doriti sa va logati ca administrator?"<<endl<<"Pentru da apasati 1, altfel 0"<<endl;
    cin>>option;
    if(option==1){
        administ = new char[20];
        parola = new char[20];

        cout<<"Admin: "; cin>>administ;
        cout<<"Parola: "; cin>>parola;
        k = administrator.verificare(administ,parola);
        if(k == 1){
                cout<<"Autentificare cu succes!"<<endl;
                cout<<"Trebuie sa deconectati un user, deoarece reteaua este full"<<endl;
                srand(time(NULL));
                aux = rand()%10;
                for(i=aux+1;i<=10;i++)
                    x[i-1] = x[i];
                //x[aux].deconectare_user();
                cout<<"Ati deconectat utilizatorul "<<aux<<endl;
                for(i=1;i<=10;i++)
                    x[i].afisare_user();
        }
        else
            cout<<"Autentificare respinsa"<<endl;
    }
    return 0;
}
