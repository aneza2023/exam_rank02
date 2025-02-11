#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    if (n % 2 == 0)
        return (1);
    return (0);
}

/* int main(void)
{
    int nb;

    nb = 45;
    printf("%d", is_power_of_2(nb));
    return (0);
} */