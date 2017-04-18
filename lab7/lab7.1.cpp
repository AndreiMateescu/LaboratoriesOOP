#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

class CComplex{
private:
    int parte_reala;
    int parte_imaginara;
public:

    CComplex(){
        this->parte_reala = 0;
        this->parte_imaginara = 0;
    }

    CComplex(int parte_reala){
        this->parte_reala = parte_reala;
        this->parte_imaginara = 0;
    }

    CComplex(int parte_reala, int parte_imaginara){
        this->parte_reala = parte_reala;
        this->parte_imaginara = parte_imaginara;
    }

    void citire()
    {
        cout<<"Parte reala: "; cin>>parte_reala;
        cout<<"Parte imaginara: "; cin>>parte_imaginara;
    }

    void afisare()
    {
        cout<<"Parte reala: "<<parte_reala;
        cout<<"Parte imaginara: "<<parte_imaginara;
    }

    CComplex operator_aritmetic(CComplex a, CComplex b)
    {
        CComplex c;
        c.parte_reala = a.parte_reala*b.parte_reala - a.parte_imaginara*b.parte_imaginara;
        c.parte_imaginara = a.parte_imaginara*b.parte_reala + a.parte_reala*b.parte_imaginara;

        return c;
    }

    CComplex operator_aritmetic(CComplex a, int n)//ridicare la puterea n
    {
        CComplex c;
        c.parte_reala = 0;
        c.parte_imaginara = 0;
        for(int i=2;i<=n;i++){
            c.parte_reala = c.parte_reala + a.parte_reala*a.parte_reala - a.parte_imaginara * a.parte_imaginara;
            c.parte_imaginara = c.parte_imaginara + 2*a.parte_reala*a.parte_imaginara;
        }

        return c;
    }

    int get_reala(){
        return parte_reala;
    }
    int get_imaginara(){
        return parte_imaginara;
    }

    void set_reala(int parte_reala){
        this->parte_reala = parte_reala;
    }
    void set_imaginara(int parte_imaginara){
        this->parte_imaginara = parte_imaginara;
    }
};

long x,y,w,t;

int main ()
{
    CComplex *z;
    int n;
    cout<<"Dati numarul elementelor: "; cin>>n;
    z = new CComplex[2*n];

    for(int i=1;i<=2*n;i++)
        z[i].citire();


    for(int i=1;i<=2*n;i++){
        z[i].operator_aritmetic(z[i],3);
        //z[i+1] = z[i].operator_aritmetic(z[i],z[i+1]);
        x = z[i].get_reala();
        y = z[i].get_imaginara();
        cout<<x<<" "<<y<<endl;
    }

    //for(int i=1;i<=2*n;i++)
        //cout<<z[i].get_reala()<<" "<<z[i].get_imaginara()<<endl;

    //x = z[2*n-1].get_reala();
    //y = z[2*n-1].get_imaginara();


    /*for(int i=2;i<=2*n;i=i+2){
        //z[i].operator_aritmetic(z[i],4);
        z[i+1] = z[i].operator_aritmetic(z[i],z[i+1]);
    }
    t = z[2*n].get_reala();
    w = z[2*n].get_imaginara();
    */
    //cout<<x<<" + "<<y<<"i "<<endl;
    //cout<<t<<" + "<<w<<"i ";


}
