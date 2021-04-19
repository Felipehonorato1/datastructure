#ifndef LINKEDPILHA_H_
#define LINKEDPILHA_H_

typedef struct pilha Pilha;
typedef struct no No;

Pilha *cria_pilha();
int push_pilha(Pilha *l, int info);
int pop_pilha(Pilha *l);
int pilha_vazia(Pilha *l);
void libera_pilha(Pilha *l);

No *get_prox(No *p);
int get_info(No *p);

#endif