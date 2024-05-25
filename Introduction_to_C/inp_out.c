#include <stdio.h>

int main()
{
    int randomNumber;
    printf("Enter any Random Number: \n");

    // If we want to take input from the user, we use scanf()
    scanf("%d", &randomNumber); // %d is the format specifier for integers.
     // &randomNumber provides the address of the variable where the input value will be stored.

    // Now if we want to show output then we use printf()
    printf("You entered: %d\n", randomNumber); // Print the value of randomNumber to verify the input
    return 0;
}
