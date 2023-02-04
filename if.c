#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2);

int main(){

    max(5,4);

    return 0;
}

int max(int num1, int num2){


    if(num1>num2){
        printf("num1 is the max");
    }else{
        printf("num2 is the max");
    }

    return 0;
    
}