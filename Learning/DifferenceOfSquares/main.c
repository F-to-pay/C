#include <stdio.h>

unsigned int sum_of_squares(unsigned int number){
    unsigned int temp2 = 0;
    if (number > 300) return 0;
    while (number > 0) {
        temp2 += number * number;
        number--;
    }
    return temp2;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int temp1 = 0;
    if (number > 300) return 0;
    while (number > 0) {
        temp1 += number;
        number--;
    }
    temp1 *= temp1;
    return temp1;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

int main(void){

    for (int i = 0; i <= 100; i++){
        printf("%10u is sum of squares\n",sum_of_squares(i));
        printf("%10u is square of sum\n",square_of_sum(i));
        printf("%10u difference of squares\n",difference_of_squares(i));
    }
    printf("If answer is 0, number is too big (return 0)\n");
}