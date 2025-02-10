#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int last_word(char *str)
{
    int i;
    char *temp;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    temp[i + 1] = '\0';
    while (i > 0)
    {
        if (str[i] == 32)
            break;
        temp[i] = str[i];
        i--;
    }
    while (temp[i] != '\0')
    {
        write(1, &temp[i], 1);
        i++;
    }
    write(1, "\n", 2);
    return (0);
}


int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else
        last_word(argv[1]);
    return (1);
}