#include <stdio.h>
#include <stdlib.h>


struct nodo{//DEBO PONERLE NOMBRE AL INICIO
    int dato;
    struct nodo* sig;
};

typedef struct nodo nodo;
typedef nodo* lista;

void inicializarLista(lista*);
void eliminarTodo(lista*);
void agregarInicio(lista*, int );
void agregarFinal(lista*, int );
int tamanio(lista);//no es necesario usar un puntero
void imprimirLista(lista);
void eliminarMultiplos(lista *, int);


int main(){

    int n;
    lista l;
    inicializarLista(&l);

        printf("ingrese un numero: ");
        scanf("%d", &n);
        while (n!=0){ //hago el ingreso de los tados
            agregarFinal(&l, n);
            printf("ingrese un numero: ");
            scanf("%d", &n);
        }

    printf("Lista original: ");
    imprimirLista(l);
    printf("Tamanio lista original: %d ",tamanio(l));
    printf("ingrese un numero para borrar sus multiplos: ");
    scanf("%d", &n);
    eliminarMultiplos(&l,n);
    

   // eliminarTodo(&l);

    printf("Lista modificada: ");
    imprimirLista(l);
    printf("Tamanio lista modificada: %d ",tamanio(l));

    printf("Liberando estructuras.. ");
    eliminarTodo(&l);
    
  
    return 0;
}

void inicializarLista(lista* l){
    (*l)=NULL;
}

void eliminarTodo(lista* l){
    lista aux;//no perder el inicio de la lista para borrar

    while((*l)!=NULL){
        aux=(*l);
        (*l)=(*l)->sig;//siempre voy borrando el 1ro de la lista
        free(aux);

    }

}

void agregarInicio(lista* l, int dato){
    lista act;
    act=(lista)malloc(sizeof(nodo));//reservo mem
    act->dato=dato;
    act->sig=(*l);
    (*l)=act;

}

void agregarFinal(lista* l, int dato){
    lista act, aux=(*l);
    act=(lista)malloc(sizeof(nodo));
    act->dato=dato;
    act->sig=NULL;

    if((*l)==NULL){
        (*l)=act;
    }
    else{
    while(aux->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig=act;
    }

}

int tamanio(lista l){
    lista aux=l;
    int cont=0;
    while(aux!=NULL){
        aux=aux->sig;
        cont++;
    }

    return cont;
}

void imprimirLista(lista l){
    lista aux=l;
        while(aux!=NULL){
            printf("%d, ",aux->dato);
            aux=aux->sig;
    }

}
void eliminarMultiplos(lista *l, int n){
    lista act=(*l), aux, ant;//recorro con auxiliar para no perder el 1er puntero
    while(act!=NULL){
        if(act->dato % n ==0){//si hay q 
            aux=act;
            if(act==(*l))//no ol
                (*l)=(*l)->sig;
            else
                ant->sig=act->sig;
            
            aux=act->sig;
            free(act);
            act=aux;
        }
        else{
            ant=act;
            act=act->sig;//sinó solo avanzo
        }
    }
}
