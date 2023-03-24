#include<stdio.h>
int main()
{
    void cube(int , int);
    int a , b ;
    printf("Enter Two Number : ");
    scanf("%d%d",&a,&b);
    cube(a,b);

}

void cube(int a , int b)
{
    int c;
    c = a+b;
    printf("Sum = %d", c);
}