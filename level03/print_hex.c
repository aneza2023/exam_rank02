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

int printchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int putnbr(int i)
{
    char *hex;

    hex = "abcdef";
    if (i >= 0 && i < 10)
        printchar(i + '0');
    else if (i >= 10 && i < 16)
        printchar(hex[i - 10]);
    else{
        putnbr(i / 16);
        putnbr(i % 16);
    }
    return (0);
}

int print_hex(char *argv)
{
    char *hex;
    int i;
    int k;
    int h;

    i = ft_atoi(argv);
    putnbr(i);
    write (1, "\n", 1);
   return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        print_hex(argv[1]);
    return (0);
}