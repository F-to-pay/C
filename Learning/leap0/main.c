#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){
    if (year % 100 == 0 && year % 400 == 0)
        return 1;
    else if (year % 4 == 0 && year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else 
        return 0;
}

int main(void){
    printf("%d\n", leap_year(2024));
}
