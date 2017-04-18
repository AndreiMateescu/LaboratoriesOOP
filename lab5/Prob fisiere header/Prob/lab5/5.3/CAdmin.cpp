#include "CAdmin.h"
#include "CUser.h"

    CAdmin::CAdmin(){
        admin = new char [20];
        pass = new char[20];
    }

    void CAdmin::citire_admin(){
        cout<<"Admin: "; cin>>admin;
        cout<<"Password: "; cin>>pass;
        cout<<"Administratorul a fost creat";
    }

    CAdmin::~CAdmin(){
        delete [] admin;
        delete [] pass;
    }

    void CAdmin::deconectare_user(CUser x[],int nr_random){
        int i;
        for(i=1;i<=10;i++)
            if(i!=nr_random){
                //x[i].getUSER();
                //x[i].getPASS();
                cout<<"User: "<<x[i].getUSER()<<endl;
                cout<<"Parola: "<<x[i].getPASS()<<endl;
            }
        cout<<endl<<"Utilizatorul "<<nr_random<<" a fost deconectat"<<endl;
    }

    int CAdmin::verificare(char *admin, char *pass){
        if((strcmp(this->admin,admin)==0) && strcmp(this->pass,pass)==0)
            return 1;
        else
            return 0;
    }
