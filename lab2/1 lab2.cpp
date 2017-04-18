#include<stdio.h>
#include<string.h>
#include<conio.h>

char subsstr(char *s1,char *s2)
{
    int flag=1;
    char i,j;
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
    return i;
    else
    return 0;
}

int main()
    {

        char *s1,*s2,*position;
        printf("Enter string:\n");
        scanf("%s", &s1);
        printf("Enter word to find:\n");
        scanf("%s", &s2);
        *position=subsstr(s1,s2);
        if(*position)
        printf("word is found at %c loc\n",*position);
        else
        printf("word not found");
        getch();
        return 0;

    }
