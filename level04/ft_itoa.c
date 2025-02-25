#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//maybe issue> if 045

int	numb_int(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
    char *result;
    int i;
    int k;

    i = 0;
    k = numb_int(nbr);
 //  printf("%d", numb_int(nbr));
    if (nbr == 0)
        k = 1;
    result = malloc(sizeof(char) * (k + 1));
    if (result == NULL)
        return (NULL);
    if (nbr < 0)
        result[i] = '-';
    result[k] = '\0';
    k--;
    if (nbr == 0)
        result[k] = '0';
    while (nbr != 0)
    {
        if (nbr < 0)
            nbr = nbr * (-1);
        result[k] = nbr % 10 + '0';
        nbr = nbr / 10;
        k--;
    }
    return (result);
}

int main(void)
{
	int n = 45;
	printf("%s", ft_itoa(n));
	return (0);
}