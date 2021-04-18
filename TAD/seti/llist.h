#ifndef LLIST_H_
#define LLIST_H_

typedef struct no No;

No *get_prox(No *node);
int get_info(No *node);
No *create_no(int info);
int insert_on_top(No **lhead, int v);
void print_elements(No *lhead);
int exists(No *lhead, int value);
int insert_end(No *lhead, int v);
int list_size(No *lhead);
int llist_is_empty(No *lhead);
void clear_list(No **lhead);
int remove_item(No *lhead, int info);
int insert_sorted(No **lhead, int info);

#endif