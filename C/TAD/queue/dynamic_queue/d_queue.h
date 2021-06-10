#ifndef D_QUEUE_H_
#define D_QUEUE_H_

typedef struct queue Queue;

Queue *create_queue();
int insert_queue(Queue *q, int value);
int remove_queue(Queue *q);
int queue_size(Queue *q);

void print_queue(Queue *q);
void clear_queue(Queue **q);

#endif