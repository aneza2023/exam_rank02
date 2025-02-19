#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd(char *str, char *str2)
{
    int i;
    int k;
    int j;

    i = atoi(str);
    k = atoi(str2);
    if (k > i)
        j = k;
    else if (i >= k)
        j = i;
    if (k < 0 || i < 0)
        return (1);
    while (j > 0)
    {
        if (k % j == 0 && i % j == 0)
        {
            printf("%d\n", j);
            return (0);
        }
        j--;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3){
        write(1, "\n", 2);
        return (0);
    }
    else
        pgcd(argv[1], argv[2]);
    return (1);
}