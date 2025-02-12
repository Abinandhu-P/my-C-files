#include<stdio.h>
int sq(int a);
int sum(int val);
int arr[100];
int leap(int year);
int year;
int sqrt(int a, int b);
int main(){
int num,conti;

      while(1)
      {
      printf("-------------------------\n");
      printf("Its an console\n ");
      printf("IF YOU WANT TO PLAY\n \n");
      printf("To find square of 1st N numbers and its sum :: enter- 1\n");
      printf("To know the year is leap or not :: enter - 2 \n");
      printf("To find Exponent of an number :: enter - 3\n");
      printf("--------------------------\n");
      scanf("%d",&num);
      
      
      if(num <1 || num >3 )
      printf("Enter correct value\n");
	int a;
	while(num==1 )
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
	 printf("The sum of N square number is = %d\n", add);
	 printf("----------------------------------\n");
	 printf("To go back or to continue :: \n" );
	 printf("To go back to main menu : enter - 0\n");
	 printf("To continue :: enter -1 \n" );
	 scanf("%d",&conti);
	 if(conti == 0)
	 num =0;
	 else 
	 num =1;
	}
	
	
	
	while(num ==2)
{
 printf("------------------------------------------\n");
 printf("To find the given year is leap year or not\n");
 printf("Enter the year : \n");
 scanf("%d",&year);
 leap(year);
 printf("------------------------------------------\n");
 printf("----------------------------------\n");
	 printf("To go back or to continue :: \n" );
	 printf("To go back to main menu : enter - 0\n");
	 printf("To continue :: enter -1 \n" );
	 scanf("%d",&conti);
	  if(conti == 0)
	 num =0;
	 else 
	 num =2;
}
while(num == 3 )
	{
		printf("Calculating x^n using functions\n");
		printf("-------------------------------------------------\n");
		int x,y;
                printf("\nEnter a base value: ");
		scanf("%d",&x);
		printf("\nEnter the power value:");
		scanf("%d",&y);
		int sq= sqrt(x,y);
		printf("\n The X^n value is = %d\n",sq);
		printf("-----------------------------------------------------\n");
		printf("----------------------------------\n");
	 printf("To go back or to continue :: \n" );
	 printf("To go back to main menu : enter - 0\n");
	 printf("To continue :: enter -1 \n" );
	 scanf("%d",&conti);	 
	 if(conti == 0)
	 num =0;
	 else 
	 num =3;}
}
}
int sq(int n)
{
	for(int i=1;i<=n;i++)
	{
		int square = i*i;
          
		   printf("The Square of %d number is : %d\n",i,square);
	           sum(square);
	   
}
}


int sum (int val)
{

static int i=0;
arr[i]=val;
i++;
}
 

int leap(year)
{
if (year<100 || year>9999)
{
printf("enter the  correct year\n" );
}
else if(sizeof(year)<4 || sizeof(year) >4 )
printf("enter the integer value");
else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 {
 printf("The given year %d is leap year.\n",year);
 
 }
 else
 printf("The given year %d is not a leap year.\n",year);
}
 int sqrt(int a, int b)
{
	int temp = a;
       for(int i=1;i<b;i++)
       {
	       a *=temp;
       }	  
  return (a);     
}
