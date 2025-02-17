#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else
        snake_to_camel(argv[1]);
    return (1);
}