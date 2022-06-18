#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

static int count_array_len(char **tab)
{
    int nb_char = 0;

    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++)
            nb_char +=1;
    }
    return (nb_char);
}

static int count_words(char **tab)
{
    int i = 0;

    for (; tab[i]; i++);
    return (i);
}

char *join(char **tab, char sepa)
{
    int index = 0;
    int nb_word = 0;
    int total_len_tab = 0;
    char *stock = NULL;

    nb_word = count_words(tab);
    total_len_tab = count_array_len(tab);
    stock = malloc(sizeof(char) * ((total_len_tab + nb_word) + 1));
    if (!stock)
        return (NULL);
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j]; j++, index++)
            stock[index] = tab[i][j];
        stock[index] = sepa;
        index++;
    }
    stock[index] = '\0';
    return (stock);
}
