
// @logos_design; K&R Book, Exercise 1-13

#include <stdio.h>

// Write a program to print a histogram of the lenghts of words in its input, with the bars vertical

int main(void)
{
    int input;
    int wordlenght = 0;
    int highestwordlenght = -1;
    int most = -1;
    int occurenceoftheword[300];
    int copy_occurenceoftheword[300];

    for (int i = 0; i < 300; i++)
    {
        occurenceoftheword[i] = 0;
    }

    printf ("\n\nPlease enter your input down bellow.\n\n"); 
    printf ("If you are using Linux operating system, Press CTRL+D and press ENTER when you are done.\n"); 
    printf ("If you are using Windows operating system, press CTRL + Z instead.\n\n");
    printf ("User input:  ");

    
    while ((input = getchar()) != EOF) // word recognition part
    {
        if (((input > -1) && (input < 65)) || ((input > 90) && (input < 97)) || (input > 122))  // is not a word
        {
            if (wordlenght != 0)
                {
                    occurenceoftheword[wordlenght]++;
                }
            wordlenght = 0;
        }
        if (((input >= 65) && (input <= 90)) || ((input >= 97) && (input <= 122))) // is a word
        {
            wordlenght++;
        }
    }
    if ((input == EOF) && (wordlenght > 0))
    {
        occurenceoftheword[wordlenght]++;
    }

    for (int i = 1; i < 300; i++) // recognize the word with the most characters (number of rows)
    {
        if ((occurenceoftheword[i] != 0) && (i >  highestwordlenght))
        {
            highestwordlenght = i;
        }
    }
    for (int i = 1; i < 300; i++) // recognize the most occured word
    {
        if (occurenceoftheword[i] > most)
        {
            most = occurenceoftheword[i];
        }
    }
    for (int i = 0; i < 300; i++) // copy the array, will need it for later
    {
        copy_occurenceoftheword[i] = occurenceoftheword[i];
    }

    int most_half =  most / 2;
    printf("\n\n");
    for (int x = most; x >= -1; x--) // print rows
    {
        for (int y = 0; y <= highestwordlenght; y++) // print columns
        {
            if (y != 0)
            {
                if (x > 0)
                {
                    if (occurenceoftheword[y] == x)
                    {
                        printf("  # ");
                        occurenceoftheword[y]--;
                    }
                    else
                    {
                        printf("  . ");
                    }
                }
                if (x == 0)
                {
                    printf("_____");
                }
                if (x < 0) // print lower bar
                {
                    if (y < 10)
                        printf("  %i ", y);
                    else
                        printf("  %i", y);
                }
            }
            else // print higher bar
            {
                if (x > 0)
                    printf(" %5i| ", x);
                if (x == 0)
                    printf("        ");
                if (x == -1)
                    printf("        ");
            }
        }
        // print the right bar
        if (most > 12)
        {
            if (x ==    most_half+1)
            {
                printf("         Number");
            }
            if (x ==    most_half)
            {
                printf("           of");
            }
            if (x ==    most_half-1)
            {
                printf("     word occurences");
            }
        }
        if ((x == 1) & (most < 12))
        {
            printf("         Number of word occurences\n");
        }
        else
        {
            printf("\n");
        }
    }

    // print the additional info
    printf("\n             Words with X number of characters\n\n");

    for (int i = 0; i < 300; i++)
    {
        if (copy_occurenceoftheword[i] > 0)
        {
            printf("\nWords in the lenght of %i characters: %i", i, copy_occurenceoftheword[i]);
        }
    }
    printf("\n\nHighest word lenght: %i characters.", highestwordlenght);
    
    printf("\n\nTimes the most occured word lenght occured: %i", most);
    
    printf("\n\n");
    printf("Press enter to close the program:\n\n");
    int k = getchar();
    if (k == 10)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}