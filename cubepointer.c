#include<stdio.h>
int main()
{
   int a, *p, s;

   printf("Enter integers \n");
   scanf("%d", &a);

   p = &a;
   

   s = (*p) * (*p) * (*p);

   printf("%d",s);

   return 0;
}