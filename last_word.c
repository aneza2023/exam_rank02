#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int last_word(char *str)
{
    
}


int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else
        last_word(argv[1]);
    return (1);
}