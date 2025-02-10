#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int rotone(char *str)
{
    int     i;
    char    mod;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'z')
            mod = 'a';
        else
            mod = str[i] + 1;
        write (1, &mod, 1);
        i++;
    }
    write (1, "\n", 2);
    return (0);
}

int main(void)
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        rotone(argv[1]);
    return(0);
}