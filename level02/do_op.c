#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op(char *nbc, char *operator, char *nb2c)
{
    int nb;
    int nb2;
    int result;

    nb = atoi(nbc);
    nb2 = atoi(nb2c);
    if (operator[0] == '+')
        result = nb + nb2;
    else if (operator[0] == '-')
        result = nb - nb2;
    else if (operator[0] == '/')
        result = nb / nb2;
    else if (operator[0] == '*')
        result = nb * nb2;
    else if (operator[0] == '%')
        result = nb % nb2;
    printf ("%d\n", result);
    return (0);
}


int main(int argc, char *argv[])
{
    if (argc < 4 || argc > 4){
        write(1, "\n", 2);
        return (0);
    }
    else
        do_op(argv[1], argv[2], argv[3]);
    return (1);
}