#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            else
                j++;
        }
        i++;
    }
    return (i);
}

/* int main(void)
{
    char *str;
    char *forbidden;

    str = "hello word";
    forbidden = "";
    printf("%ld\n", ft_strcspn(str, forbidden));
    printf("%ld\n", strcspn(str, forbidden));
    return (0);
} */