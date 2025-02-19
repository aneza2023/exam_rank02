#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int putchr(char c)
{
    write (1, &c, 1);
    return (0);
}

int putnbr(int i)
{
    if (i < 10 && i >= 0)
        putchr(i + '0');
    else
    {
        putnbr(i / 10);
        putnbr(i % 10);
    }
    return (0);  
}

int main(int argc, char *argv[])
{
    putnbr(argc - 1);
    write (1, "\n", 1);
    return (0);
}