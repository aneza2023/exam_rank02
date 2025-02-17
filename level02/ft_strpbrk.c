#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int j;

    while (*s1 != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (*s1 == s2[j])
               return ((char*)s1);
            j++;
        }
        s1++;
    }
    return (NULL);
}

/* int main(void)
{
    char *str1;
    char *str2;

    str1 = "hapkido";
    str2 = "o";
    printf("%p\n", ft_strpbrk(str1, str2));
    printf("%s\n", ft_strpbrk(str1, str2));
    printf("%p\n", strpbrk(str1, str2));
    printf("%s\n", strpbrk(str1, str2));
    return (0);
} */