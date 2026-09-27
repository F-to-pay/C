#include <stdio.h>
#include <stdbool.h>

int main(void){

    int i = 0;

    // post increment and decrement
    i++; // same as i += 1
    i--; // same as i -= 1
    printf("%d\n", i);

    // pre increment and decrement
    ++i;
    --i;
    printf("%d\n", i);

    int j = 2 + i++;

    printf("%d, %d\n", j, i);

    for (int n = 0; n < 10; n++)
        printf("n is %d\n", n);
    
    // comma operator

    i = 0, j = 0;
    
    int a = 0, b = 0;

    for (a = 0, b = 30; a < 100; a++, b++)
        printf("a is %d, b is %d\n", a, b);

    // conditional operators, TRUE/FALSE

    printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a < b);
    printf("%d\n", a > b);
    printf("%d\n", a <= b);
    printf("%d\n", a >= b);

    if (a < 10)
        printf("Sucsess!\n");
    else
        printf("a is %d, F\n", a);

    // boolean operators

    // && and
    // || or
    // ! not

    if (a < b && b > 110)
        printf("Easy? Maybe.\n");

    if (!(a < 30))  // a >= 30 is same
        printf("It's okay.\n");

}

int postMain(void){ // main before
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

    return 3;
}

// code don't work, back after while

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
