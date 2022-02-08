// @logos_design; K&R Book, Exercise 1-19

/* Write a function "REVERSE(s)" that reverses the character string "s". 
   Use it to write a program that reverses its input a line at a time. */

// kinda changed the function name, hopefully it seems more clear.
#include <stdio.h>
#include <stdlib.h>

// function declarations
void arrayReset (char line[], int index);
void lineReverse (char original[], char reversed[], int index);

//main
int main (void)
{
    int c; // c for getchar character
    int char_index = 0; // will serve as a counter of chars in a new line, which will be modeled as an array of chars.

    int line_count = 1; // counts the number of entered and reversed lines
    char line_char[1000]; // regular string, max 1000 chars
    char line_char_reversed[1000]; // string reversed

    printf("New input:\n\n"); // some "GUI" for the start.

    while ((c = getchar()) != EOF) // prompts user for input
    {
        if (c != '\n') // fills the first array with entered characters
        {
            if (char_index <= 999) // safety measure
            {
                line_char[char_index] = c;
                char_index++;
            }
        }
        if (c == '\n') // calls reverse function, prints both the regular and reversed line, prepares the arrays for the new input
        {
            if (char_index > 999) // reports error if a line is too long!
            {
                printf("\n\nERROR! Too many characters!!\n");
                return 0;
            }

            lineReverse (line_char, line_char_reversed, char_index);

            printf("\n\n\nLine %i: \n\n%s\n", line_count, line_char);
            printf("\nLine %i - reversed: \n\n%s\n\n\n\nNew input:\n\n", line_count, line_char_reversed);
            
            arrayReset(line_char_reversed, char_index);
            arrayReset(line_char, char_index);
            
            char_index = 0;
            line_count++;
        }
    }
}

// arrayReset function definition
void arrayReset(char line[], int index)
{
    for (int i = 0; i <= index; i++)
    {
        line[i] = 0;
    }
}

// lineReverse function definition
void lineReverse (char original[], char reversed[], int index)
{
    original[index] = '\0';
    int new_str_index = 0;
    for (int i = (index - 1); i >= 0; i--)
    {
       reversed[new_str_index] = original[i];
       new_str_index++;
    }
    reversed[new_str_index] = '\0';
}

