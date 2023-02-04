#include <stdio.h>
#include <stdlib.h>

int main(){

    int secretNumber = 5;
    int guess;
    int attempts =0;
    int attemptsEnd = 0;

    printf("Hi, Welcome to the guesssing game. You have to guess the secret number within three attempts\n");

    while(guess != secretNumber && attemptsEnd==0){

        if(attempts<3){
            printf("Enter your guess: ");
            scanf(" %d", &guess);
            attempts++;
        }else{
            printf("out\n");
            attemptsEnd = 1;
        }
        

        
    }

    if(guess == secretNumber){
        printf("You are correct");
    }else{
        printf("You lose");
    }
    

    return 0;

}