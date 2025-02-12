#include<stdio.h>
#include<stdlib.h>
#include "day7memory.c"
 
 
int**  multiplymatric(int **arr1,int m,int n,int ** arr2,int r,int c){
int ** ans = memoryallocation(m,c);
 
for(int i=0;i<m;i++){
         for(int j=0;j<c;j++){
           for(int k=0;k<r;k++){
                   ans[i][j]+=arr1[i][k]*arr2[k][j];}}}
 
 
 
return ans;
 
}
