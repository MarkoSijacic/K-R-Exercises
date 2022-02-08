// @logos_design; K&R Book, Exercise 1-18
// Write a program to remove trailing blanks and tabs from each line of input and to delete entirely blank lines. 

#include <stdio.h>
#define MAX 1000

int main (void)
{
    int c;
    int count = 0;
    int count_line = 1; // var that counts the number of printed lines

    char line[MAX]; // defines a string that holds down a line

    //starts the input
    while ((c = getchar()) != EOF)
    {
        if ((c != 10) && (c != ' ') && (c != '\t') && (c != '\v') && (c != '\b')) // defines the line as string of chars without whitespace, till the '\n' is added
        {
            line[count] = c;
            count++;
        }
        if ((c == 10) && (count != 0)) // prints the entered line
        {
            line[count] = '\0';
            printf("\nLine %i: %s\n\n", count_line, line);
            count = 0;
            count_line++;
        }
        else if ((c == 10) && (count == 0)) // if the entered line consists only of blanks, program gives back the error! 
        {
            printf("Blank line error!\n\n");
        }
    }
}
