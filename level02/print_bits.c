#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
    int i;
    int l;

    i = 7;
    while (i >= 0)
    {
        l = (octet >> i) & 0x1;
        if (l == 0)
            write(1, "0", 1);
        else if (l == 1)
            write(1, "1", 1);
        i--;
    }
}

int main(void)
{
    unsigned char c = 'a';
    print_bits(c);
    return (0);
}