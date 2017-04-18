#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
    {
        int nr = 0;

        char *s1,*s2;
        int position;
        cout<<"Sir 1: "; cin>>s1;
        cout<<"Sir 2: "; cin>>s2;
        position = strstr(s1,s2);
        if(position)
            nr++;

        cout<<nr;
        getch();
        return 0;

    }

int strstr(char *s1,char *s2)
{
    int flag=1;
    int i,j;
    for(i=0; ;i++)
    {
        if(s1[i]==s2[0])
        for(j=i;*s2;j++)
        {
            if(s1[j]!=s2[j])
            flag=0;
        }

    }
    if(flag)
        return 1;
    else
        return 0;
}
