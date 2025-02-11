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

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = ft_strlen(src);
    dest = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/* int main(void)
{
    char *str;

    str = "hellou";
    ft_strdup(str);
    printf("%s\n", ft_strdup(str));
    printf("%s\n", strdup(str));
    return (0);
} */