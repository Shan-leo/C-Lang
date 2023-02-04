#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer,"\nLeo\nSandeepani");

    fclose(fpointer);
    return 0;
}