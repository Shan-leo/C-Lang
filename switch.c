#include <stdio.h>
#include <stdlib.h>

double calc();

int main(){
    
    printf("Result is %lf", calc());

    return 0;
}

double calc(){
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf(" %lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf(" %lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;
    
    case '/':
        result = num1 / num2;
        break;
    
    default:
        printf("Invalid operator");
        break;
    }

    return result;

}