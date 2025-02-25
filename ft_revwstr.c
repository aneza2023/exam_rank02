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

int revwstr(char *str)
{
    int i;
    int k;

    k = ft_strlen(str);
    i = ft_strlen(str);
    while (k > 0)
    {
        while (i > 0)
        {
            if (str[i] == 32 || str[i] == 9)
                break;
            i--;
        }
        while (str[i] != '\0')
        {
            write (1, &str[i], 1);
            i++;
        
    }
    
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        revwstr(argv[1]);
    return (0);
}