// @logos_design; K&R Book, Exercise 1-9
// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

void main()
{
    int c, count;

    count = 0;

    while ((c=getchar()) != EOF)
    {
        if (c == ' ')
        {
            count++;
            if (count <= 1)
            {
                putchar(c);
            }
        }
        if (c != ' ')
        {
            count = 0;
            putchar(c);
        }
    }
}
