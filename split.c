#include <stdio.h>
#include <stdlib.h>

int count_word(char *sentence, char c)
{
    int words_nb = 0;

    for (int index = 0; sentence[index]; index++) {
        if (sentence[index] == c)
            words_nb++;
    }
    return (words_nb);
}

int count_char(char *sentence, char sepa)
{
    int index = 0;

    for (index = 0; sentence[index] != sepa 
            && sentence[index] != '\0'; index++);
    return (index);
}

char **split(char *sentence, char sepa)
{
    int array_index = 0;
    int index = 0;
    int sheesh = 0;
    int nb_words = count_word(sentence, sepa);
    char **tab_of_char = NULL;

    tab_of_char = malloc(sizeof(char *) * (nb_words + 3));
    for (array_index = 0; array_index <= nb_words
            && sentence[index] != '\0'; array_index++) {
        sheesh = 0;
        tab_of_char[array_index] = malloc(sizeof(char)
        * (count_char(sentence + index, sepa) + 1));
        for (; sentence[index] != '\0'
        && sentence[index] != sepa; index++) {
            tab_of_char[array_index][sheesh] = sentence[index];
            sheesh++;
        }
        tab_of_char[array_index][sheesh] = '\0';
        index++;
    }
    tab_of_char[array_index] = NULL;
    return (tab_of_char);
}
