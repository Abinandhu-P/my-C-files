#include<stdio.h>


void input(int **arr,int row,int column){

printf("Getting input");

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
               printf("Enter value of matrix arr[%d][%d] is: ",i,j);
               scanf("%d",&arr[i][j]);
               printf("\n"); 
               }
 }
 
         
}
