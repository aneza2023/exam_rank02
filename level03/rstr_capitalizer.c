#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int rstr_cap(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\0' || str[i + 1] == 9 || str[i + 1] == 32))
            str[i] = str[i] - 32;
        write (1, &str[i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}


int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc < 2)
        write (1, "\n", 1);
    else if ((argc >= 2))
    while (i <= argc && argv[i] != NULL)
    {
        rstr_cap(argv[i]);
        i++;
    }
    return (0);
}