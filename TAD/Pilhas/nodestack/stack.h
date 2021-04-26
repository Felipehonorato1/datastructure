#ifndef STACK_H_
#define STACK_H_

typedef struct stack Stack;
typedef struct no No;

No *cria_no(int info);
int push(Stack *s, int value);
int pop(Stack *s, int *value);
int is_empty(Stack *s);
void clear_stack(Stack *s);

#endif