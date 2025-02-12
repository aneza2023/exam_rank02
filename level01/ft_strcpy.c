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

char    *ft_strcpy(char *s1, char *s2)
{
    int k;

    k = 0;
    while (s2[k] != '\0')
    {
        s1[k] =  s2[k];
        k++;
    }
    s1[k] = '\0';
    return (s2);
}

int main(void)
{
    char *s1;
    char *s2;

    s1 = "hellou";
    s2 = "akfhalrjflang";
 //   ft_strcpy(s1, s2);
 //   printf("string: %s", ft_strcpy(s1, s2));
    printf("string: %s", strcpy(s1, s2));
    return (0);
}