#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int     i;
    int     k;
    char    nb;
    char    nb2;

    i = 1;
    while (i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            write (1, "fizzbuzz\n", 10);
            i++;
        }
        else if ((i % 3 == 0) && (i % 5 != 0))
        {
            write (1, "fizz\n", 6);
            i++;
        }
        else if ((i % 3 != 0) && (i % 5 == 0))
        {
            write (1, "buzz\n", 6);
            i++;
        }
        else
        {
            k = i;
            nb = (k / 10) + '0';
            nb2 = (k % 10) + '0';
            if (i > 9)
                write (1, &nb, 1);
            write (1, &nb2, 1);
            write (1, "\n", 2);
            i++;
        }
    }
    return (0);
}