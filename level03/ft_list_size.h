
#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif