#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;
    char *c;

    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j]){
              //  c = &s1[i];
                return ((char*)s1);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char *str1;
    char *str2;

    str1 = "hapkido";
    str2 = "okaido";
    printf("%p\n", ft_strpbrk(str1, str2));
    printf("%p\n", strpbrk(str1, str2));
    return (0);
}