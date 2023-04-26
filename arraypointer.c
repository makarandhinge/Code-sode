#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Element in array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
int *p=&a[0];
int i;

for(i=0;i<5;i++)
printf("%d ",*(p+i));

}