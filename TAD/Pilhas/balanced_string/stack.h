#ifndef STACK_H_
#define STACK_H_

typedef struct no No;

No *cria_no(char info);
int push(No **lhead, char value);
int pop(No **lhead, char *value);
int is_empty(No *lhead);
void clear_stack(No **lhead);
int stack_size(No *lhead);
void print_stack(No *lhead);

int check_balanced(char str[]);

#endif