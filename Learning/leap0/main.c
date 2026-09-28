#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

int main(void){
    for (int i = 0; i <= 2000; i += 100) printf("%3d yep, %3d\n", leap_year(i), i);
}
