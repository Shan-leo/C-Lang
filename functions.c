#include <stdio.h>
#include <stdlib.h>

int main(){

    sayHi("Shan");
    
    return 0;
}

void sayHi(char name[]){

    printf("Hi %s\n", name);
}