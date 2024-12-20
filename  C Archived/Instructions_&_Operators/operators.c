#include <stdio.h>
int main()
{
    // Operators in C
    // We have multiple types of Operators

    // 1) Arithmetic Operators
    printf("%d\n", 5 + 9);
    printf("%d\n", 9 / 3);

    // 2) Relational Operators returns true or false True == 1, false == 0;
    printf("%d\n", 4 == 4);
    printf("%d\n", 6 < 4);
    printf("%d\n", 4 >= 4);
    printf("%d\n", 8 != 4);

    // 3) Logical Operators && || !=
    int age;
    int yearsOfEducation;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Enter your years of education in numbers: \n");
    scanf("%d", &yearsOfEducation);

    if (age >= 18 && yearsOfEducation >=
                         12)
    {
        printf("You are eligible for a driving license \n");
    }
    else
    {
        printf("You are not eligible for a driving license \n");
    }

    // 4) Assignment Opertors = , +=

    int a = 5, b = 10;
    a += 5;
    b /= 2;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}