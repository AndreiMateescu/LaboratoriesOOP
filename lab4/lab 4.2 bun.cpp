#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

class ISBNNN{
protected:
    int id_tara;//3
    int id_editura;//3
    int id_titlu;//3
    char cifra;//1

public:
    int getID_tara(){
        return id_tara;
    }
    int getID_editura(){
        return id_editura;
    }
    int getID_titlu(){
        return id_titlu;
    }
    int getCifra(){
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
    void set_cifra(char cifra){
        this->cifra = cifra;
    }

};


class CCarte{

protected:
    char *titlu,*autor,*editura;
    ISBNNN f;
    int an;
    float pret;
    int aux;

public:
    CCarte(){
        titlu = new char[20];
        autor = new char[20];
        editura = new char[20];
    }

    ~CCarte(){
        delete [] titlu;
        delete [] autor;
        delete [] editura;
    }

    void citire_carte(){
        cout<<"Titlu: "; cin>>titlu;
        cout<<"Autor: "; cin>>autor;
        cout<<"Editura: "; cin>>editura;
        cout<<"ISBN ID tara: "; cin>>aux;
        f.set_ID_tara(aux);
        cout<<"ISBN ID editura: "; cin>>aux;
        f.set_ID_editura(aux);
        cout<<"ISBN ID titlu: "; cin>>aux;
        f.set_ID_titlu(aux);
        cout<<"ISBN cifra: "; cin>>aux;
        f.set_cifra(aux);
        cout<<"An: "; cin>>an;
        cout<<"Pret: "; cin>>pret;
        cout<<endl;
    }

    void afisare_carte(){
        cout<<"Titlu: "<<titlu<<endl;
        cout<<"Autor: "<<autor<<endl;
        cout<<"Editura: "<<editura<<endl;
        cout<<"ISBN ID tara: "<<f.getID_tara();
        cout<<"ISBN ID editura: "<<f.getID_editura();
        cout<<"ISBN ID titlu: "<<f.getID_titlu();
        cout<<"ISBN cifra: "<<f.getCifra();
        cout<<"An: "<<an<<endl;
        cout<<"Pret: "<<pret<<endl;
    }

    void cautare_titlu(char *titlu){
        if(strcmp(this->titlu, titlu)==0){
            cout<<titlu<<endl;
        }
    }

    void cautare_editura(char *editura){
        if(strcmp(this->editura, editura)==0){
            cout<<editura<<endl;
        }
    }

    /*void cautare_ISBN(char *ISBN){
        if(strcmp(this->ISBN, ISBN)==0){
            cout<<ISBN<<endl;
        }
    }*/

};

int main ()
{
    CCarte x[3];
    ISBNNN f;

    int aux;
    int i;
    for(i=1;i<=2;i++)
      x[i].citire_carte();


    cout<<endl<<endl;
    for(i=1;i<=2;i++)
        x[i].afisare_carte();

    int option;
    cout<<"1. Cautare dupa nume"<<endl<<"2. Cautare dupa editura"<<endl<<"3. Cautare dupa ISBN";
    cout<<"Optiune: "; cin>>option;
    while(option!=0){
        if(option == 1){
            char *aux;
            aux = new char[20];
            cout<<"Titlu: "; cin>>aux;

            for(i=1;i<=2;i++)
                x[i].cautare_titlu(aux);
        }
        else
            if(option == 2){
                char *aux;
                aux = new char[20];
                cout<<"Editura: "; cin>>aux;
                for(i=1;i<=2;i++)
                    x[i].cautare_editura(aux);
            }
            //else
              //  if(option == 3){
                //    char *aux;
                  //  aux = new char[20];
                    //cout<<"ISBN: "; cin>>aux;
                    //for(i=1;i<=2;i++)
                      //  x[i].cautare_ISBN(aux);
                //}
        cout<<endl<<"Optiune: "; cin>>option;
    }
    return 0;
}

