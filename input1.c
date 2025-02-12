#include<stdio.h>
#include<stdlib.h>
 
void  inputmatric(int** arr,int m,int n){
         for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               printf("Enter value of matrix arr[%d][%d] is: ",i,j);
               scanf("%d",&arr[i][j]);
               printf("\n"); }
 
 
         }
 
 
}
