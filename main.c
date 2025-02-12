#include<stdio.h>

#include <stdlib.h>

#include "day7memory.c"
 
extern int ** memoryallocation(int m,int n);

extern void  inputmatric(int **matrix,int m,int n);

extern void printans(int **answer,int m,int c);

extern int ** multiplymatric(int **arr1,int m,int n,int **arr2,int r,int c);

extern void freematric(int** matrix,int row);

int main(){

       int m,n;

      int r,c;
 
      printf("Dimensions of Matrix A:\n");

      printf("Enter row m:");

      scanf("%d",&m);

      printf("Enter column n:");

      scanf("%d",&n);

     if(m==0 || n==0){

             printf("Invalid input,provide valid input");

             exit(1);

     }

      printf("Dimensions of Matrix B:\n");

      printf("Enter row r:");

      scanf("%d",&r);

      printf("Enter column c:");

      scanf("%d",&c);

       if(r==0||c==0||n!=r){

          printf("Invalid input,provide valid input");

          exit(1);

      }
 
 
     int ** arr1 =memoryallocation(m,n);

      inputmatric(arr1,m,n);

     int **arr2  =memoryallocation(r,c);


     inputmatric(arr2,r,c);

     int ** answer= multiplymatric(arr1,m,n,arr2,r,c);

     printans(answer,m,c);

     freematric(arr1,m);

     freematric(arr2,r);

     freematric(answer,m);

     return 0;

}

 
