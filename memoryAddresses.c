#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge = &age; //This is a pointer variable
    double gpa=3.2;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pgrade = &grade;

    printf("%d\n", *pAge); //  this is dereferrencing the pointer variable

    return 0;
}