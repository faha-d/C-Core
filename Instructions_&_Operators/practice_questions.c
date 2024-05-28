#include <stdio.h>

int main()
{

    // Write a program to check if a number is divisible by 2 or not.
    int number;
    printf("Enter a Number: \n");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Please enter a non-negative number \n");
        return 1;
    }
    else if (number % 2 == 0)
    {
        printf("%d is divisble by 2\n", number);
    }
    else
    {
        printf("%d is not divisble by 2\n", number);
    }

    // Write a program to check if a number is even or odd.
    int number2;
    printf("Enter a Number: \n");
    scanf("%d", &number2);
    if (number2 < 0)
    {
        printf("Please enter a non-negative number \n");
        return 1;
    }
    else if (number2 % 2 == 0)
    {
        printf("%d is an even number \n", number2);
    }
    else
    {
        printf("%d is an odd number \n", number2);
    }

    // Print 1 (true) or 0 (false) for following statements:
    // a. if it's sunday & it's snowing;
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    // Print 1 (true) or 0 (false) for following statements:
    // a. if it's monday or it's snowing;
    int isMonday = 1;
    int isRaining = 1;
    printf("%d \n", isSunday || isSnowing);

    // a. if a number is greater than 9 & less than 100 print true(1)
    int userInput;
    printf("Enter a Number \n");
    scanf("%d", &userInput);
    if (userInput > 9 && userInput < 100)
    {
        printf("True \n");
    }
    else
    {
        printf("False \n");
    }
    return 0;
}