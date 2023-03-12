#include<stdio.h>
int main()
{
	int n,arr[n];
	printf("Enter a array size");
	scanf("%d",&n);
	int i=0;
	while(i<n)
	{
		printf("Enter a Number");
		scanf("%d",&arr[i]);
		i++;
	}
	for(i=n;i>0;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}