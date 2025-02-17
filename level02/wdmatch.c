#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        i++;
    }
    return(i);
}

int wdmatch(char *str, char *sec)
{
    int i;
    int j;
    int present;

    i = 0;
    present = 0;
    j = 0;
    while (sec[j] != '\0')
    {
        if (str[i] == 32){
            i++;
        //    present++;
        }
        if (sec[j] == 32){
            j++;
        }
        if (str[i] == sec[j])
        {
            i++;
            j++;
            present++;
        }
        else
            j++;
    }
    i = 0;
    if (present == ft_strlen(str))
    {
        while (str[i] != '\0')
        {
            write (1, &str[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3){
        write(1, "\n", 2);
        return (0);
    }
    else
       wdmatch(argv[1], argv[2]);
    return (1);
}