#include"functions.h"
#include<stdio.h>///> printf() , scanf() , fprintf() , fscanf()
#include<malloc.h>///>malloc()
#include<math.h>///> addion, multiplication, pow(a,b)..and so on..
#include<conio.h>///> For Visual Studio: _getche()
#include<stdbool.h>///> bool type (true or false)
#include<stdlib.h>
#include<time.h>///>time()

matrix  *create(int lines, int columns) //!<function that creates one sparse matrix with the nonzero elements
{
    int number_elements; //!< number of nonzero elements from matrix
    int i,n,x,y; //!< Index to move from an elelemnt to another. Increasing with 1 position in liked list (structure matrix)
    bool ok; //!< for verify something

    matrix *r; //!< new element (type: matrix (structure)
    number_elements= 0.4*lines*columns; //!< 40% of elements from matrix are nenulls

    mat = NULL;
    p = (matrix*)malloc(sizeof(matrix)); //!<  dynamic memory allocation for element (type: matrix)

    p->column = rand()%columns+1; //!< the column of the nenzero element from structure will generate random using rand function
    p->line = rand()%lines+1; //!< the line of the nenzero element from structure will generate random using rand function
    p->data = rand()%10+1; //!< the data of the nenzero element from structure will generate random using rand function

    p->next = NULL; //!< next element after p is NULL
    mat = p;last = p; //!< first element and the last is p. Structure has no more than one element.

    for(i=1;i<=number_elements-1;i++){
        x = rand()%columns+1;//!< the column of the nenzero element from structure will generate random using rand function
        y = rand()%lines+1;//!< the lines of the nenzero element from structure will generate random using rand function
        ok = true; //!< suppose that the column and the line of the next element are not equals with the column and the line of the other element from structure. Using this because function rand.

        r = mat; //!< r (element (structure, matrix) become the first element)
        while(r != NULL){//!< structure has elements
            if (x == r->column && y == r->line) //!< verify property
               ok = false;
            r = r->next;//!< go to next element
        }

        if (ok == true){//!< the element can be added in structure
            p = (matrix*)malloc(sizeof(matrix));//!<  dynamic memory allocation for element (type: matrix)
            p->data = rand()%10+1;//!< generate random
            p->line = y;
            p->column = x;
            last->next = p;//!<  last element after last become p
            last = p;//!<  updated new last.
            last->next = NULL;//!< linked list or structure -> corectly created
            }
    }

return mat;
}

matrix *involution(int l, matrix *matrix_one, matrix *matrix_two)
{
    int ok1,ok2,s,i,j,k,x,y; //!< integers

    matrix *last_three,*prim_three; //!< news elements (type: matrix (structure))
    matrix *r,*p;

    r = (matrix*)malloc(sizeof(matrix)); //!< dynamic memory allocation
    prim_three=r; //!< first element from structure is r;
    last_three=r; //!< last element from structure is r;

    for (i=1;i<=l;i++) //!< goes to element with element until the last element
    for (j=1;j<=l;j++){
       s=0; //!< init sum with 0
       for (k=1;k<=l;k++){
              ok1=0;
              p=matrix_one; //!< p become first element
              while(p!=NULL){ //!< goes to element with element until NULL
                    if (p->line==i && p->column==k){
                          ok1=1;
                          x=p->data;
                      }
                 p=p->next; //!< goes to next
                }

                ok2=0;
                p=matrix_two;
                while(p!=NULL){
                    if (p->line==k && p->column==j){
                          ok2=1;
                          y=p->data;
                      }
                 p=p->next;
                }

          if (ok1==1 && ok2==1)//!< conditions are true
              s=s+x*y;
          }
          if (s!=0){
                   r=(matrix*)malloc(sizeof(matrix));//!< dynamic memory allocation for element (type: matrix)
                   r->data=s;
                   r->line=i;
                   r->column=j;
                   last_three->next=r; //!< next element after last become r
                   last_three=r; //!< updating last element
                   r->next=NULL;
                   last_three->next=NULL; //!< last element after r become NULL
               }

   }

    p = prim_three;
    matrix_three=prim_three->next;
    free(p);


    return matrix_three;
}


void print_matrix (matrix *mat, int lines, int columns)
{
    int i,j; //!; integers
    bool ok;

    for(i=1;i<=lines;i++){//!< go to element with element
        for(j=1;j<=columns;j++){
            ok = false;//!< false
            p = mat;//!< the data from mat is stored into p, without delete

            while(p!=NULL && ok == false){//!< go to element with element while the conditions are true
                if(p->line == i && p->column == j){
                    ok = true;//!< true
                    printf("%d ", p->data);//!< show the element
                }
                p = p->next;//!< go to next element
            }
            if(ok == false)
                printf("0 ");
        }
        printf("\n");
    }
}
