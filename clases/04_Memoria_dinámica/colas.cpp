#include <iostream>
using namespace std;

// Colas 

struct nodo{
    int dato;
    struct nodo *next = NULL;
};

struct nodo *crear(int d){
    struct nodo *datito = new nodo();
    datito -> dato = d;
    datito -> next =NULL;
    return datito;
}

void ingresar_datito(struct nodo *datito, struct nodo *&inicio, struct nodo *&final){
    if(inicio==NULL){
        inicio = datito;
        final = inicio;
    }
    else{
        final ->next = datito;
        final = datito;
    }
}

void eliminar_dato(struct nodo *&inicio, struct nodo *&final){
    struct nodo *aux;
    if(inicio == final ){
        aux=final;
        final= inicio= NULL;
    }
    else{
        aux=inicio;
        inicio = aux->next;
    }
    delete aux;
}

void recorrer(struct nodo*inicio){
    while(inicio!=NULL){
        cout<<inicio->dato<<" ";
        inicio = inicio->next;
    }
    cout<<endl;

}


int main(){
    struct nodo *inicio = NULL;
    struct nodo *final = NULL;
    struct nodo *datito;

    datito = crear(85);
    ingresar_datito(datito, inicio, final);

    datito = crear(25);
    ingresar_datito(datito, inicio, final);

    datito = crear(43);
    ingresar_datito(datito, inicio, final);

    datito = crear(32);
    ingresar_datito(datito, inicio, final);

    recorrer(inicio);

    eliminar_dato(inicio, final);
    eliminar_dato(inicio, final);
    
    recorrer(inicio);

    eliminar_dato(inicio, final);

    recorrer(inicio);

    return 0;

}
