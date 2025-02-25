#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int numberofstring(char *str)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 32 || str[i] == 9)
            k++;
        i++;
    }
    return (k);
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

char    **ft_split(char *str)
{
    char **result;
    int    nbstr;
    int len;

    nbstr = numberofstring(str) + 1;
    len = ft_strlen(str);
    result = malloc(sizeof(char * len + nbstr));
    if (result == NULL)
        return NULL;
    


}

int main(void)
{
	char str[60] = "ANEZKA ISVERY CUTE3<3";
	char c = ' ';
	int i = 0;
    i = numberofstring(str);
    printf("%d", i);
	//char **res = ft_split(str);
/* 	while (res[i] != NULL) {
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res); */
	return (0);
} 