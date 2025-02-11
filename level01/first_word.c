#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        if(argv[i] == 32 || argv[i] == 9)
            i++;
        else
            break;
    }
    while(argv[i] != '\0')
    {
        if(argv[i] == 32 || argv[i] == 9)
            break;
        i++;
    }
    return(i);
}

int mod_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == 32 || str[i] == 9)
            i++;
        else
            break;
    }
    return (i);
}

int first_word(char *argv)
{
    int k;
    int i;

    k = mod_strlen(argv);
    printf("k je :%d\n", k);
    i = ft_strlen(argv);
    printf("i je :%d\n", i);
    while (argv[k] != 0 && k < i)
    {
        write(1, &argv[k], 1);
        k++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else
    {
        first_word(argv[1]);
        write(1, "\n", 2);
    }
    return (1);
}