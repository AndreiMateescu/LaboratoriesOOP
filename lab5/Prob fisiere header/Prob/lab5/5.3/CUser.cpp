#include "CUser.h"

    CUser::CUser(){
        user = new char [20];
        password = new char[20];
    }
    CUser::CUser(char *user, char *parola){
        int len = strlen(user);
        this->user = new char[len+2];
        strcpy(this->user,user);

        int lenght = strlen(password);
        this->password = new char[lenght+2];
        strcpy(this->password,password);
    }

    void CUser::citire_user(){
        cout<<"User: "; cin>>user;
        cout<<"Password: "; cin>>password;
    }

    CUser::~CUser(){
        delete [] user;
        delete [] password;
    }


    void CUser::afisare_user(){
        cout<<"User: "<<user<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<endl;
    }
