#include<iostream>

using namespace std;

class CPrincipal{
protected:
    int indicativ;
    int lungime;
    int latime;
public:
    CPrincipal(){
        int indicativ = 0;
        int lungime = 0;
        int latime = 0;
    }
    CPrincipal(int indicativ, int lungime, int latime){
        this->indicativ = indicativ;
        this->lungime = lungime;
        this->latime = latime;
    }

    virtual void citire() = 0;
    virtual void afisare() = 0;
    virtual void modificare() = 0;
};


class SpatiiVerzi:public CPrincipal{
protected:
    char **a;
    int n;
public:
    virtual void citire(){
        cout<<"Indicativ: "; cin>>indicativ;
        cout<<"Nr plante: "; cin>>n;
        a = new char* [n];
        for(int i=0;i<n;i++){
            a[i] = new char[20];
            cin>>a[i];
        }
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
    }

    virtual void modificare(){
        cout<<"Datele se vor modifica"<<endl;
        cout<<"Indicativ: "; cin>>indicativ;
        cout<<"Nr plante: "; cin>>n;
        a = new char* [n];
        for(int i=0;i<n;i++){
            a[i] = new char[20];
            cin>>a[i];
        }
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
    }

    virtual void afisare() {
        cout<<endl<<"Indicativ: "<<indicativ<<endl;
        cout<<"Plante: ";
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<"Lungime: "<<lungime;
        cout<<"Latime: "<<latime;
    }

    ~SpatiiVerzi() {
        for (int i=0;i<n;i++)
            delete a[i];
        delete a;
    }

};

class Case:public CPrincipal{
    protected:
        int etaj;
        int numar_camere;
        int nr_max_pers;
    public:
        virtual void citire(){
            cout<<"Indicativ: "; cin>>indicativ;
            cout<<"Are etaje? "<<endl<<"1 -> da"<<endl<<"0 -> nu"; cin>>etaj;
            cout<<"Numar camere: "; cin>>numar_camere;
            cout<<"Numar maxim persoane: "; cin>>nr_max_pers;
            cout<<"Lungime: "; cin>>lungime;
            cout<<"Latime: "; cin>>latime;
        }

        virtual void modificare(){
            cout<<endl<<"Datele se vor modifica"<<endl;
            cout<<"Indicativ: "; cin>>indicativ;
            cout<<"Are etaje? "<<endl<<"1 -> da"<<endl<<"0 -> nu"; cin>>etaj;
            cout<<"Numar camere: "; cin>>numar_camere;
            cout<<"Numar maxim persoane: "; cin>>nr_max_pers;
            cout<<"Lungime: "; cin>>lungime;
            cout<<"Latime: "; cin>>latime;
        }

        virtual void afisare(){
            cout<<"Indicativ: "<<indicativ<<endl;

            if(etaj == 1)
                cout<<"Cu etaj"<<endl;
            else
                cout<<"Fara etaj"<<endl;

            cout<<"Numar camere: "<<numar_camere<<endl;
            cout<<"Numar maxim persoane: "<<nr_max_pers<<endl;
            cout<<"Lungime: "<<lungime<<endl;
            cout<<"Latime: "<<latime<<endl;
        }

        ~Case(){
        }
};

class Blocuri:public CPrincipal{

protected:
    int numar_etaje;
    int magazin_parter;

public:
    virtual void citire(){
        cout<<"Indicativ: "; cin>>indicativ;
        cout<<"Are magazin la parter? "<<endl<<"1 -> da"<<endl<<"0 -> nu"; cin>>magazin_parter;
        cout<<"Numar etaje: "; cin>>numar_etaje;
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
    }

    virtual void modificare(){
        cout<<endl<<"Datele se vor modifica"<<endl;
        cout<<"Indicativ: "; cin>>indicativ;
        cout<<"Are magazin la parter? "<<endl<<"1 -> da"<<endl<<"0 -> nu"; cin>>magazin_parter;
        cout<<"Numar etaje: "; cin>>numar_etaje;
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
    }

    virtual void afisare(){
        cout<<"Indicativ: "<<indicativ<<endl;
        if(magazin_parter == 1)
                cout<<"Cu etaj"<<endl;
            else
                cout<<"Fara etaj"<<endl;
        cout<<"Numar etaje: "<<numar_etaje<<endl;
        cout<<"Lungime: "<<lungime<<endl;
        cout<<"Latime: "<<latime<<endl;
    }

    ~Blocuri(){
    }
};

class Magazine:public CPrincipal{

protected:
    int inaltime;
public:

    virtual void citire(){
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
        cout<<"Inaltime: "; cin>>inaltime;
    }

    virtual void modificare(){
        cout<<endl<<"Datele se vor modifica"<<endl;
        cout<<"Lungime: "; cin>>lungime;
        cout<<"Latime: "; cin>>latime;
        cout<<"Inaltime: "; cin>>inaltime;
    }

    virtual void afisare(){
        cout<<"Lungime: "<<lungime<<endl;
        cout<<"Latime: "<<latime<<endl;
        cout<<"Inaltime: "<<inaltime<<endl;
    }

    ~Magazine(){
    }
};

int main ()
{
    CPrincipal *x;
    CPrincipal** v;

    v = new CPrincipal* [4];

    int zone;
    cout<<"Numar de zone: "; cin>>zone;
    cout<<"A. Completarea zonelor"<<endl<<"B. Modificarea unei zone"<<endl<<"C. Stergerea continutului unei zone"<<endl<<"D. Afisarea unei zone"<<endl;

    int tip;
    char option;
    cout<<"Optiune: "; cin>>option;

    while(option != 'x' && option != 'X'){
        if(option == 'a' || option == 'A'){
            for (int i=0;i<zone;i++) {
                cout<<endl<<"Ati ales citire"<<endl;
                cout<<endl<<"1. Spatii verzi"<<endl<<"2. Case"<<endl<<"3. Blocuri"<<endl<<"4. Magazine"<<endl;
                cout<<"TIP: "; cin>>tip;
                if (tip == 1){
                    x = new SpatiiVerzi();
                    x->citire();
                    v[i] = x;
                }else{
                    if(tip == 2){
                        x = new Case();
                        x->citire();
                        v[i] = x;
                    }
                    else{
                        if(tip == 3){
                            x = new Blocuri();
                            x->citire();
                            v[i] = x;
                        }
                        else
                            if(tip == 4){
                                x = new Magazine();
                                x->citire();
                                v[i] = x;
                            }
                        }
                    }
                }
            }
        else
            if(option == 'B' || option == 'b'){
                int pozitie;
                cout<<endl<<"Ati ales modificare"<<endl;
                cout<<endl<<"Elementul de pe care pozitie doriti sa modificati: "<<endl; cin>>pozitie;
                for(int i=0;i<zone;i++)
                    if(i == pozitie)
                        v[i]->modificare();
                }
                else
                    if(option == 'C' || option == 'c'){
                        int pozitie;
                        cout<<endl<<"Ati ales stergere"<<endl;
                        cout<<"Elementul de pe care pozitie doriti sa-l stergeti: "<<endl; cin>>pozitie;
                        for(int i=0;i<zone;i++)
                            if(i == pozitie){
                                for(int j=pozitie+1;j<zone;j++)
                                    v[j-1] = v[j];
                            }
                        }
                        else
                            if(option == 'D' || option == 'd'){
                                for(int i=0;i<zone;i++){
                                    v[i]->afisare();
                                    cout<<endl;
                                }
                            }
            cout<<"Option: "; cin>>option;
    }

    cout<<endl<<endl;

    return 0;
}

