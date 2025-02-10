#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int search_and_replace(char *str, char *search, char *replace)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while( str[i] != '\0')
    {
        if (search[k] != '\0')
        {
            if (str[i] == search[k])
            {
                i++;
                k++;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
        write (1, "\n", 2);
    else
        search_and_replace(argv[1], argv[2], argv[3]);
    return (0);

}