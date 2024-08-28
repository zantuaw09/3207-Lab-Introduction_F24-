#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "random.h"

char randchar(void) {
    const char* alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n = rand() % 26; 
    return alphabet[n];
}

void rand_string(char* s, size_t size) {
    srand(time(NULL));
    for (size_t n = 0; n < size; n++) {
        s[n] = randchar();
    }
}