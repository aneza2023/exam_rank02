#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// probably incorrect
void	ft_swap(int *a, int *b)
{
    int *temp;

    temp = a;
    a = b;
    b = temp;
}

/* int main(void)
{
    int *a;
    int *b;

    ft_swap(a, b);
    return (0);
} */