#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/* int main(void)
{
    int c = 4;
    int d = 7;

    ft_swap(&c, &d);
    return (0);
} */