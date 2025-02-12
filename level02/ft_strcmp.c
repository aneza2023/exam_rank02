#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i])
            i++;
        else {
            result = s1[i] - s2[i];
            return (result);
        }
    }
    return (result);
}

/* int main(void)
{
    char *s1;
    char *s2;

    s1 = "hellicka";
    s2 = "hellbkublkjah";

    ft_strcmp(s1, s2);
    printf("%d\n", ft_strcmp(s1, s2));
    printf("%d\n", strcmp(s1, s2));
    return(0);
} */