#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int fprime(char *str)
{
    int nb;
    int i;
    int k;

    nb = atoi(str);
    i = 2;
    k = 2;
    while (i < nb)
    {
        if ()
    }

}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        fprime(argv[1]);
    return (0);
}