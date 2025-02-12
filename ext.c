#include<stdio.h>
//int a=10;
int main()
{

extern int a;
a +=10;
printf("%d\n",a);
fun1();
fun2();
}
int fun1()
{
int a=2;
a+=2;
printf("%d\n",a);
}
fun2()
{
printf("this is fun 2");
}
int a= 10;


