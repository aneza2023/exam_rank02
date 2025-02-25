
#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while(begin_list != NULL)
    {
        i++;
        begin_list = begin_list->next;
    }
    return(i);
}

/* int main(void)
{
    t_list *a;
    t_list *b;
    t_list *c;
    int i;

    a = malloc(sizeof(t_list));

    b = malloc(sizeof(t_list));

    c = malloc(sizeof(t_list));
    a->next = b;
    b->next = c;
    c->next = NULL;
    i = ft_list_size(a);
    printf("%d",i);
    return (0);
} */

