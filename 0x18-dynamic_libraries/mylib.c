#include <stdlib.h>

static int i = 0;
static int values[] = {9, 8, 10, 24, 75, 9};
static int n = 6;

int rand(void) {
    int val = values[i];
    i = (i + 1) % n;
    return val;
}