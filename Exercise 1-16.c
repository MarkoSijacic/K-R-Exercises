// @logos_design; K&R Book, Exercise 1-16
/* revise the main routine of the longest line program so it will correctly print the lenght of arbitrarily 
long input lines and as much as possible of the text. */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline); // define function get_line
void copy(char to[], char from[]); // define function copy

// print longest input line
int main(void)
{
    int len; // lenght of the line currently read
    int max; // maximum lenght seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest input line 
    
    max = 0;
    
    while((len = get_line(line, MAXLINE)) > 0) //get new line, print its line and lenght, find the longest line among all the inputed lines!
    {
        printf("\nLine: %s", line);
        printf ("\nLine lenght: %i\n\n\n", len);
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    printf("\n\n");
    if (max > 0) // print the longest line and its lenght
        {
            printf("\n\n\nLongest line: %s\n", longest);
            printf("Longest line lenght: %i\n\n", max);
        }
    return 0;
    printf("\n\n");
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) !=EOF && c != '\n'; i++)
    {    
        s[i] = c;
    }
    
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy (char to[], char from[])
{
    int i;

    i = 0;
    
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

