#include <stdio.h>
int main () 

{

  int v, w;
  printf("Enter no.of vehicles:");
scanf("%d",&v);
printf("Enter no. of wheels:");
scanf("%d",&w);


  int tw=(4*v-w)/2;
  int p=v-tw;
  int FW;

  if ((w & 1) || w < 2 || w <= v)

    {

      printf("You entered invalid input");

      

    }

printf("TW=%d",tw);

printf("\n");

printf("FW=%d",p);
return 0;
}