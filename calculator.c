#include <stdio.h>
float add(float a, float b)
{
    return a+b;
}
float subtract(float a, float b)
{
    return a-b;
}
float multiply(float a, float b)
{
    return a*b;
}
void divide(float a, float b)
{
    if (b==0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
    }
}
int main()
{
    float num1, num2, result;
    int choice;
    char again;

    printf("========================================\n");
    printf("        DYNAMIC CALCULATOR\n");
    printf("========================================\n");
    while (1)
    {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("\nSelect an operation:\n");
        printf("  1. Addition (+)\n");
        printf("  2. Subtraction (-)\n");
        printf("  3. Multiplication (*)\n");
        printf("  4. Division (/)\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                result = add(num1, num2);
                printf("\nResult: %.2f + %.2f = %.2f\n",num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("\nResult: %.2f - %.2f = %.2f\n",num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("\nResult: %.2f * %.2f = %.2f\n",num1, num2, result);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
             printf("\nInvalid choice. Please select a number between 1 and 4.\n");
                continue;
        }
        printf("\nPerform another calculation? (y/n): ");
        scanf(" %c", &again);
        if (again != 'y' && again != 'Y')
        {
            printf("\nThank you for using the Dynamic Calculator Goodbye!\n");
            break;
        }
        printf("\n");
    }
    return 0;
}

