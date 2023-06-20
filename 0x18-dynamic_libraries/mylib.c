#include <stdlib.h>
#include <string.h>

int rand(void)
{
    static int i = 0;
    static int values[] = {9, 8, 10, 24, 75, 9};
    static int num_values = 6;

    int value = values[i];
    i = (i + 1) % num_values;
    return value;
}