#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class CPunct{

protected:
    int x;
    int y;

public:
    CPunct(){
        x = y = 0;
    }
    CPunct(int x, int y){
        this->x = x;
        this->y = y;
    }

    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }
};

class CDreapta:public CPunct{
private:
    int x2;
    int y2;

public:
    CDreapta():CPunct(){
        x2 = y2 = 0;
    }
    CDreapta(int x, int y, int x2, int y2):CPunct(x,y){
        this->x2 = x2;
        this->y2 = y2;
    }

    int getX2(){
        return x2;
    }
    int getY2(){
        return y2;
    }
    void setX2(int x2){
        this->x2 = x2;
    }
    void setY2(int y2){
        this->y2 = y2;
    }

    double dreapta(){
        cout<<endl;
        cout<<"(x-"<<x<<")"<<"/"<<"("<<x2<<"-"<<x<<")"<<"="<<"(y-"<<y<<")"<<"/"<<"("<<y2<<"-"<<y<<")";
    }
};


class CCerc:public CPunct{
private:
    int Raza;
public:
    CCerc():CPunct(){
        Raza = 0;
    }
    CCerc(int x, int y, int R):CPunct(x,y),Raza(R){
    }

    int getRaza(){
        return Raza;
    }
    void setRaza(int Raza){
        this->Raza = Raza;
    }

    float arie_cerc(){
        return 3.14*Raza*Raza;
    }
    float perimetru_cerc(){
        return 2*3.14*Raza;
    }
};

class CDreptunghi:public CPunct{

private:
    int x2,y2,x3,y3,x4,y4;

public:
    CDreptunghi():CPunct(){
        x2 = y2 = x3 = y3 = x4 = y4 = 0;
    }
    CDreptunghi(int x,int y, int a, int b):CPunct(x,y){
        this->x2 = x;
        this->x4 = b;
        this->x3 = b;

        this->y4 = y;
        this->y2 = a;
        this->y3 = a;
    }
    int arie_dreptunghi(){
        return (x4-x)*(y2-y);
    }
    int perimetru_dreptunghi(){
        return 2*(x4-x + y2-y);
    }
};

class CPatrat:public CPunct{

private:
    int x2,y2,x3,y3,x4,y4;

public:
    CPatrat():CPunct(){
        x2 = y2 = x3 = y3 = x4 = y4 = 0;
    }
    CPatrat(int x,int y, int a, int b):CPunct(x,y){
        this->x2 = x;
        this->x4 = b;
        this->x3 = b;

        this->y4 = y;
        this->y2 = a;
        this->y3 = a;
    }
    int arie_patrat(){
        return (x4-x)*(x4-x);
    }
    int perimetru_patrat(){
        return 4*(x4-x);
    }

};


int main ()
{
    CPunct punct(1,3);
    CDreapta drp(1,3,2,4);

    cout<<"Ecuatia dreptei: ";
    drp.dreapta();

    ////////////
    CCerc c(2,4,3);
    cout<<endl;
    cout<<endl<<"Arie cerc: "<<c.arie_cerc()<<endl;
    cout<<"Perimetru cerc: "<<c.perimetru_cerc()<<endl;

    cout<<endl;
    CDreptunghi d(2,3,7,4);
    cout<<endl<<"Arie dreptunghi: "<<d.arie_dreptunghi()<<endl;
    cout<<"Perimetru dreptunghi: "<<d.perimetru_dreptunghi()<<endl;

    cout<<endl;
    CPatrat p(2,3,5,4);
    cout<<endl<<"Arie patrat: "<<p.arie_patrat()<<endl;
    cout<<"Perimetru patrat: "<<p.perimetru_patrat()<<endl;


	_getche();
    return 0;
}
