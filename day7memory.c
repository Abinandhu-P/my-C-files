#include<stdio.h>
#include<stdlib.h>
 
 
static int** memoryallocation(int row,int column){
int** arr=(int**)malloc(row*(sizeof(int*)));
for(int i=0;i<row;i++) arr[i]=(int *)malloc(column*(sizeof(int)));
return arr;
}
