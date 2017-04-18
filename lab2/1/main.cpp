#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main ()
{
    char a[20][100],b[30];
    int n;
    cout<<"n = "; cin>>n;
    cout<<"Secventa de siruri de caractere: ";
    int i;
    for(i=1;i<=n;i++){
        cin.get(a[i],100);
    }
    cout<<"Output: ";
    for(i=1;i<=n;i++)
        puts(a[i]);

}
