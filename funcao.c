#include "header.h"

Pilha *pilha_cria (void) {
	Pilha *p = (Pilha * ) malloc (sizeof(Pilha));
	p->topo = NULL;
	return p;
}

void pilha_push (Pilha * p, float n) {
	Elemento * novo = (Elemento *) malloc (sizeof(Elemento));
	novo->info = n;
	novo->prox = p->topo;
	p->topo = novo;
}

float pilha_pop (Pilha * p) {
	Elemento * e;
	float a;
	e = p->topo;
	a = e->info;
	p->topo = e->prox;
	free (e);
	return a;
}

Elemento * inverte (Elemento * l) {
	Pilha * p = pilha_cria();
	while (l->prox != NULL) {
		pilha_push(p, l->info);
		l->prox = l->prox;
	}
	while (p->topo != NULL) {
		l->info = pilha_pop (p);
	}
}

Elemento *lst_insere (Elemento *lst, float a) {
	Elemento * novo = (Elemento*)malloc(sizeof(Elemento));
	if (novo == NULL) exit (1);
	novo->info = a;
	novo->prox = lst;
	return novo;
}

Elemento *lst_cria(void) {
	return NULL;
}

void lst_imprime (Elemento * lst) {
	Elemento * p;
	for (p = lst; p != NULL; p = p->prox)
		printf("Lista = %2f\n", p->info);
}