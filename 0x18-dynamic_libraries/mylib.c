#include <stdlib.h>

static int index = 0;
static int values[] = {9, 8, 10, 24, 75, 9};
static int num_values = 6;

int rand(void) {
    int value = values[index];
    index = (index + 1) % num_values;
    return value;
}