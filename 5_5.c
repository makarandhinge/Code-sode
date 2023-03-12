//5.5- unit bill
#include <stdio.h>

int main() {
    int units;
    float amount=0;
    printf("Enter total units consumed : ");
    scanf ("%d",&units);
if(units <=50)
    { 
        amount=0.50*units;
    }
else if(units <=150)
    { 
        amount=25+(units-50)*0.75;
    }
else if(units <=250)
    { 
        amount=100+(units-150)*1.20;
    }
else if(units>250)
    { 
        amount=220+(units-250)*1.50;
    }
printf ("Total bill amount is %.2f",amount);

 return 0;
}