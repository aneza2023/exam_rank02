#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int rotone(char *str)
{
    int     i;
    char    mod;

    i = 0;
    if (str == NULL)
    {
        write (1, "\n", 2);
        return (0);
    }
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
    char *str;

    str = "zakopano";
    rotone(str);
    return(0);
}