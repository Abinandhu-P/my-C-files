#include<stdio.h>
int sq(int a);
int sum(int val);
int arr[100];

int main(){
	int a;
	while(1)
	{
	 printf("----------------------------------\n");
         printf("Finding square of first N numbers and its sum\n");
         printf("Enter the N :\n");
         scanf("%d",&a);
         sq(a);
	 int add=0;
	 for(int i=0;i<a;i++)
	 {

	  add +=arr[i];
	 
	 }
	 printf("The sum of N square number is = %d", add);
	}
}
int sq(int n)
{
	for(int i=1;i<=n;i++)
	{
		int square = i*i;
          
		   printf("The Square of First N number is : %d\n",square);
	           sum(square);
	   
}
}


int sum (int val)
{

static int i=0;
arr[i]=val;
i++;
}
 
