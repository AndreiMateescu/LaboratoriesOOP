#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<string.h>

using namespace std;

void read(int n, int *v)
{
    int i;
    for(i=0;i<n;i++)
        cin>>v[i];
}

void read(int n, float *v)
{
    int i;
    for(i=0;i<n;i++)
        cin>>v[i];
}

void read(int n, string v[20])
{
    int i;
    for(i=0;i<n;i++)
        cin>>v[i];
}

void write(int n, int *v)
{
    int i;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}

void write(int n, float *v)
{
    int i;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}

void write(int n, string v[20])
{
    int i;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}

void sortare(int n, int *v)
{
    int aux;
    int i,j;
    for(i=0;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
        }
}

void sortare(int n, float *v)
{
    float aux;
    int i,j;
    for(i=0;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
        }
}

void sortare(int n, string c[20])
{
    int i,j;
    string aux;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(c[i] > c[j]){
                aux = c[i];
                c[i] = c[j];
                c[j] = aux;
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
    read(n,a);
    sortare(n,a);
    write(n,a);
    cout<<endl;

    cout<<"Numere reale: ";
    read(n,b);
    sortare(n,b);
    write(n,b);
    cout<<endl;

    cout<<"Siruri de caractere: ";
    read(n,c);
    sortare(n,c);
    write(n,c);
    cout<<endl;

    return 0;
}

