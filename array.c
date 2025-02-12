#include<stdio.h>
#include<stdlib.h>


extern int** memory(int m,int n);
extern int**  multiplymatric(int **arr,int m,int n,int ** arr1,int r,int c,int** res);
extern void input(int **arr,int row,int column);
extern int** print(int **multiply,int row,int column1);


int main()
{
int row,column , row1, column1;
printf("Enter row and column values of matrix 1 :");
scanf("%d %d",&row,&column);
printf("Enter row and column values of matrix 1 :");
scanf("%d %d",&row1,&column1);
if(row ==0 || column==0 || row1 ==0|| column1==0)
exit(1);

printf("input have been assigned\n");
if(column!=row1){	
	printf("Invalid Dimensions\n");
	exit(0);
}
int **arr =memory(row,column);
printf("memory is allocated\n");
printf("The array input is assigned\n");
int **arr1 = memory(row1,column1);
printf("memory is allocated\n");
int** res = memory(row,column1);
input(arr,row,column);
input(arr1,row1,column1);
printf("matrix inputs is done\n");
multiplymatric(arr,row,column,arr1,row1,column1,res);

/*for(int i=0;i<row;i++){
         for(int j=0;j<column1;j++){
 
                 printf("%d ",multiply[i][j]);}
printf("\n");
}*/
print(res,row,column1);
//printf("%d\n ",(sizeof(arr)/sizeof(arr[0])));
free(arr);
free(arr1);
//printf("%d\n ",(sizeof(arr)/sizeof(arr[0])));
printf("the memory is freed up" );


}
