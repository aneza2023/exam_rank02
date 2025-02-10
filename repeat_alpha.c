#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//not working
int repeat_alpha(char *str)
{
    int i;
    int k;
    int j;
    int count;
    int repeat;

    i = 0;
    k = 65;
    j = 97;
    count = 1;
    while (str[i] != '\0')
    {
        repeat = count;
        if (str[i] == k || str[i] == j)
        {
            while (repeat > 0){
                write (1, &str[i], 1);
                repeat--;
            }
            
        }
        i++;
        j++;
        k++;
        count++;
    }
    return (0);
}

int main(void)
{
    char *str;

    str = "adel";
    repeat_alpha(str);
    return (0);
}