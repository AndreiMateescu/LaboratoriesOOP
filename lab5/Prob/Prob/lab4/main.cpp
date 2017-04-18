#include"CCarte.h"

int main ()
{
    CCarte *x;

    int n;
    cout<<"Cate elemente doriti sa inserati: "; cin>>n;
    x = new CCarte[n+2];

    int aux;
    int i;
    for(i=1;i<=n;i++)
      x[i].citire_carte();

    cout<<endl<<endl;

    for(i=1;i<=n;i++)
        x[i].afisare_carte();

    int option;
    cout<<"1. Cautare dupa nume"<<endl<<"2. Cautare dupa editura"<<endl<<"3. Cautare dupa ISBN"<<endl;
    cout<<"Optiune: "; cin>>option;
    while(option!=0){
        if(option == 1){
            char *aux;
            int y[100]={0};
            aux = new char[20];
            cout<<"Titlu: "; cin>>aux;

            for(i=1;i<=n;i++){
                y[i] = x[i].cautare_titlu(aux);
            }
            int ok = 0;
            for(i=1;i<=n;i++)
                if(y[i] == 1)
                    ok = 1;
            if(ok==1)
                cout<<aux<<endl;
            else
                cout<<"Nu s-a gasit";
        }

        else
            if(option == 2){
                char *aux;
                int y[100]={0};
                aux = new char[20];
                cout<<"Editura: "; cin>>aux;
                for(i=1;i<=n;i++)
                    y[i] = x[i].cautare_editura(aux);

                int ok = 0;
                for(i=1;i<=n;i++)
                    if(y[i] == 1)
                        ok = 1;
                if(ok==1)
                    cout<<aux<<endl;
                else
                    cout<<"Nu s-a gasit";
            }
            else
                if(option == 3){
                    int a,b,c,d;
                    int y[100] = {0};

                    cout<<"ID tara: "; cin>>a;
                    cout<<"ID editura: "; cin>>b;
                    cout<<"ID titlu: "; cin>>c;
                    cout<<"ID cifra: "; cin>>d;

                    for(i=1;i<=n;i++)
                        y[i] = x[i].cautare_ISBN(a,b,c,d);

                    int ok = 0;
                    for(i=1;i<=n;i++)
                        if(y[i] == 1)
                            ok = 1;

                if(ok==1){
                    cout<<"ID tara: "<<a;
                    cout<<"ID editura: "<<b;
                    cout<<"ID titlu: "<<c;
                    cout<<"ID cifra: "<<d<<endl;
                }
                else
                    cout<<"Nu s-a gasit";
                }
        cout<<endl<<"Optiune: "; cin>>option;
    }
    return 0;
}
