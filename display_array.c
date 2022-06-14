#include <stdlib.h>
#include <stdio.h>

void display_array(char **array)
{
    if (!array) {
// display error message
        return;
    }
    for (int i = 0; array[i]; i++)
        printf("%s\n", array[i]);
}
