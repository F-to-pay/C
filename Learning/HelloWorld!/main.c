#include <stdio.h>

int main(void)
{
    int i = 3; // %d, not %i
    float f = 3.14159; // %f
    char *s = "Hello, world!"; // %s

    // Claude review
    //
    // HelloWorld, комментарий %d, not %i — неверный.
    // В printf %d и %i работают одинаково. Разница есть
    // только в scanf: там %i понимает 0x1F и 017 как hex и octal.
    //
    // char *s = "Hello, world!" — лучше писать const char *s.
    // Строковый литерал нельзя изменять, это неопределённое
    // поведение, а const не даст сделать это случайно.
    //
    // float f = 3.14159 работает, но 3.14159 — это double,
    // который молча урезается до float. Пока просто знай.
    // Позже -Wconversion начнёт за такое ругаться.

    printf("%s, i = %d, PI = %f\n", s, i, f);
}