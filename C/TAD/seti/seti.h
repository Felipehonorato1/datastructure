#ifndef SETI_H_
#define SETI_H_
#include "llist.h"

typedef struct seti Seti;

Seti *create_seti(No *lhead);
Seti *intersec(Seti *i, Seti *j);
Seti *uniao(Seti *i, Seti *j);
int insert_seti(Seti **i, int value);
int remove_seti(Seti *i, int value);
int seti_is_empty(Seti *i);
int are_equal(Seti *i, Seti *j);
int seti_size(Seti *i);
void print_seti(Seti *i);
void clear_seti(Seti *i);

#endif