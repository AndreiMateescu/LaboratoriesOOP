#include"Ccaine.h"

int main ()
{
    CCaineFaraPete *x;
    CCaineCuPete *y;

    int n,m;
    cout<<"Caini fara pete: "; cin>>n;
    x = new CCaineFaraPete[n+2];
    cout<<"Caini cu pete: "; cin>>m;
    y = new CCaineCuPete[m+2];

    int i;
    for(i=1;i<=n;i++)
        x[i].citire_date();

    for(i=1;i<=n;i++)
        x[i].afisare_date();

    for(i=1;i<=m;i++)
        y[i].citire_date_pete();

    for(i=1;i<=m;i++)
        y[i].afisare_date_pete();

    return 0;
}
