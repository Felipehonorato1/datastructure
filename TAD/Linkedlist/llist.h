#ifndef LLIST_H_
#define LLIST_H_

typedef struct lista Lista;
typedef struct no No;

Lista *cria_lista();
int insert_on_top(Lista *l, int v);
void print_elements(Lista *l);
int exists(Lista *l, int value);
int insert_end(Lista *l, int v);
int list_size(Lista *l);
int llist_is_empty(Lista *l);
void clear_list(Lista *l);
int remove_item(Lista *l, int info);
int insert_sorted(Lista *l, int info);

#endif