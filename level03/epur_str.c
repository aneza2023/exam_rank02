#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


//"vous avez entendu, Mathilde ?" 

int ft_break(char *argv)
{
    int i;

    i = 0;
    while(argv[i] == 32 || argv[i] == 9)
    {
        i++;
    }
    return(i);
}

int epur_str(char *str)
{
    int i;
    int k;

    i = 0;
    k = ft_break(str);
    while (str[i] != '\0')
    {
        if (str[i] != 32 && str[i] != 9)
            write (1, &str[i], 1);
        else if (((i > k) && str[i + 1] != '\0') && (str[i] == 32 || str[i] == 9) && (str[i + 1] != 32 && str[i + 1] != 9))
            write (1, &str[i], 1);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        epur_str(argv[1]);
    return(0);
}