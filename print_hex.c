#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int print_hex(char *argv)
{
    
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        print_hex(argv[1]);
    return (0);
}