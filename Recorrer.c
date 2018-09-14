#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int dato;
	struct Nodo *siguiente;
}Nodo;

Nodo *inicio=NULL;
Nodo *final=NULL;

void recorrer(Nodo *inicio){
	if(inicio!=NULL){
		printf("\n%d",inicio->dato);
		recorrer(inicio->siguiente);
	}
}
void agregar(Nodo *nodo){
	nodo->siguiente=NULL;
	if(inicio==NULL){
		inicio=nodo;
		final=nodo;
	}
	else{
		final->siguiente=nodo;
		final=nodo;
	}
}
int main(int argc, char *argv[]) {
	int a,b,c,d,e;
	Nodo *prim=malloc(sizeof(Nodo));
	Nodo *seg=malloc(sizeof(Nodo));
	Nodo *ter=malloc(sizeof(Nodo));
	Nodo *cua=malloc(sizeof(Nodo));
	Nodo *qui=malloc(sizeof(Nodo));
	//Nodo *i=prim;
	
	printf("Ingrese cinco números enteros para recorrerlos en una lista del primero a último\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	prim->dato=a;
	seg->dato=b;
	ter->dato=c;
	cua->dato=d;
	qui->dato=e;
	
	agregar(prim);
	agregar(seg);
	agregar(ter);
	agregar(cua);
	agregar(qui);
	
	/*while(i!=NULL){
	printf("%i\n",i->dato);
	i=i->siguiente;
	}
	*/
	recorrer(prim);
	//printf("\n%d",f);
	return 0;
}

