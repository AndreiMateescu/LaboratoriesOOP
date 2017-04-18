#include "ISBNNN.h"


int ISBNNN::getID_tara(){
        return id_tara;
}

int ISBNNN::getID_editura(){
        return id_editura;
}

int ISBNNN::getID_titlu(){
        return id_titlu;
}
int ISBNNN::getCifra(){
        return cifra;
}

void ISBNNN::set_ID_tara(int id_tara){
        this->id_tara = id_tara;
}

void ISBNNN::set_ID_editura(int id_editura){
        this->id_editura = id_editura;
}

void ISBNNN::set_ID_titlu(int id_titlu){
        this->id_titlu = id_titlu;
}

void ISBNNN::set_cifra(int cifra){
        this->cifra = cifra;
}
};
