#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int open_file(char *filepath, int flag)
{
    int fd = 0;

    fd = open(filepath, flag);
    if (fd == -1) {
        printf("can not open the file");
        return (-1);
    }
    return (fd);
}
