#include<stdio.h>
int main()
{
	int num ;
	float fl;
	scanf("%d",&num);
	printf("num %d\n",num);
	fl = (float) num;
	printf("%f\n",fl);
	printf("%x\n",num);
	printf("%o\n",num);
	printf("%i\n",num);
	printf("%u\n",num);
        printf("%b\n",num);
}
