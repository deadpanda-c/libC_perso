#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

char *read_file(char *filepath, int fd)
{
    struct stat info_file;
    char *stock_content = NULL;
    ssize_t value = 0;

    if (fd == -1)
        return (NULL);
    stat(filepath, &info_file);
    stock_content = malloc(sizeof(char) * (info_file.st_size + 1));
    if (!stock_content)
        return (NULL);
    value = read(fd, stock_content, info_file.st_size);
    if (value == -1)
        return (NULL);
    stock_content[info_file.st_size] = '\0';
    return (stock_content);
}
