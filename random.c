#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "random.h"

char randchar(void) {
    const char* alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n = rand() % 26; 
    return alphabet[n];
}