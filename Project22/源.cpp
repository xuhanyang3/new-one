#include<stdio.h>
#include<stdlib.h>
int main() {
    char op, a, b;
    double firstNumber, secondNumber;

    a = 'y';
    while (a == 'y' || a == 'Y') {
        scanf_s("%lf%c%lf", &firstNumber, &op, 1, &secondNumber);
        switch (op)
        {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            if (secondNumber == 0)
                printf("error\n");
            else
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("error\n");

        }
        b = getchar();
        a = getchar();
        if (a == 'n')
            break;
        else if (a != 'n' && (a != 'y' && a != 'Y'))
            while (a != 'n' && (a != 'y' && a != 'Y')) {
                printf("error\n");
                b = getchar();
                a = getchar();
            }
    }
    return 0;
}