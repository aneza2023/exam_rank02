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

int printing(char k)
{
    write (1, &k, 1);
    return (0);
}

int printchar(int k)
{
    if (k >= 0 && k <10)
        printing(k + '0');
    else{
        printchar(k / 10);
        printchar(k % 10);
    }
    return (0);
}

int tabmult(char *str)
{
    int i;
    int k;
    int l;

    i = ft_atoi(str);
    if (i < 0)
    {
        write (1, "\n", 1);
        return (1);
    }
    k = 1;
    while (k < 10)
    {
        l = i * k;
        printchar(k);
        write (1, " * ", 3);
        printchar(i);
        write (1, " = ", 3);
        printchar(l);
        write (1, "\n", 1);
        k++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        tabmult(argv[1]);
    return (0);
}