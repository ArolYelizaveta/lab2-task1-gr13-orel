/*
 * Орёл Елизавета, группа 13
 * Реализация функции подсчёта символов в строке.
 */

#include "charcount.h"

int count_char(const char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}