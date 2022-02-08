// @logos_design; K&R Book, Exercise 1-12

// Write a program that prints its input one word per line

#include <stdio.h>

int main(void)
{
    int c, count;
    count = 0;

    while ((c = getchar()) != EOF) //get input
    {
        if (((c == ' ') || (c == '\t')) && (count < 1)) // start new line after reading whitespace
        {
            count++;
            putchar('\n');
        }
        if (((c == ' ') || (c == '\t')) && (count >= 1)) // skip the extra whitespace
        {
            count++;
        }
        else // print the valid characters in a new line
        {
            count = 0;
            putchar(c);
        }
    }
}