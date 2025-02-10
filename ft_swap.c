#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// probably incorrect
void	ft_swap(int *a, int *b)
{
    int *temp;

  //  printf("before change a, b: %p, %p", a, b);
    temp = a;
    a = b;
    b = temp;
   // printf("a, b: %p, %p", a, b);
}

/* int main(void)
{
    int *a;
    int *b;

    ft_swap(a, b);
    return (0);
} */