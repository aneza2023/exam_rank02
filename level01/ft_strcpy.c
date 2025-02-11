#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
    int i;

    k = 0;
    i = ft_strlen(s1);
    s2 = (char*)malloc(i*sizeof(char));
    while (s1[k] != '\0')
    {
        s2[k] =  s1[k];
        k++;
    }
    return (s2);
}

/* int main(void)
{
    char *s1;
    char *s2;

    s1 = "hellou";
    ft_strcpy(s1, s2);
    printf("string: %s", ft_strcpy(s1, s2));
    return (0);
} */