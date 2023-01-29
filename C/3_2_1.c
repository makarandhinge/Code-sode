///Exp 3-2: conversation of °F to °C ///
#include<stdio.h>
int main() 
{
float c,f,x;
printf("enter temp in °f \n");
scanf("%f",&f);
x=f-32;
c=0.55555*x;
printf("Temp in °c is %f ",c );
return 0;
}