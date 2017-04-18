#include"CPunct.h"

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
