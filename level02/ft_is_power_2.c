#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    int i;

    i = 1;
    while (i <= 46340)
    {
        if (n / i == i && n % i == 0)
            return (1);
        else
            i++;
    }
    return (0);
}

/* int main(void)
{
    int nb;

    nb = 2147395601;
    printf("%d", is_power_of_2(nb));
    return (0);
} */