// @logos_design; K&R Book, Exercise 1-15

/* Write the program to print the corresponding Celsius to Fahrenheit table, same as before, but now,
    use the self-made function to do it*/

#include <stdio.h>

float fahr, celsius; // initialize global floats needed for function

void conversion (int lower, int upper, int step); // prepare the function for the compiler


int main(void)
{
    conversion (-30, 50, 5); // keep it simple stupid, just call the function : - )
}

void conversion (int lower, int upper, int step) // lower and upper == lower\upper celsius value; step == decrementation
{   
    printf("\n   Temperature table\n\n"); // print headings
    printf ("  Celsius    Fahrenheit\n\n");

    celsius = upper; // makes the table go from upper to lower value

    while (celsius >= lower) // table output
    {
        fahr = (celsius * 1.8) + 32.0; // conversion formula
        printf("%6.0f %12.0f\n", celsius, fahr);
        celsius = celsius - step; // additinal part needed for making the table go from upper to lower value
    }
    printf("\n"); // makes the output clean
}