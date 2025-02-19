#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
    char *workbase;
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
        i++;
    if (str[i] == '-'){
        sign = sign * (-1);
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    return (result);
}

int main (void)
{
    char *str = "12a";
    int base = "3";
    printf("%d", ft_atoi_base(str, base));
    return (0);
}