#include <stdio.h> // input-output
#include <stdlib.h> // random


int try(void){
    unsigned int max_random = 0;
    unsigned int magic_number = 0;
    unsigned int random_pick = 0;
    while (max_random == 0){
        printf("Choose max random number (from 1 to x): ");

        if (scanf("%u", &max_random) == 0 ) {
            printf("fuck you\n");
            return 1;
        }
    }

    while (magic_number == 0){
        printf("Choose your number (from 1 to %u): ", max_random);

        if (scanf("%u", &magic_number) == 0 ) {
            printf("fuck you\n");
            return 1;
        }
        
        if (max_random < magic_number) {
            printf("fuck you\n");
            return 2;
        }
        
    }

    while (magic_number != random_pick){
        random_pick = (rand() % max_random) + 1;
        printf("Random number: %u\n", random_pick);
    }
    printf("Yo, he's find your number!\n");

    return 0;
}

int main(void){
    switch(try()){
        case 0:
            printf("Marked as completed.\n");
            break;
        case 1:
            printf("Not int.\n");
            break;
        case 2:
            printf("Magic number bigger than max random number.\n");
            break;
    }
}