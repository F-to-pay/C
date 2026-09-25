#ifndef ATOMSGAME_CONIO_COMPAT_H
#define ATOMSGAME_CONIO_COMPAT_H
/*
 * Minimal conio.h replacement for POSIX terminals (Cygwin/mintty, Linux, macOS).
 * Cygwin's clang doesn't ship the real (Windows/MSVC) conio.h, so this gives
 * you the same function names (_getch/getch, _kbhit/kbhit) implemented on
 * top of termios, so tutorial code that expects conio.h works unmodified.
 *
 * How to use: keep `#include <conio.h>` in main.c exactly as the tutorial
 * has it, and just add -I. to your compile command so the compiler finds
 * THIS file first, e.g.:
 *
 *   clang -I. main.c -o main
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>

static struct termios _conio_compat_old_termios;
static int _conio_compat_initialized = 0;

static void _conio_compat_restore(void) {
    if (_conio_compat_initialized) {
        tcsetattr(STDIN_FILENO, TCSANOW, &_conio_compat_old_termios);
    }
}

static void _conio_compat_init(void) {
    if (_conio_compat_initialized) return;
    tcgetattr(STDIN_FILENO, &_conio_compat_old_termios);
    struct termios raw = _conio_compat_old_termios;
    raw.c_lflag &= ~(ICANON | ECHO); /* no line buffering, no echo */
    raw.c_cc[VMIN] = 1;
    raw.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
    _conio_compat_initialized = 1;
    atexit(_conio_compat_restore);
}

/* Reads one keypress immediately, no Enter needed — same as MSVC's _getch(). */
static int _getch(void) {
    _conio_compat_init();
    return getchar();
}
static int getch(void) { return _getch(); }

/* Returns nonzero if a key is waiting to be read — same as MSVC's _kbhit(). */
static int _kbhit(void) {
    _conio_compat_init();
    struct timeval tv = {0L, 0L};
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    return select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0;
}
static int kbhit(void) { return _kbhit(); }

#endif /* ATOMSGAME_CONIO_COMPAT_H */
