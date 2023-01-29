///Exp 3-1:swapping using 3 variables///
#include<stdio.h>
int main() 
{
int a, b, temp;
printf("enter two values \n");
scanf("%d %d",&a,&b);
printf("before swapping\n");
printf("a=%d \nb=%d\n", a,b);
printf ("after swapping\n");
temp=a;
a=b;
b=temp;
printf("a=%d \nb=%d ", a,b);
return 0;
}