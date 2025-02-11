#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
        i++;
    if (str[i] == '-')
    {
        sign = sign * ( - 1);
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] > 47 && str[i] < 58)
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    result = result * sign;
    return (result);
}

/* int main(void)
{
    char *nb;

    nb = "-254643";
    ft_atoi(nb);
    atoi(nb);
    printf("%d\n", ft_atoi(nb));
    printf("%d\n", atoi(nb));
    return (0);
} */