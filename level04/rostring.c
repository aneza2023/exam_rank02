#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int rostring(char *str)
{
    int i;
    int k;
    int j;

    i = 0;
    k = 0;
    while (str[i] == 32 || str[i] == 9)
    {
        k++;
        i++;   
    }
    while (str[i] != '\0' && (str[i] != 32 && str[i] != 9))
    {
        i++;
    }
  //  printf("%d", i);
    j = i;
    while (str[i] != '\0')
    {
        if (str[i] != 32 && str[i] != 9)
            write (1, &str[i], 1);
        if ((str[i] == 32 || str[i] == 9) && (i != j) 
            && (str[i - 1] != 32 && str[i - 1] != 9) && (str[i + 1] != '\0')){
                write (1, &str[i], 1);
            }
            if ((str[i] != 32 && str[i] != 9) && (str[i + 1] == '\0'))
                write (1, " ", 1);
        i++;
    }
    while (k < j)
    {
        if (str[i] != 32 || str[i] != 9)
            write (1, &str[k], 1);
        k++;
    }
    write (1, "\n", 1);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || argc < 2)
        write (1, "\n", 1);
    else if ((argc == 2))
        rostring(argv[1]);
    return (0);
}