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
        mod = str[i];
        if (str[i] == 'z')
            mod = 'a';
        else if (str[i] == 'Z')
            mod = 'A';
        else if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] < 122))
            mod = str[i] + 1;
        write (1, &mod, 1);
        i++;
    }
    write (1, "\n", 2);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        rotone(argv[1]);
    return(0);
}