#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlenmod(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        if (argv[i] == 32 || argv[i] == 9)
            i++;
        i++;
    }
    return(i);
}

int revwstr(char *str)
{
    int i;
    int j;
    char **arr;

    i = 0;
    j = ft_strlenmod(str) + 1;
    printf("%d", j);
    arr = malloc(sizeof(char) * j);
    if (arr == NULL)
        return (NULL);
    while (str)
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        revwstr(argv[1]);
    return (0);
}