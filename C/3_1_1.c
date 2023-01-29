///Exp 3-1:swapping using two variables///
#include<stdio.h>
int main() 
{
int a, b;
printf("enter two values \n");
scanf("%d %d",&a,&b);
printf("before swapping\n");
printf("a=%d \nb=%d\n", a,b);
printf ("after swapping\n");
a=a+b;
b=a-b;
a=a-b;
printf("a=%d \nb=%d ", a,b);
return 0;
}