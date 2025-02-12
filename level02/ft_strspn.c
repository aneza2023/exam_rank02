#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        i++;
    }
    return(i);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        j = ft_strlen(accept);
     //   printf("acclen %d", j); 
        while (j >= 0)
        {
            if (s[i] == accept[j]){
                j = ft_strlen(accept);
                i++;
            }
            else if ((s[i] != accept[j]) && j == 0)
                return (i);
            j--;
        }
    }
    return (i);
}

/* int main(void)
{
    char *str;
    char *forbidden;

    str = "hello word";
    forbidden = "ohle";
    printf("%ld\n", ft_strspn(str, forbidden));
    printf("%ld\n", strspn(str, forbidden));
    return (0);
} */