// @logos_design; K&R Book, Exercise 1-17
// Write a program to print all input lines that are longer than 80 characters.

// prints a line (defined as "all chars till the user inputs '\n'") if it is longer than 80 chars. 


#include <stdio.h>

#define MAX 1000 // max lenght of the string line
#define lenght 80 // length of input line

int main (void)
{
    int c;
    int count = 0;
    int count_line = 1; // for the printf at the end of the program

    char line[MAX]; // defines a string that holds down a line

    //starts the input
    while ((c = getchar()) != EOF)
    {
        if (c != 10) // fills the line array until the '\n' is put into the input.
        {
            line[count] = c;
            count++;
        }
        if ((c == 10) && (count < lenght)) //resets the line array if the lenght of the input line is not adequate
        {
            for (int i = 0; i < (count+1); i++)
            {
                line[i] = 0;
            }
            count = 0;
        }
        if ((c == 10) && (count >= lenght)) // if lenght of the line is 80+ chars, print out the line
        {
            line[count] = '\0';
            printf("\nLine %i: %s\n\n", count_line, line);
            count = 0;
            count_line++;
        }
    }
}
