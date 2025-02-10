#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ulstr(char *str)
{
    char    mod;
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        mod = str[i];
        if ((str[i] > 64) && (str[i] < 91))
            mod = str[i] + 32;
        else if ((str[i] > 96) && (str[i] < 123))
            mod = str[i] - 32;
        write (1, &mod, 1);
        i++;
    }
    write (1, "\n", 2);
    return(0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        ulstr(argv[1]);
    return(0);
}