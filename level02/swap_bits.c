#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char result;

    result =  ((octet >> 4 | octet << 4));
    return (result);
}

/* int main(void)
{
    unsigned char c = 150;
    printf("\n%d\n", swap_bits(c));
    return (0);
} */