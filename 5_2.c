#include <stdio.h>  
   
int main() {  
    char c;  
    printf("Enter an Alphabet\n");  
    scanf("%c", &c);  
 
    switch(c) 
{  
        case 'a':    
        case 'A':
        case 'e':  
        case 'E':
        case 'i':  
        case 'I':  
        case 'o':  
        case 'O':  
        case 'u':  
        case 'U': printf("%c is Vowel", c);  
            break;  
        default: printf("%c is not Vowel ", c);  
    }  
   
    return 0;  
}