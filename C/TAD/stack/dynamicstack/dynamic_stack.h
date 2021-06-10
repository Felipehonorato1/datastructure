#ifndef DYNAMIC_STACK_H_
#define DYNAMIC_STACK_H_

typedef struct stack Stack;

Stack *cria_stack();
int stack_push(Stack *s, int value);
int stack_pop(Stack *s, int *value);
int stack_is_empty(Stack *s);
void clear_stack(Stack **s);

#endif