#include <stdio.h>
#include <math.h>

int main()
{
    // Set of statements is called Instructions.

    // Type Declaration Instructions:
    // Valid Instructions:
    int a = 69;
    int b = a;
    int c = b + 5;
    int d = 1, e;
    int x, y, z;
    x = y = z = 55;

    // Invalid Instructions:
    int oldAge = 88;
    // int youngAge = oldAge - years; Invalid: years is used before declaration
    // int years;
    // int x = y = z = 44; Invalid: Cannot declare and assign multiple variables like this

    // Arithmetic Instructions:
    int num1 = 4, num2 = 5;
    int subjectMarks = 25;
    int anotherSubjectMarks = 54;
    int totalMarks = 75;
    int result = totalMarks / subjectMarks + anotherSubjectMarks;
    printf("Total Marks Obtained: %d\n", result);

    // Modular Operator
    int num3 = 8, num4 = 4, modulus;
    // int power = pow(num3, num4);
    // printf("Power of %d is %d\n", num3, power);
    // num3 ^ num4; // This is a bitwise XOR operator, not for power calculation

    modulus = num3 % num4; // Calculate modulus
    printf("Modulus: %d\n", modulus);

    // Types of Conversions:
    // Implicit conversion is done by the compiler itself
    // Explicit Conversion is done manually
    printf("%.2f\n", 2 * 4.25);
    int j = 1.99999;
    printf("%d \n", j);

    // Operators Precedence:
    // First, we do divide, multiply, modulus, then plus minus
    int k = 2 + 5 * 6;     // 5 * 6 is done first, then 2 is added
    int l = 4 * 3 / 6 * 2; // 4 * 3 is done first, then division by 6, then multiply by 2
    printf("%d\n", k);
    printf("%d\n", l);
    printf("%d\n", 5 * 2 - 2 * 3);   // Multiplication first, then subtraction
    printf("%d\n", 5 * 2 / 2 * 3);   // Multiplication and division from left to right
    printf("%d\n", 5 * (2 / 2) * 3); // Parentheses first, then multiplication
    printf("%d\n", 5 + 2 / 2 * 3);   // Division first, then multiplication, then addition

    // Control Instructions:
    // 1) Sequence Control (Programs runs in sequence)
    // 2) Decision Control (Based on decisions example: if() else{})
    // 3) Loop Control (Runs on a loop for a time)
    // 4) Case Loop (Based on cases)
    return 0;
}
