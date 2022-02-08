// @logos_design; K&R Book, Exercise 1-8
// Write a program to count blanks, tabs and newlines

#include <stdio.h>

int main (void)
{
    int c, blank, tab, newline;

    blank = 0;
    tab = 0;
    newline = 0;


    printf("Your input is: ");
    while ((c = getchar()) != EOF) // get input 
    {
        // check input and count
        if (c == ' ')
        {
            ++blank;
        }
        if ((c == '\t') || (c == '\v'))
        {
            ++tab;
        }
        if (c == '\n')
        {
            ++newline;
                printf("\nNew lines: %i", newline);     //results
                printf("\nBlanks: %i", blank);
                printf("\nTabs: %i\n\n", tab);

                printf("Your input is: ");
        }
    }
}
