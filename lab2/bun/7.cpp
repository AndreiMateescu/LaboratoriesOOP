#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<string.h>

using namespace std;

template <typename T>
void read(int n, T *v)
{
    int i;
    for(i=0;i<n;i++)
        cin>>v[i];
}

template <typename T>
void write(int n, T *v)
{
    int i;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}

template <typename T>
void sortare(int n, T *v)
{
    T aux;
    int i,j;
    for(i=0;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
        }
}

int main ()
{
    int n;
    int a[20];
    float b[20];
    string c[20];

    cout<<"Numar elemente: "; cin>>n;

    cout<<"Numere intregi: ";
    read<int>(n,a);
    sortare<int>(n,a);
    write<int>(n,a);
    cout<<endl;

    cout<<"Numere reale: ";
    read<float>(n,b);
    sortare<float>(n,b);
    write<float>(n,b);
    cout<<endl;

    cout<<"Siruri de caractere: ";
    read<string>(n,c);
    sortare<string>(n,c);
    write<string>(n,c);
    cout<<endl;

    return 0;
}


