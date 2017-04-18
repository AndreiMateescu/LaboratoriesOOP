#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<stdbool.h>

using namespace std;

class ISBNNN{
protected:
    int id_tara;//3
    int id_editura;//3
    int id_titlu;//3
    int cifra;//1

public:
    int getID_tara();
    int getID_editura();
    int getID_titlu();
    int getCifra();

    void set_ID_tara(int id_tara);
    void set_ID_editura(int id_editura);
    void set_ID_titlu(int id_titlu);
    void set_cifra(int cifra);

};
