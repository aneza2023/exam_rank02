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
    printf("from swap> a%d, b%d", *a, *b);
}

int main(void)
{
    int *a;
    int *b;
    int c = 4;
    int d = 7;

    a = &c;
    b = &d;
    ft_swap(a, b);
    printf("from main> a%d, b%d", *a, *b);
    return (0);
}