#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

/* int main(void)
{
	int fd = 1;
	char i[50] = "jkoblizek naomi";
    ft_putstr(i);
	return (0);
} */
