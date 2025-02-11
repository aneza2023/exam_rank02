#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == s2[i])
            i++;
        
    }
}

int main(void)
{
    char *s1;
    char *s2;

    ft_strcmp(s1, s2);
    printf("%d\n", ft_strcmp(s1, s2));
    printf("%d\n", strcmp(s1, s2));
    return(0);
}