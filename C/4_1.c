///exp 4-1: greater no. From two no. Using conditional operator ///
#include <stdio.h>
int main() 
{
	int a, b, max;
	printf("enter two no : \n");
	scanf("%d %d",&a, &b);
max = a>b ? a : b;
printf("%d is greater",max) ;
	return 0;
}