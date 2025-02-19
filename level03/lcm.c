#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int result;
    int aarr[b];
    int barr[a];
    int j;
    int k;

    j = 0;
    k = 1;
    if (a == 0 || b == 0)
        result = 0;
    else
    {
        while (j <= a && j <= b)
        {
            aarr[j] = a * k;
            barr[j] = b * k;
            k++;
            j++;
        }
    }
    k = 0;
    while (k <= a && k <= b){
        j = 0;
        while (j <= a && j <= b)
        {
            if (aarr[j] == barr[k]) 
                return (aarr[j]);
            j++;
        }
        k++;
    }
    return (a * b);
}

/* int main(void)
{
    int a = 7;
    int b = 3;
    printf("%d", lcm(a, b));
    return (0);
} */