#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int k = -1;
    char cipherInput[256];
    
    while(k<0)
    {
        printf("Input a non-negative integer.\n");
        scanf("%d\n", &k);
    }
    
    printf("What do you want to cipher?\n");

    scanf("%30[^\n]",cipherInput);
      
    for (int i = 0, n = strlen(cipherInput); i < n; i ++)
    {
             if( isalpha(cipherInput[i]))
             {
                if(islower(cipherInput[i]))
                {
                    printf("%c", ((((cipherInput[i] - 97)+k)%26)+97));
                }
                else
                {
                    printf("%c", ((((cipherInput[i] - 65)+k)%26)+65));
                }
                
             } 
             else
             {
                printf("%c", cipherInput[i]);
             }            
    }

    printf("\n");
    return 0;
}


