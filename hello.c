#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n"); //This asks for the name and inputs it as "name" in a string
    printf("hello, %s\n", name); //This outputs the "Hello, x" where x is the input name from above
}
