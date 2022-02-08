// @logos_design; K&R Book, Exercise 1-14

// similiar to the last exercise. As I did that one very very thoroughly, this one I decided to skip and just do the neccesities.
#include <stdio.h>

int main (void)
{
    int input;
    // each member of the array is a different ascii char, the value of the member will be the number of its input occurence
    int charoccurence[128]; 
    
    int row_number = 0;     // also, the number of times the most used character of input appeared in it
    int column_number = 0;  // also, number of different characters used in input

    for (int i = 0; i <= 127; i++) // clear and prepare the array.
    {
        charoccurence[i] = 0;
    }

    while ((input = getchar()) != EOF) // ok, the input part
    {   
        if ((input >= 0) && (input <= 127))
        {
            charoccurence[input]++;
        }
    }

    printf("\n\n"); // make space between entered input in console and histogram

    // get row and column numbers

    for (int i = 0; i <= 127; i++)
    {
        if (charoccurence[i] > row_number)
        {
            row_number = charoccurence[i];
        }
    }
    for (int i = 0; i <= 127; i++)
    {
        if (charoccurence[i] > 0)
        {
            column_number++;
        }
    }
    // print histogram
    for (int x = row_number+1; x >= 1; x--)
    {
        for (int y = 0; y <= 127; y++)
        {
            if (charoccurence[y] >= x)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
}
