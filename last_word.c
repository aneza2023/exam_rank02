#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        i++;
    }
    return(i);
}

int last_word(char *str)
{
    int i;
    int k;
    
    i = ft_strlen(str);
    k = 0;
    while (i > 0)
    {
        if (str[i] == 32)
            break;
        k++;
        i--;
    }
    i = ft_strlen(str) - k + 1;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 2);
    return (0);
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