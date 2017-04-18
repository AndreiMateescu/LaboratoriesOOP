#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<stdbool.h>

using namespace std;

class CCarte{

protected:
    char *titlu,*autor,*editura;
    ISBNNN f;
    int an;
    float pret;
    int aux1,aux2,aux3;
    int number = 0;
    int invers = 0;
    int cif;

public:
    CCarte();

    ~CCarte();

    void citire_carte();

    void afisare_carte();

    int cautare_titlu(char *titlu);

    int cautare_editura(char *editura);

    int cautare_ISBN(int id_tara, int id_editura, int id_titlu, int cifra);

};
