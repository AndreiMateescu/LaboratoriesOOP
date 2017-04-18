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

void read(int n, char v[20][100])
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

void write(int n, char v[20][100])
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

void sortare(int n, char v[20][100])
{
    int i,j;
    char aux[100];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(v[i],v[j])>0){
                strcpy(aux,v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],aux);
            }
}

int main ()
{
    int n;
    int a[20];
    float b[20];
    char c[20][100];

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
