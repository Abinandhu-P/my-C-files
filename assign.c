#include<stdio.h>
#include"supportfile.c"
int  a =8;
extern void autofun();
extern void staticfun();
extern void regfun();

void main()
{
 //printf("%d",a);
 autofun();
 autofun();
 regfun();
 //staticfun();

}
