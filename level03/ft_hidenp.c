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

int hidden(char *str, char *sec)
{
    int i;
    int k;
    int j;
    
    i = 0;
    k = 0;
    j = ft_strlen(str);
 //   printf("%d", j);
    while (sec[i] != '\0' && k < j)
    {
        if (sec[i] == str[k]){
            k++;
        }
        i++;
    }
    if (k == j)
        write (1, "1\n", 2);
    else
        write (1, "0\n", 2);  
 //   printf("%d", k);      
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
        write (1, "\n", 1);
    else
       hidden(argv[1], argv[2]);
    return(0);
}