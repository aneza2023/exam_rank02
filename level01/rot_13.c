#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// works podle zadani, examples are different
int rot_13(char *str)
{
    int     i;
    char    mod;

    i = 0;
    while (str[i] != '\0')
    {
        mod = str[i] - 13;
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
        rot_13(argv[1]);
    return(0);
}