#include <stdio.h>

int cnv(int t1){ // temperature convertor from C to F
    return (t1 * 1.8) + 32;
}

int main(void){

    for (int i = -20; i <= 100; i += 10)
        printf("C is %d, F is %d\n", i, cnv(i));

}
