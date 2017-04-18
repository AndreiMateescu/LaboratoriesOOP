#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<ctime>
#pragma once

using namespace std;

class CUser{

protected:
    char *user;
    char *password;
public:

    CUser();
    CUser(char *user, char *parola);

    inline char setUSER(char *user){
        int len = strlen(user);
        this->user = new char[len+2];
        strcpy(this->user,user);
    }

    inline char getUSER(){
        return *user;
    }

    inline char setPASS(char *password){
        int len = strlen(password);
        this->password = new char[len+2];
        strcpy(this->password,password);
    }

    inline char getPASS(){
        return *password;
    }

    void citire_user();

    ~CUser();

    void afisare_user();
};
