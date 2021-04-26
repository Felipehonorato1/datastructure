#ifndef STACK_H_
#define STACK_H_

typedef struct no No;
typedef struct stack Stack;

No *cria_no(int value);

int convert(int value);

Stack *cria_stack();
int stack_push(Stack *s, int value);
int stack_pop(Stack *s, int *value);

int stack_size(Stack *s);
void print_stack(Stack *s);
void clear_stack(Stack *s);

#endif