#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<ctime>
#include"CUser.h"
using namespace std;


class CAdmin:public CUser{

protected:
    char *admin;
    char *pass;
public:
    CAdmin();

    void citire_admin();

    ~CAdmin();

    int verificare(char *admin, char *pass);

    void deconectare_user(CUser x[], int nr_random);

};
