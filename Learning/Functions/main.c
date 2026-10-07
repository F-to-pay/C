#include <stdio.h>

int plus_one(int n) {   // function must return int, it take int
    return (n + 1);     // must be in not-void function
}

void hwprint(void){     // don't nave return
    printf("Hello, World!\n");
}

// !!! Passing by value !function
int incrementMake(int a) {
    return (a++);
}

// Prototype
int prototype(void);

int main(void) {
    int j = plus_one(1); // call of function
    printf("%d\n", j);

    hwprint(); // call of void function

    // !!! Passing by value
    printf("%d\n", incrementMake(j)); // does nothing with j
    
    printf("%d\n", prototype()); // we can call it because of prototype func, and full func below

}

// Prototype finished func
int prototype(void){
    return 3450;
}
