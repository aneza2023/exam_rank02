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

int camle_to_snake(char *str)
{
    int i;
    int j;
    int k;
    char *final;

    i = ft_strlen(str);
    j = 0;
    k = 0;
    while (str[j] != '\0')
    {
        if (str[j] > 65 && str[j] < 90)
            k++;
        j++;
    }
    final = (char*)malloc(sizeof(char) * (i + k));
    j = 0;
    while (str[j] != '\0')
    {
        if (str[j] > 64 && str[j] < 91){
            write (1, "_", 1);
            str[j] = str[j] + 32;
        }
        write (1, &str[j], 1);
        j++;
    }
    write (1, "\n", 2);
    return (0);    
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else
        camle_to_snake(argv[1]);
    return (1);
}
