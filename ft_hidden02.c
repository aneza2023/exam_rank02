#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int writehidden(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

int hidden(char *str, char *sec)
{
    int i;
    int k;
    int c;

    i = 0;
    k = 0;
    c = 0;
    while (sec[i] != '\0')
    {
        if (sec[i] == str[k]){
            while (str[k] != '\0'){
                if (str[k] != sec[i])
                    break;
                if (str[k] == sec[i] && str[k + 1] == '\0'){
                    writehidden(str);
                    c++;
                }
                i++;
                k++;
            }
        } 
        i++;   
    }
    if (c == 0)
        write (1, "0\n", 2);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
        write (1, "\n", 2);
    else
       hidden(argv[1], argv[2]);
    return(0);
}