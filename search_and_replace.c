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

int compare(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    return (0);
}
int search_and_replace(char *str, char *search, char *replace)
{
    int i;
    int k;
    int j;

    i = 0;
    k = ft_strlen(search);
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == search[k])
        {
            if (compare(str, search) == 0)
            {
                while (replace[j] != '\0' || k > 0)
                {
                    str[i] = replace[j];
                    i++;
                    j++;
                    k--;
                }
            }
        }
        i++;
        k = 0;
    }
    j = 0;
    while (str[j] != '\0')
    {
        write(1, &str[i], 1);
        j++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 4 || argc > 4)
        write (1, "\n", 2);
    else
        search_and_replace(argv[1], argv[2], argv[3]);
    return (0);

}