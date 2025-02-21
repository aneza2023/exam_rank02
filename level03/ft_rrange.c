#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *range;
    int k;
    int i;

    if (start < end)
        k = end - start + 1;
    else if (start >= end)
        k = ((end) - start - 1) * (-1);
    range = malloc(sizeof(int) * k);
    if (range == NULL)
        return (NULL);
    i = 0;
    if (start < end)
    {
        while (start <= end)
        {
            range[i] = end;
            i++;
            end--;
        }
    }
    else if (start > end)
    {
        while (start >= end)
        {
            range[i] = end;
            end++;
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
    result =  ft_rrange(-3, -13);
    while (k < 18)
    {
        printf("%d\n", result[k]);
        k++;
    }
    return (0);
} */