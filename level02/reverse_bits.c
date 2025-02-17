#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char result;

    i = 7;
    while (i >= 0)
    {
        result = (result << 0x1) | (octet & 0x1);
        octet = octet >> 0x1;
        i--;
    }
    return (result);
}

/* int main(void)
{
    unsigned char c = 130;
    printf("%c\n", reverse_bits(c));
    return (0);
} */