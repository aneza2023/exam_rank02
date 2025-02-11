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

// how withou using malloc
char    *ft_strrev(char *str)
{
    int i;
    int j;
    char *temp;

    i = ft_strlen(str);
    j = 0;
    while (i > 0)
    {
        temp[j] = str[i];
        j++;
        i--;
    }
    temp[j] = '\0';
    return (temp);
}

int main(void)
{
    char *str;

    str = "kolobeyka";
    ft_strrev(str);
    printf("%s", ft_strrev(str));
    return (0);
}