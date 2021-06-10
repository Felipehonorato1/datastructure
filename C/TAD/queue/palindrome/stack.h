#ifndef STACK_H_
#define STACK_H_

typedef struct stack Stack;
typedef struct no No;

Stack *cria_stack();
No *cria_no(char info);
int push(Stack *s, char value);
int pop(Stack *s, char *value);
int stack_is_empty(Stack *s);
void clear_stack(Stack *s);
void print_stack(Stack *s);

#endif