#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int repetition(char lett, char *str, int k)
{
    int i;

    i = 0;
    while (str[i] != '\0' && i < k)
    {
        if (lett == str[i])
            return (1);
        i++;
    }
    return (0);
}

int inter(char *str, char *second)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (second[j] != '\0')
        {
            if ((str[i] == second[j]) && (repetition(second[j], second,j) == 0) && repetition(str[i], str, i) == 0)
            {
                write (1, &str[i], 1);
            }
            j++;
        }
        i++;
    }
    write (1, "\n", 2);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
        write (1, "\n", 2);
    else
        inter(argv[1], argv[2]);
    return(0);
}