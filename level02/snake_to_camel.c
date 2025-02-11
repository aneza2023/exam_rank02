#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
        i++;
    return(i);
}

int snake_to_camel(char *str)
{
    int i;
    int j;
    int k;
    char *final;

/*     i = ft_strlen(str);
    j = 0;
    k = 0;
    while (str[j] != '\0')
    {
        if (str[j] == '_')
            k++;
        j++;
    }
    final = (char *)malloc(sizeof(char) * (i - k)); */
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '_')
        {
            str[i + 1] = str[i + 1] - 32;
            i++;
        }
        write (1, &str[i] , 1);
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
        snake_to_camel(argv[1]);
    return (1);
}