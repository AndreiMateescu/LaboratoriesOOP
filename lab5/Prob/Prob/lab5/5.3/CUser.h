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
