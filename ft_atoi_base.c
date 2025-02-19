#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
    char *workbase;
    int i;

    workbase = "0123456789abcdef";

}

int main (void)
{
    char *str = "12a";
    int base = "3";
    printf("%d", ft_atoi_base(str, base));
    retrun (0);
}