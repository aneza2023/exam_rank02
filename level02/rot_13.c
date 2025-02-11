#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int rot_13(char *str)
{
    int     i;
    char    mod;

    i = 0;
    while (str[i] != '\0')
    {
        mod = str[i];
        if ((str[i] >= 65 && str[i] <= 77) || (str[i] >= 97 && str[i] <= 109))
            mod = str[i] + 13;
        else if ((str[i] >= 110 && str[i] <= 122) || (str[i] >= 78 && str[i] <= 90))
            mod = str[i] - 13;
        write (1, &mod, 1);
        i++;
    }
    write (1, "\n", 2);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write (1, "\n", 2);
        return (0);
    }
    else
        rot_13(argv[1]);
    return(0);
}