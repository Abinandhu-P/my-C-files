#include<stdio.h>
int func(int arr[100][100],int arr1[100][100], int row, int column);
int row, column;
int main()
{
	int arr[100][100];
	int arr1[100][100];
	
	printf("enter the row and column value of array  : \n");
	scanf("%d %d",&row, &column);
	
	
	
	
	for(int i=0; i<row;++i)
	{
	 for(int j=0;j<column;j++)
	 {
	 printf("enter the %d %d element of array 1 :\n", i,j);
	  scanf("%d",&arr[i][j]);
	 }
	 
	 
	}
	for(int i=0; i<row;++i)
	{
	 for(int j=0;j<column;j++)
	 {
	 printf("enter the %d %d element of array 2 :\n", i,j);
	  scanf("%d",&arr1[i][j]);
	 }
	 
	 
	}
	//printf("row %d",row);
	//printf("column %d",column);
	func(arr,arr1,row,column);
	
	
}
int func(int arr[100][100], int arr1[100][100], int row , int column)
{
  //printf("row %d",row);
  //printf("column %d",column);
  int sum [row][column];
  for(int i=0;i<row;++i)
  {
  for(int j=0;j<column;j++)
  {
  sum[i][j] = arr[i][j]+arr1[i ][j];
  }
  }
  for(int i=0; i<row;++i)
	{
	 for(int j=0;j<column;j++)
	 {
	  printf("%d\n",sum[i][j]);
	 }
	 
	 
	}
	return 0;
}
