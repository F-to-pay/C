#include <stdio.h>
#include <stdbool.h> // bool
#include <stdlib.h> // random



int main(void){ // main 

    // // !!! bool in C lang

    // bool b = true;
    
    // if (b) {
    //     printf("That's true\n");
    // }

    // // !!! math operators
    // int v1 = 2; int v2 = 10; int v3 = 9; int v4 = 28; int v5 = 517;

    // printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);

    // v1 = v1 + 2;
    // v2 = v2 - 5;
    // v3 = v3 * 3;
    // v4 = v4 / 2;
    // v5 = v5 % 16;

    // printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);

    // v1 += 2;  // same as before
    // v2 -= 5;  // same as before
    // v3 *= 3;  // same as before
    // v4 /= 2;  // same as before
    // v5 %= 16;  // same as before

    // printf("v1 = %d, v2 = %d, v3 = %d, v4 = %d, v5 = %d\n", v1,v2,v3,v4,v5);
    
    // int x = 3; int y = 0;

    // y += x > 10? 17: 37; // magic

    // if (x > 10)
    //     y += 17;
    // else
    //     y += 37;

    // (void)y;
    
    // printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");

    // int i = 0;

    // // !!! post increment and decrement
    // i++; // same as i += 1
    // i--; // same as i -= 1
    // printf("%d\n", i);

    // // !!! pre increment and decrement
    // ++i;
    // --i;
    // printf("%d\n", i);

    // int j = 2 + i++;

    // printf("%d, %d\n", j, i);

    // for (int n = 0; n < 10; n++)
    //     printf("n is %d\n", n);
    
    // // !!! comma operator

    // i = 0, j = 0;
    
    // int a = 0, b = 0;

    // for (a = 0, b = 30; a < 100; a++, b++)
    //     printf("a is %d, b is %d\n", a, b);

    // // !!! conditional operators, TRUE/FALSE

    // printf("%d\n", a == b);
    // printf("%d\n", a != b);
    // printf("%d\n", a < b);
    // printf("%d\n", a > b);
    // printf("%d\n", a <= b);
    // printf("%d\n", a >= b);

    // if (a < 10)
    //     printf("Sucsess!\n");
    // else
    //     printf("a is %d, F\n", a);

    // // !!! boolean operators

    // // && and
    // // || or
    // // ! not

    // if (a < b && b > 110)
    //     printf("Easy? Maybe.\n");

    // if (!(a < 30))  // a >= 30 is same
    //     printf("It's okay.\n");

    // !!! sizeof
    // %zu using for size_t format
    // compiler can balks at "z", leave it off
    
    int a = 999;

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2+7));
    printf("%zu\n", sizeof 3.14);
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(char));

    // If you need to print out negative size_t values, use %zd

    // // !!! flow control

    // if (true) printf("True1\n");
    
    // if (true) // same as before
    //     printf("True2\n");

    // if (true) { // more than 1 line
    //     printf("True");
    //     printf("3\n");
    // }

    // // !!! if-else statement
    // int v = 11;

    // if (v == 10)
    //     printf("v is definetly 10\n");
    // else if (v > 10)
    //     printf("v is definetly more than 10\n");
    // else if (v < 10)
    //     printf("v is definetly lover than 10\n");
    // else
    //     printf("IDK MAN, WHAT?");

    // // !!! while statement
    // int i = 0;

    // while (i < 10) {
    //     printf("i is %d\n", i);
    //     i++;
    // }
    
    // printf("Done!\n");

    // // while (1) same as while (true)

    // // !!! do-while statement

    // int i = 10;

    // do {
    //     printf("i is %d\n", i);
    //     i++;
    // } while (i < 10);

    // printf("Done!\n");

    // int r;

    // do {
    //     r = rand() % 100;
    //     printf("%d\n", r);
    // } while (r != 37);

    // // !!! for statement
    // // for (initial; what checked; what to do after cycle)

    // // !!! Switch statement

    // int cases = 3;

    // switch (cases){
    //     case 0:
    //         printf("0\n");
    //         break; // important thing to not fallthrough with warning
    //     case 1:
    //         printf("1\n");
    //         __attribute__((fallthrough)); // if you will correct fallthrough without warning
    //     case 2:
    //         printf("2\n");
    //         break;
    //     case 3:
    //         printf("3\n");
    //         break;
    // }

    // char b = 'b';

    // switch (b){
    //     case 'a':
    //         printf("a\n");
    //         break; // important thing to not fallthrough
    //     case 'b':
    //         printf("b\n");
    //         __attribute__((fallthrough)); // if you will correct fallthrough
    //     case 'c':
    //         printf("c\n");
    //         break;
    //     case 'd':
    //         printf("d\n");
    //         break;
    // }

    // finished with variables in beej.us

}