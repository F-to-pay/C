# 15+ minutes problems and what i learned

with // I show my learn errors here. I think deleting previous answers would be a bad idea for learning.

with /// I copy text.

## Hello, World!

- Comiler problems (MSYS2)
    !!! NEED TO DO
    /// undefined reference to WinMain //, define main

- Some variables, printf

- "clang" -E show whole code
    // show whole processor results
    // show whole preprocessor results

- "clang -S" gives assembler code

- "clang -c" gives mashine language not-compiled files
    // gives compiled without link

- fix char *s to const char *s

- fix comment to right /// "// %d, not %i"


## Linker

- headers, FILE.h, #include "FILE.h", realization with FILE.c

- gcc -c INPUT.c OUTPUT
    gives me .o files
    // gcc -c INPUT.c -o OUTPUT.o

- nm INPUT1.o INPUT2.o
    links files each other
    // define main and secondary files
    // /// nm — два раза мимо. «Define main and secondary files» и «nm required if 2+ files» — оба неверны. nm для линковки
    // /// вообще не нужен, можно прожить всю жизнь и ни разу его не запустить. Это просто лупа: показывает символы в .o
    // /// (T — определено в этом файле, U — нужно снаружи). Никаких «главных» и «второстепенных» файлов не существует.
    // /// Линкер сам сопоставляет U одних файлов с T других.
    // afterwork //
    // "nm add.o" and "nm main.o" or "nm add.o main.o" show same things, not requied for build. Show out functions.

- gcc INPUT -o OUTPUT
    compile code into binary
    // linking compiled code each other, nm requied if 2+ files.

## Variables

- Chech bool

- chech operators and expressions

- check ternary operations

- try out "for", but with errors, gonna fix it.

- check pre- and post increment and decrement

- check comma operator

- check boolean operators

- Created temperature convertor, not without problems. learn about %d, but how much characters to draw, where %5d is 6 char.

- check flow point

- check sizeof

- check all cycles

- check switch

- create adder with fixes

## Exercism