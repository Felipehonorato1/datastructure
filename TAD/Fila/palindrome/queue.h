#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct node Node;
typedef struct queue Queue;

// First in first out.

Node *create_node(char value);
Queue *create_queue();
int insert_element(Queue *q, char value);
int remove_element(Queue **q, char *value);
int is_empty(Queue *q);
int queue_size(Queue *q);
void clear_queue(Queue *q);
void print_queue(Queue *q);

#endif