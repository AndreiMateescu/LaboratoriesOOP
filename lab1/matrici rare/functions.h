///\file functions.h
///\brief C library implementation to generate sparse matrices

#include<stdio.h>///> printf() , scanf() , fprintf() , fscanf()
#include<malloc.h>///>malloc()
#include<math.h>///> addion, multiplication, pow(a,b)..and so on..
#include<conio.h>///> For Visual Studio: _getche()
#include<stdbool.h>///> bool type (true or false)
#include<stdlib.h>
#include<time.h>///>time()

typedef struct{
    int line,column,data;
    struct matrix *next;
}matrix;


matrix *matrix_one, *matrix_two, *p, *q, *last, *matrix_three; //!<3 matrix (type: matrix (structure)). They are also line, column, data, and the adress of the next nonzero element
matrix *mat; //!< also than before

matrix  *create(int lines, int columns); //!<function that creates one sparse matrix with the nonzero elements

matrix *involution(int line, matrix *matrix_one, matrix *matrix_two);

void print_matrix (matrix *mat, int lines, int columns);
