#ifndef SETI_C_
#define SETI_C_
#include "llist.h"
#include "seti.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct seti
{
    No *lhead;
};

Seti *create_seti(No *lhead)
{
    Seti *l = (Seti *)malloc(sizeof(Seti));
    if (l)
    {
        l->lhead = lhead;
        return l;
    }

    return NULL;
}
Seti *intersec(Seti *i, Seti *j)
{
    No *lhead = NULL;
    Seti *itsec = create_seti(lhead);
    for (No *p = i->lhead; p != NULL; p = get_prox(p))
    {
        if (exists(j->lhead, get_info(p)))
        {
            insert_seti(&itsec, get_info(p));
        }
    }
    return itsec;
}
Seti *uniao(Seti *i, Seti *j)
{
    No *lhead = NULL;
    Seti *un = create_seti(lhead);
    for (No *p = i->lhead; p != NULL; p = get_prox(p))
    {
        if (!exists(un->lhead, get_info(p)))
        {
            insert_seti(&un, get_info(p));
        }
    }

    for (No *q = j->lhead; q != NULL; q = get_prox(q))
    {
        if (!exists(un->lhead, get_info(q)))
        {
            insert_seti(&un, get_info(q));
        }
    }

    return un;
}
int insert_seti(Seti **i, int value)
{
    return insert_on_top(&(*i)->lhead, value);
}
int remove_seti(Seti *i, int value)
{
    return remove_item(i->lhead, value);
}
int seti_is_empty(Seti *i)
{
    return llist_is_empty(i->lhead);
}
int are_equal(Seti *i, Seti *j)
{
    No *p = i->lhead;
    No *q = j->lhead;

    while (p != NULL && q != NULL)
    {
        if (get_info(p) != get_info(q))
        {
            return 0;
        }
        q = get_prox(q);
        p = get_prox(p);
    }
    return 1;
}
int seti_size(Seti *i)
{
    return list_size(i->lhead);
}
void print_seti(Seti *i)
{
    print_elements(i->lhead);
}
void clear_seti(Seti *i)
{
    No *lhead = i->lhead;
    clear_list(&lhead);
}

#endif