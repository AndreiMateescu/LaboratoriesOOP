#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

class ISBN{
protected:
    int id_tara;//3
    int id_editura;//3
    int id_titlu;//3
    int cifra;//1

    int nr = 0;

public:
    getID_tara(){
        return id_tara;
    }
    getID_editura(){
        return id_editura;
    }
    getID_titlu(){
        return id_titlu;
    }
    getCifra(){
        return cifra;
    }

    void set_ID_tara(int id_tara){
        this->id_tara = id_tara;
    }
    void set_ID_editura(int id_editura){
        this->id_editura = id_editura;
    }
    void set_ID_titlu(int id_titlu){
        this->id_titlu = id_titlu;
    }
    void set_cifta(int cifra){
        this->cifra = cifra;
    }
};
