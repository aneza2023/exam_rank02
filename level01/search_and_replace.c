#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int search_and_replace(char *str, char *search, char *replace)
{
    int i;

    i = 0;
    if (search[1] != '\0' || replace[1] != '\0')
    {
        write (1, "\n", 1);
        return (0);
    }
    while (str[i] != '\0')
    {
        if (str[i] == search[0])
            str[i] = replace[0];
        write (1, &str[i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 4 || argc > 4)
        write (1, "\n", 2);
    else
        search_and_replace(argv[1], argv[2], argv[3]);
    return (0);
}