#include <stdio.h>

int main()
{
    // Program to Calculate sum of two Numbers
    int num1, num2;
    int sum;

    printf("Enter the value of Number 01: \n");
    scanf("%d", &num1); // Take input for the first number

    printf("Enter the value of Number 02: \n");
    scanf("%d", &num2); // Take input for the second number

    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Program to Calculate Area of Square
    int side, squareArea;

    printf("Enter the value of side of square:\n");
    scanf("%d", &side);

    squareArea = side * side;
    printf("The area of Square is: %d\n", squareArea);

    // Program to Calculate Area of Circle
    float radius, circleArea, pi = 3.142;

    printf("Enter the value of Radius of Circle:\n");
    scanf("%f", &radius);

    circleArea = pi * radius * radius;
    printf("The area of Circle is: %.2f\n", circleArea);

    // Program to Calculate Cube of a Number;
    int cubeValue;

    printf("Enter the number to calculate it's cube: \n");
    scanf("%d", &cubeValue);
    printf("The Cube of %d is %d\n", cubeValue, cubeValue * cubeValue * cubeValue);

    // Program to Calculate Perimeter of a Rectangle
    int length, width, perimeter;

    printf("Enter Length of Rectangle: \n");
    scanf("%d", &length);

    printf("Enter Width of Rectangle: \n");
    scanf("%d", &width);
    perimeter = (length * width) * 2;
    printf("The Perimeter of a Rectangle is %d\n", perimeter);
    return 0;
}