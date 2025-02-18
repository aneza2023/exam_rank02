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

int add_prime_sum(char *str)
{
    int i;
    int k;
    int z;
    int a;

    i = ft_atoi(str);
    if (i < 0){
        write (1, "\n", 1);
        return (1);
    }
    k = 1;
    while (k <= i)
    {
        z = 2;
        while (z < k)
        {
            if (k % z == 0 && z != k)
                break;
            z++;
        }
        if (z >= k)
            a = a * k;
        k++;
    }
    //how since a char - itoa + strlen seems too long
    write(1, &a, 5);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        add_prime_sum(argv[1]);
    return(0);
}