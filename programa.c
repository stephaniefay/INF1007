#include "header.h"

int main ( ) {
	
	Elemento *lst;
	lst = lst_cria();
	lst = lst_insere(lst,1.);
	lst = lst_insere(lst,3.);
	lst = lst_insere(lst,5.);
	lst = lst_insere(lst,7.);
	lst = lst_insere(lst,15);
	lst = lst_insere(lst,23);
	lst = lst_insere(lst,89);
	lst_imprime (lst);
	puts ("----------------------");
	inverte (lst);
	lst_imprime (lst);

	return 0;
}