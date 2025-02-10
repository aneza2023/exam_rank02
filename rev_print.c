#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0')
    {
        if(argv[i] == 32)
            break;
        i++;
    }
//    printf("i je: %d", i);
    return(i);
}

int rev_print(char *str)
{
    int i;

    if (str == NULL){
        write (1, "\n", 2);
        return (0);
    }
    i = ft_strlen(str);
    while (i >= 0)
    {
        write (1, &str[i], 1);
        i--;
    }
    write (1, "\n", 2);
    return (0);
}

int main(void)
{
    char *str;

    str = "hellou";
    rev_print(str);
    return(0);
}