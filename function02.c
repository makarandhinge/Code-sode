#include<stdio.h>
void deci();
int main()
{
    deci();

}
void deci()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int binaryNum[32];
    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

