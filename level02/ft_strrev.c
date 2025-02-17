#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char    *ft_strrev(char *str)
{
    int i;
    int k;
    char temp;

    i = 0;
    k = ft_strlen(str) - 1;
    while (i < k)
    {
        temp = str[i];
        str[i] = str[k];
        str[k] = temp;
        i++;
        k--;
    }
    str[ft_strlen(str)] = '\0';
    return (str);
}

/* int main(void)
{
    char str[50] = "kulik";
    //ft_strrev(str);
    printf("%s", ft_strrev(str));
    return (0);
} */