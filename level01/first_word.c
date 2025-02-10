#include <unistd.h>
#include <stdio.h>

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
    return(i);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2){
        write(1, "\n", 2);
        return (0);
    }
    else{
        if (ft_strlen(argv[1]) < 2){
            write(1, "\n", 2);
            return (0);
        }
        write(1, argv[1], ft_strlen(argv[1]));
        write(1, "\n", 2);
    }
    return (1);
}