#include <stdio.h>

int main()
{
    // Scenario: Loan Eligibility Check

    // Requirements:
    // 1. Prompt the user for their employment status and annual income.
    // 2. Validate the input to ensure it meets certain criteria:
    //    - Employment status should be 0 (unemployed) or 1 (employed).
    //    - Annual income should be non-negative.
    // 3. Determine if the user is eligible for a loan based on their employment status and income:
    //    - If the user is employed and their annual income is greater than or equal to 30,000, they are eligible for a loan.
    // 4. Provide feedback to the user regarding their loan eligibility.

    int employmentStatus, annualIncome;

    // Input and validate employment status
    printf("Hello, Please share your employment status. (Enter 1 if you are employed or Enter 0 if you are not employed): ");
    if (scanf("%d", &employmentStatus) != 1 || (employmentStatus != 0 && employmentStatus != 1))
    {
        printf("Invalid input for employment status. Please enter 0 or 1.\n");
        return 1;
    }

    // Input and validate annual income
    printf("Thanks, Now please tell your annual income: ");
    if (scanf("%d", &annualIncome) != 1 || annualIncome < 0)
    {
        printf("Invalid input for annual income. Please enter a non-negative number.\n");
        return 1;
    }

    // Eligibility check
    if (employmentStatus == 1 && annualIncome >= 30000)
    {
        printf("Congratulations, You are eligible for a loan.\n");
    }
    else
    {
        printf("Sorry, You are not eligible for a loan.\n");
    }
    return 0;
}