#include <stdio.h>

double ctof(double celsium){ // temperature convertor from C to F
    return (celsium * 1.8) + 32;
}

int main(void){

    for (double i = -20; i <= 100; i += 10)
        printf("C is %6.1f, F is %6.1f\n", i, ctof(i));

}
