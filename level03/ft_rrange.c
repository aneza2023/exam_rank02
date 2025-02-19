#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *range;
    int k;
    int i;

    k = (end) - (start) + 1;
    range = malloc(sizeof(int) * (k + 1));
    if (range == NULL)
        return (NULL);
    k = 0;
    while (start <= end)
    {
        range[k] = end;
        k++;
        end--;
    }
    range[k] = '\0';
    return (range);
}

/* int main(void)
{
    int *result;
    int k;

    k = 0;
    result =  ft_rrange(-3, 13);
    while (k < 15)
    {
        printf("%d\n", result[k]);
        k++;
    }
    printf("\n\n%d", k);
    printf("\n\n%d", result[15]);
    return (0);
} */