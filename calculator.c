#include <ctype.h>
#include <stdio.h>

float calculateSum(float num1, float num2)
{
    return num1 + num2;
}

float calculateSubtraction(float num1, float num2)
{
    return num1 - num2;
}

float calculateMultiplication(float num1, float num2)
{
    return num1 * num2;
}

float calculateDivision(float num1, float num2)
{
    return num1 / num2;
}

int main()
{
    while (1)
    {
        float num1, num2, result;
        char operator;

        printf("Introduce el primer número: ");
        if (scanf("%f", &num1) != 1)
        {
            printf("Error: Debes introducir un número válido.\n");
            return 1;
        }

        printf("Introduce el operador (+, -, *, /): ");
        scanf(" %c", &operator);

        if (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
        {
            printf("Error: el operador debe ser una de estas operaciones: +, -, *, /.\n");
            return 1;
        }

        printf("Introduce el segundo número: ");
        if (scanf("%f", &num2) != 1)
        {
            printf("Error: Debes introducir un número válido.\n");
            return 1;
        }

        switch (operator)
        {
        case '+':
            printf("El resultado es: %.2f\n", calculateSum(num1, num2));
            break;
        case '-':
            printf("El resultado es: %.2f\n", calculateSubtraction(num1, num2));
            break;
        case '*':
            printf("El resultado es: %.2f\n", calculateMultiplication(num1, num2));
            break;
        case '/':
            if (num2 != 0)
            {
                printf("El resultado es: %.2f\n", calculateDivision(num1, num2));
            }
            else
            {
                printf("Error: División por cero no permitida.\n");
            }

            break;

        default:
            printf("Operador no válido.\n");
            break;
        }
    }

    return 0;
}