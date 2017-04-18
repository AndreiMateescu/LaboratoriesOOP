#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;
char sir[100],gasit[30];

int gasire()
{
    int n,m,nr=0;
    int ok = 0;
    n = strlen(sir);
    m = strlen(gasit);
    int i,j;
    i = 0;
    j = 0;
    while(i<=n-1){
        while(sir[i] != gasit[0])
            i++;
        j = 0;

            while(sir[i] == gasit[j] && i<=n-1 && j<=m-1){
                i++;
                j++;
            }
            if(j==m-1)
            nr++;

    }
    return nr;
}

int main ()
{
    int nr;

    cout<<"Sir: ";
    cin>>sir;

    cout<<"Gasit: ";
    cin>>gasit;


    nr = gasire();
    cout<<nr;

    return 0;

}

