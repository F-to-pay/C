#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool b = true;
    
    if (b) {
        printf("That's true\n");
    }

    int v1 = 2; int v2 = 10; int v3 = 9; int v4 = 28; int v5 = 517;

    printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);

    v1 = v1 + 2;
    v2 = v2 - 5;
    v3 = v3 * 3;
    v4 = v4 / 2;
    v5 = v5 % 16;

    printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);

    v1 += 2;  // same as before
    v2 -= 5;  // same as before
    v3 *= 3;  // same as before
    v4 /= 2;  // same as before
    v5 %= 16;  // same as before

    printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);
    
    int x = 3; int y = 0;

    y += x > 10? 17: 37; // magic

    if (x > 10)
        y += 17;
    else
        y += 37;

    (void)y;
    
    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");


}

// code don't work, back after while (not while func, but while)
//
// int calcul1(int v1, int v2, int v3, int v4, int v5){
    // v1 = v1 + 2;
    // v2 = v2 - 5;
    // v3 = v3 * 3;
    // v4 = v4 / 2;
    // v5 = v5 % 16;
//     return call[5] = [v1,v2,v3,v4,v5];
// }

// int calcul2(int v1, int v2, int v3, int v4, int v5){
    // v1 += 2;
    // v2 -= 5;
    // v3 *= 3;
    // v4 /= 2;
    // v5 %= 16;
//     return call[5] = [v1,v2,v3,v4,v5];
// }
