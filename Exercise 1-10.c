// @logos_design; K&R Book, Exercise 1-10

// Write a program to copy its input to its output, replacing each tab by \t,each backspace by \b and each backslash by \\.


#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else
        {
            putchar(c);
        }
    }

}