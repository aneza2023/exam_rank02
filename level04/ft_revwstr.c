#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int numberofstring(char *str)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 32 || str[i] == 9)
            k++;
        i++;
    }
    return (k + 1);
}


int ft_strlenmod(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0' && (argv[i] != 32 && argv[i] != 9))
    {
        i++;
    }
    return(i);
}

char *stringmake(char *str)
{
    int i;
    char *string;

    i = ft_strlenmod(str);
    string = malloc(sizeof(char) * i + 1);
    if (string == NULL)
        return (NULL);
    i = 0;    
    while (str[i] != '\0' && (str[i] != 32 && str[i] != 9))
    {
        string[i] = str[i];
        i++;
    }
    string[i] = '\0';
    return (string);
}

char    **ft_split(char *str)
{
    char **result;
    int    nbstr;
    int len;
    int i;

    nbstr = numberofstring(str);
    result = malloc(sizeof(char *) * nbstr + 1);
    if (result == NULL)
        return NULL;
 //   findend(str);
    i = 0;
    while (i < nbstr)
    {
        result[i] = stringmake(&str[len]);
        while (str[len] != '\0' && (str[len] != 32 && str[len] != 9))
            len++;
        len++;
        i++;
    }
    result[i] = '\0';
    return (result);
}

int revwstr(char *str)
{
    int i;
    int k;
    char **strings;

    i = numberofstring(str);
 //   printf("%d", i);
    strings = malloc(sizeof(char *) * i + 1);
    if (strings == NULL)
        return (0);
    strings = ft_split(str);
    i = i - 1;
    while (i >= 0)
    {
        k = 0;
        while (strings[i][k] != '\0') // jednotlivz string
        {
            write(1, &strings[i][k], 1);
            k++;
        }
        if (i > 0)
            write (1, " ", 1);
        i--;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        revwstr(argv[1]);
    return (0);
}