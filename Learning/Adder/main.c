#include <stdio.h>
#include <limits.h>

int digitSum(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    
    if (sum < 0) sum = -sum;
    return sum;
}


int main(void){
    int a = -123;
    int zero = 0;
    int b = 7;
    int c = 10;
    int d = 99999;
    int cursed = INT_MIN;
    printf("-123 is %d\n", digitSum(a));
    printf("0 is %d\n", digitSum(zero));
    printf("7 is %d\n", digitSum(b));
    printf("10 is %d\n", digitSum(c));
    printf("99999 is %d\n", digitSum(d));
    printf("cursed is %d\n", digitSum(cursed));

}