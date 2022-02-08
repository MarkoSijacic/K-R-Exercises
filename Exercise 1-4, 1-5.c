// @logos_design; K&R Book, Exercises 1-4, 1-5

/* Write the program to print the corresponding Celsius to Fahrenheit table

   Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0 
   (kinda changed the numbers a little, seemed better) */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -30; // lower limit of temp table
    upper = 50; // upper limit of temp table
    step = 5; // step

    celsius = upper;

    printf("\n   Temperature table\n\n");
    printf ("  Celsius    Fahrenheit\n\n");
    
    while (celsius >= lower) // table output
    {
        fahr = (celsius * 1.8) + 32.0; // conversion formula
        printf("%6.0f %12.0f\n", celsius, fahr);
        celsius = celsius - step;
    }
}