#include <stdio.h> 

int main()  
{
    int randomNumber = 69; // Declare an integer variable.

    char star = '*'; // Declare a single character variable.
    float pi = 3.14; // Declare a float(decimal) variable.

    char myName[] = "Fahad"; // Declare a string (array of characters).

    printf("Random Number: %d\n", randomNumber); // Print integer variable using %d. %d indicates an integer value.
    printf("Star Character: %c\n", star);        // Print character variable using %c. %c indicates a character value.
    printf("Floating Number: %.2f\n", pi);       // Print float variable with 2 decimal places using %.2f. %.2f indicates a float value.
    printf("My Name: %s\n", myName);             // Print string variable using %s. %s indicates a string value.
    return 0;
}
