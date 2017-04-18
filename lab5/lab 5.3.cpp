#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<ctime>

using namespace std;

class CUser{

protected:
    char *user;
    char *password;
public:

    CUser(){
        user = new char [20];
        password = new char[20];
    }
    CUser(char *user, char *parola){
        int len = strlen(user);
        this->user = new char[len+2];
        strcpy(this->user,user);

        int lenght = strlen(password);
        this->password = new char[lenght+2];
        strcpy(this->password,password);
    }

    void citire_user(){
        cout<<"User: "; cin>>user;
        cout<<"Password: "; cin>>password;
    }

    ~CUser(){
        delete [] user;
        delete [] password;
    }

    void deconectare_user(){
        delete [] user;
        delete [] password;
        cout<<"Utilizatorul a fost deconectat";
    }

    void afisare_user(){
        cout<<"User: "<<user<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<endl;
    }
};

class CAdmin:public CUser{
protected:
    char *admin;
    char *pass;
public:
    CAdmin(){
        admin = new char [20];
        pass = new char[20];
    }

    void citire_admin(){
        cout<<"Admin: "; cin>>admin;
        cout<<"Password: "; cin>>pass;
        cout<<"Administratorul a fost creat";
    }

    ~CAdmin(){
        delete [] admin;
        delete [] pass;
    }

    int verificare(char *admin, char *pass){
        if((strcmp(this->admin,admin)==0) && strcmp(this->pass,pass)==0)
            return 1;
        else
            return 0;
    }

};
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
