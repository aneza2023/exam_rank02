#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int inter(char *str, char *second)
{
    int i;
    int j;
    int l;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (second[j] != '\0')
        {
            if (str[i] == second[j])
            {
                write(1, &str[i], 1);
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