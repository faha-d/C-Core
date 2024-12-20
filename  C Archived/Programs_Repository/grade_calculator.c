#include <stdio.h>

int main()
{
    // Scenario: Grade Determination

    // Requirements:
    // 1. Prompt the user for their score.
    // 2. Validate the input to ensure it is within the valid range (0 to 100).
    // 3. Determine the grade based on the score:
    //    - A: 90 to 100
    //    - B: 80 to 89
    //    - C: 70 to 79
    //    - D: 60 to 69
    //    - F: 0 to 59
    // 4. Provide feedback to the user regarding their grade.

    int score;
    printf("Enter your score (0 to 100): \n");
    scanf("%d", &score);

    // Validate the score input
    if (score > 100 || score < 0)
    {
        printf("Invalid input for score. Please enter a number between 0 and 100.\n");
        return 1;
    }

    if (score >= 90)
    {
        printf("Your grade is A.\n");
    }

    else if (score >= 80)
    {
        printf("Your grade is B.\n");
    }
    else if (score >= 70)
    {
        printf("Your grade is C.\n");
    }

    else if (score >= 60)
    {
        printf("Your grade is D.\n");
    }
    else
    {
        printf("Your grade is F.\n");
    }
    return 0;
}