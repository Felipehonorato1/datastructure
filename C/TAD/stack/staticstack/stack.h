#ifndef STACK_H_
#define STACK_H_

typedef struct stack Stack;
Stack *cria_stack();
int stack_is_empty(Stack *s);
int stack_push(Stack *s, int value);
int stack_pop(Stack *s, int *info);
void clear_stack(Stack **s);

#endif