#include<stdio.h>   
int main ()  
{  
// declare integer data type variable  
int i, j, x, y;  
printf (" Enter the value of i " );  
scanf (" %d", &i);   
printf (" Enter the value of j " );  
scanf (" %d", &j);  
  
// use post increment operator to update original value by 1  
x = i++;   
printf (" After using the post-incrementing, the value of i is  %d \n", i);  
printf (" The value of x is %d \n", x);  
  
// use post decrement operator to decrease original value by 1  
y = j--;   
printf (" After using the post-decrementing, the value of j is  %d \n", j);  
printf (" The value of y is %d \n", y);  
return 0;  
}