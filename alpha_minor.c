#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


// does not make sense, m would still be m, unlike the example
int alpha_minor(char *str)
{
    int i;
    char mod;

    i = 0;
    while (str[i] != '\0')
    {

    }
}


int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        alpha_minor(argv[1]);
    return(0);
}