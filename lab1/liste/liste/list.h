#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct lista{
    char nume[20];
    float nota;
    lista *next;
};

void separare(lista *prim, lista *&prim_admis, lista *&prim_respins);
void cautare(lista *prim);
void sortare(lista *&prim, int n);
void afisare(lista *prim);
void creare(lista *&prim, lista *&ultim, int n);
