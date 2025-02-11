#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int temp;

    i = 0;
    temp = 0;
    while (i < len)
    {
        if (tab[i] > temp)
            temp = tab[i];
        i++;
    }
    return (temp);
}

/* int main(void)
{
    int len;
    int arr[] = {5, 6, 18, 24};

    len = 4;
    printf("%d", max(arr, len));
    return (0);
} */