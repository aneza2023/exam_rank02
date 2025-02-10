#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int repeat_alpha(char *str)
{
    int i;
    int count;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] > 64) && (str[i] < 91))
            count = str[i] - 64; 
        else if ((str[i] > 96) && (str[i] < 123))
            count = str[i] - 96; 
        while (count > 0)
        {
            write(1, &str[i], 1);
            count--;
        }
        i++;
    }
    return(0);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
        write (1, "\n", 2);
    else
        repeat_alpha(argv[1]);
    return(0);
}