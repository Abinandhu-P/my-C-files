#include<stdio.h>
int leap(int year);
int main()
{
int year;
while(1)
{
 printf("------------------------------------------\n");
 printf("To find the given year is leap year or not\n");
 printf("Enter the year : \n");
 scanf("%d",&year);
 leap(year);
 printf("------------------------------------------\n");
}
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
