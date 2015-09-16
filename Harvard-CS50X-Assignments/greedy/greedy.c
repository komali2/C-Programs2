#include <stdio.h>
#include <math.h>


int main (void)
{
    int coinAmount = 0;
    float changeInput = 0;

    while (changeInput <= 0)
    {
    printf("How much change is owed?\n");
    scanf("%f", &changeInput);
    }

    int changeOwed = round(changeInput*100);

    while(changeOwed >= 100)
    {
        changeOwed = changeOwed - 100;
        coinAmount = coinAmount + 4;
    }
    while(changeOwed >= 25)
    {
        changeOwed = changeOwed - 25;
        coinAmount = coinAmount + 1;
    }
    while(changeOwed >= 10)
    {
        changeOwed = changeOwed - 10;
        coinAmount = coinAmount + 1;
    }
    while(changeOwed >= 5)
    {
        changeOwed = changeOwed - 05;
        coinAmount = coinAmount + 1;
    }
    while(changeOwed >= 1)
    {
        changeOwed = changeOwed - 01;
        coinAmount = coinAmount + 1;
    }

    printf("Change owed is %d\n", changeOwed);
    printf("Coin owed is\n%d\n", coinAmount);
    printf("%d\n", coinAmount);
    return 0;
}
