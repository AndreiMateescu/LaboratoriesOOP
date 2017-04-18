#include"functions.h"
#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>


int main ()
{
    int option,lines,columns,aux;
    srand(time(NULL));

    matrix *r,*first,*last;
    int power,i;
    printf("You chossen involution\n");

    lines=rand()%5+1;
    columns=lines;

    matrix_one=create(lines,columns);
    printf("Generating matrice: ");
    print_matrix(matrix_one,lines,columns);
    printf("\n");

    p=matrix_one;
    r=(matrix*)malloc(sizeof(matrix));
    first=last=r;
    while (p!=NULL){
            r=(matrix*)malloc(sizeof(matrix));
            r->data=p->data;
            r->line=p->line;
            r->column=p->column;
            last->next=r;
            last=r;
            last->next=NULL;
            p=p->next;
            }
    p=first;
    matrix_two=first->next;
    free(p);

    power=rand()%5+1;

    printf("Genrating the power:%d\n",power);

    for (i=1;i<=power-1;i++){
            matrix_three=involution(lines,matrix_two,matrix_one);
            matrix_two=matrix_three;
    }
    print_matrix(matrix_two,lines,columns);
}
