#include <stdlib.h>

int count_array(char **array)
{
    int lenght = 0;

    if (!array)
        return (-1);
    for (; array[lenght]; lenght++);
    return (lenght);
}
