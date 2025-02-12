#include<stdio.h>
int main()
{
 int num [32];
 int number;
 scanf("%d",&number);
 int i=0;
 while (number >1)
 {
	 num [i]= number%2;
	 number = number/2;
	 i++;
 }
 for(int j=i-1;j>=0;j--)
 {
	 printf("%d",num[j]);
 }
 return 0;
}
