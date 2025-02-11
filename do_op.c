#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op(char *nb, char *sign, char *nb2)
{
    int nb;
    int nb2;
    int sign;

    nb = atoi(nb);
    nb2 = atoi(nb2);
    if ()
    
}


int main(int argc, char *argv[])
{
    if (argc < 4 || argc > 4){
        write(1, "\n", 2);
        return (0);
    }
    else
        do_op(argv[1]);
    return (1);
}