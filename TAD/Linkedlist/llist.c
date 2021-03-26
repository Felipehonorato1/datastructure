#ifndef LLIST_C_
#define LLIST_C_

struct no
{
    int info;
    struct no *prox;
};

No *create_no(int info);
int ll_is_empty(No *lhead);
int ll_insert_first(No **lhead, int info);
int ll_insert_last(No **lhead, int info);
int ll_exists(No **lhead, int info);
void ll_print(No **lhead, char *message);
void ll_clear(No **lhead);
int ll_remove(No **lhead, int info);
int ll_insert_sorted(No **lhead, int info);

#endif