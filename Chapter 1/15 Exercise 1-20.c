// @logos_design; K&R Book, Exercise 1-20

// replace /t with enough space chars till the next tab stop (as per my understanding, tab stop is every 8 char columns)

#include <stdio.h>
#define TABSTOPLENGHT 8 //tabstop interval

int detab(int current_count, int next_tabstop); //function definition

int main (void)
{
    int c;
    int count = 0; // number of input characters in a current line
    int next_tab = TABSTOPLENGHT; // next tab stop variable

    while ((c = getchar()) != EOF) // opens input line, classic getchar usage
    {
        if ((c != '\n') && (c != '\t')) // produces the correct output, updates count if no "Enter" or "Tab" inputs...
        {
            count++;
            putchar(c);
        }
        else if (c == '\t') // if user enters TAB, this part of the code counts the next tab stop and calls detab function.
        {
            while (count >= next_tab)
            {
                next_tab += TABSTOPLENGHT;
            }
            count += detab(count, next_tab);
        }
        else if (c == '\n') // if enter is the input, resets count and next tab
        {
            putchar('\n');
            putchar('\n');
            count = 0;
            next_tab = TABSTOPLENGHT;
        }
    }
}

int detab(int current_count, int next_tabstop) // self-explanatory, prints needed spaces instead of using regular tab. 
{
    int spaces = next_tabstop - current_count;

    for (int i = spaces; i != 0; i--)
    {
        putchar(' ');
    }
    return spaces;
}
