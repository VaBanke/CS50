#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Declare all variables
    int height, x, c, i;
    do
    {
        //Ask for height
        height = get_int("height:");
    }
    //Check to see if height is more than 1 and less than 9
    while (height < 1 || height > 8);
    //Loop
    for (x = 0; x < height; x++)
    {
        //Loop for spaces
        for (i = 0; i < height - x - 1; i++)
        {
            printf(" ");
        }
        //Loop for #
        for (c = 0; c <= x; c++)
        {
            printf("#");
        }
        printf("  ");
        for (c = 0; c <= x; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}