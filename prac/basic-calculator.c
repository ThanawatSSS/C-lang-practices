#include <stdio.h>

int main()
{
    float result, input;
    char op = '+';

    printf("Enter expression (e.g., 1 + 2 + 3 =): ");

    if (scanf("%f", &result) != 1)
    {
        printf("Error: Invalid input\n");
        return 1;
    }

    while (1)
    {
        scanf(" %c", &op);

        if (op == '=')
        {
            break;
        }

        if (scanf("%f", &input) != 1)
        {
            printf("Error: Invalid number\n");
            return 1;
        }

        switch (op)
        {
        case '+':
            result += input;
            break;
        case '-':
            result -= input;
            break;
        case '*':
            result *= input;
            break;
        case '/':
            if (input != 0)
            {
                result /= input;
            }
            else
            {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Unknown operator '%c'\n", op);
            return 1;
        }
    }

    printf("Result: %.2f\n", result);
    return 0;
}
