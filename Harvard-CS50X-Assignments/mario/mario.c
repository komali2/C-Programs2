#include <stdio.h>


int main(void)
{
    int height = 24;

    while (height > 23 || height <= 0)
    {
      if(height == 0)
    {
        return 0;
    }
      printf("How tall do you want the tower to be?\n");
      scanf("%d",&height);
    }

    for(int a = 0; a < height; a++)
    {

         for (int c = a; c <= height - 2; c++)
         {
                printf(" ");
         }
        for(int b = height - a; b <= height+1; b++)
         {
                printf("#");
         }

         printf("\n");

    }
}
