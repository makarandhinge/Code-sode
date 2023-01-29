///Exp 3-2: conversation of °C to °F ///
#include<stdio.h>
int main() 
{
float c,f,x;
printf("enter temp in °c \n");
scanf("%f",&c);
 x = (1.8)*c;
 f = x+32;
printf("Temp in °F is %f ",f );
return 0;
}