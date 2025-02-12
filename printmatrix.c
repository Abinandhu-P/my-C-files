#include<stdio.h>
#include<stdlib.h>
void printans(int** answer,int m,int c){
 
for(int i=0;i<m;i++){
         for(int j=0;j<c;j++){
 
                 printf("%d ",answer[i][j]);}
printf("\n");
}}
 
 
 
void freematric(int** matrix,int row){
        for(int i=0;i<row;i++){
                free(matrix[i]);}
        free(matrix);}
