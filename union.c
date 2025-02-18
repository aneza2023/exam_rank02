#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int repetition (char *str, char strie)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != strie)
            i++;
        else
            return (1);
    }
    return (0);
}

int unionstr(char *str, char *sec)
{
    int i;
    int j;
    int seen;

    write (1, &str[0], 1);
    i = 1;
    while (str[i] != '\0')
    {
        j = i - 1;
        while (j >= 0)
        {
            if (str[i] == str[j]){
                i++;
                break;
            }
            if (str[i] != str[j] && j == 0)
                write (1, &str[i], 1);
            j--;
        }
        i++;
    }
    // second string loop
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3){
        write(1, "\n", 2);
        return (0);
    }
    else
        unionstr(argv[1], argv[2]);
    return (1);
}