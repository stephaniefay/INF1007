#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

int * somavetores3d (int * u, int * v){
	int * p;
	p = (int *)malloc(3*sizeof(int));

	p[0]=u[0]+v[0];
	p[1]=u[1]+v[1];
	p[2]=u[2]+v[2];

	return p;
}
