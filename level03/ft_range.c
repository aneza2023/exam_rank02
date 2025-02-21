#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int k;
    int i;

    if (start < end)
        k = end - start + 1;
    else if (start >= end)
        k = ((end) - start - 1) * (-1);
 //   printf("%d", k);
    range = malloc(sizeof(int) * k);
    if (range == NULL)
        return (NULL);
    i = 0;
    if (start < end)
    {
        while (start <= end)
        {
            range[i] = start;
            i++;
            start++;
        }
    }
    else if (start > end)
    {
        while (start >= end)
        {
            range[i] = start;
            start--;
            i++;
        }
    }
    return (range);
}

/* int main(void)
{
    int *result;
    int k;

    k = 0;
    result =  ft_range(-3, 11);
    while (k <= 15)
    {
        printf("%d\n", result[k]);
        k++;
    }
    return (0);
} */