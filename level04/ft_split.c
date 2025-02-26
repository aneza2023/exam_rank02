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
    return (k + 1);
}


int ft_strlenmod(char *argv)
{
    int i;

    i = 0;
    while(argv[i] != '\0' && (argv[i] != 32 && argv[i] != 9))
    {
        i++;
    }
    return(i);
}

char *stringmake(char *str)
{
    int i;
    char *string;

    i = ft_strlenmod(str);
    string = malloc(sizeof(char) * i + 1);
    if (string == NULL)
        return (NULL);
    i = 0;    
    while (str[i] != '\0' && (str[i] != 32 && str[i] != 9))
    {
        string[i] = str[i];
        i++;
    }
    string[i] = '\0';
    return (string);
}

char    **ft_split(char *str)
{
    char **result;
    int    nbstr;
    int len;
    int i;

    nbstr = numberofstring(str);
    result = malloc(sizeof(char *) * nbstr + 1);
    if (result == NULL)
        return NULL;
 //   findend(str);
    i = 0;
    while (i < nbstr)
    {
        result[i] = stringmake(&str[len]);
        while (str[len] != '\0' && (str[len] != 32 && str[len] != 9))
            len++;
        len++;
        i++;
    }
    result[i] = '\0';
    return (result);
}

/* int main(void)
{
	char str[60] = "seerl ljfalrg lajlrg";
	int i = 0;
//    printf("%d", i);
	char **res = ft_split(str);
	while (res[i] != NULL) {
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}  */