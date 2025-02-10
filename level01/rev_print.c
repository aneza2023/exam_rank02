#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        if(argv[i] == 32)
            break;
        i++;
    }
    return(i);
}

int rev_print(char *str)
{
    int i;

    i = ft_strlen(str);
    while (i >= 0)
    {
        write (1, &str[i], 1);
        i--;
    }
    write (1, "\n", 2);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        rev_print(argv[1]);
    return(0);
}