#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declare all variables (integer n which will be the total number of coins and float dollars which is be the input)
    int c = 0;
    int a = 25, b = 10, d = 5, e = 1;
    float dollars;

    do
    {
        dollars = get_float("Dollars:");
    }
    //Check if "dollars" input is positive
    while (dollars < 0);
    //Rounding
    int cents = round(dollars * 100);
    //While loop to check if cents are equal to or more than a, then take away a from cents and add to the coin counter
    while (cents >= a)
    {
        cents -= a;
        c++;
    }//As above but for b
    while (cents >= b)
    {
        cents -= b;
        c++;
    }
    while (cents >= d)
    {
        cents -= d;
        c++;
    }
    while (cents >= e)
    {
        cents -= e;
        c++;
    }
    //Function to print the amount of coins used
    printf("Coins: %i \n", c);
}
