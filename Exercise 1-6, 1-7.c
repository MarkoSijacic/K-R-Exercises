// @logos_design; K&R Book, Exercises 1-6, 1-7

// Verify that the expression getchar() != EOF is 0 or 1
// print the character EOF

#include <stdio.h>

int main (void)
{
    int verification = (getchar() != EOF); // test with any char for 1 or CTRL-D (linux) and CTRL -Z (windows) for EOF -1.
    printf("Verification: %i\n", verification);

    printf("EOF = %i\n", EOF);
}
