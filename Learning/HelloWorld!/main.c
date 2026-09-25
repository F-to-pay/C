#include <stdio.h>

int main(void)
{
    int i = 3; // %d, not %i
    float f = 3.14159; // %f
    char *s = "Hello, world!"; // %s

    printf("%s, i = %d, PI = %f\n", s, i, f);
}