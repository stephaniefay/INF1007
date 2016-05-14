#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pilha {
	struct elemento *topo;
};
typedef struct pilha Pilha;

struct elemento {
	float info;
	struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento * inverte (Elemento * l);

float pilha_pop (Pilha * p);

void pilha_push (Pilha * p, float n);

Pilha *pilha_cria (void);

Elemento *lst_insere (Elemento *lst, float a);

Elemento *lst_cria(void);

void lst_imprime (Elemento * lst);
