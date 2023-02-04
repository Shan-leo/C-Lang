#include <stdio.h>
#include <stdlib.h>

double calc();

int main(){

    printf("Result is = %lf", calc());


    return 0;
}

double calc(){

    double result, num1,num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf(" %lf", &num2);

    if(operator=='+'){
        result = num1 + num2;
    }else if(operator == '-'){
        result = num1 - num2;
    }else if(operator == '*'){
        result = num1 * num2;
    }else if(operator == '/'){
        result = num1 / num2;
    }else{
        printf("Invalid operator");
    }

    return result;


}