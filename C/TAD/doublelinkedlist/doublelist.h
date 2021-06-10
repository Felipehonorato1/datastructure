#ifndef DOUBLELIST_H_
#define DOUBLELIST_H_

typedef struct no No;

No *create_no(int info);

int insert_top(No **lhead, int info);
int insert_end(No *lhead, int info);
int insert_midle(No *lhead, int where, int info);

int remove_top(No **lhead);
int remove_end(No *lhead);
int remove_midle(No *lhead, int info);

void clear_list(No **lhead);
void print_list(No *lhead);

int list_size(No *lhead);
int is_empty(No *lhead);
int exists(No *lhead, int info);

#endif