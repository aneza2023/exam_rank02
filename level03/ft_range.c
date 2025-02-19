#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


// issue> if range starts with 0

int     *ft_range(int start, int end)
{
    int *range;
    int k;
    int i;

    k = (end) - (start) + 1;
    printf("%d", k);
    range = malloc(sizeof(int) * (k + 1));
    if (range == NULL)
        return (NULL);
    k = 0;
    while (start <= end)
    {
        range[k] = start;
        k++;
        start++;
    }
    range[k] = '\0';
    return (range);
}

/* int main(void)
{
    int *result;
    int k;

    k = 0;
    result =  ft_range(0, 3);
    while (result[k] != '\0')
    {
        printf("%d\n", result[k]);
        k++;
    }
    return (0);
} */