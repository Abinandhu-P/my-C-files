#include<stdio.h>
int main()
{
	while(1){int val;
	int temp;
	scanf("%d",&val);
	temp = val;
	temp = temp>>2;
	if(temp >=8)
		val = val ^ 2;
	else 
	 val = val|2;
	 printf("the value is %d\n",val);
}}
