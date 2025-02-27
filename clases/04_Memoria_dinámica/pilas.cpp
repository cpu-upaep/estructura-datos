#include <iostream>
using namespace std;
//Pilas con structs genericos: NODOS
struct nodo{
    int dato;
    struct nodo *next = NULL;
};

struct nodo *crear(int d){
    struct nodo *nuevo = new nodo();
    nuevo -> dato =d;
    nuevo -> next = NULL;
    return nuevo;
}

//Importante ponerle & al *pila 
void agregar(struct nodo *datito, struct nodo *&pila){
    if(pila==NULL){
        pila = datito;
    }
    else{
        datito -> next = pila;
        pila = datito;
    }
}

//Importante ponerle & al *pila 
void borrar(struct nodo *&pila){
    if(pila==NULL){
        cout<<"Pila vacía"<<endl;
    }
    else{
        struct nodo *aux = pila;
        pila = pila ->next;
        delete aux;
    }
}

void recorrer(struct nodo*pila){
    while(pila!=NULL){
        cout<<pila->dato<<" ";
        pila = pila->next;
    }
    cout<<endl;
}



int main(){
    struct nodo *pila= NULL;
    struct nodo *datito;
    int dato;

    

    datito = crear(9);
    agregar(datito, pila);

    datito = crear(10);
    agregar(datito, pila);

    datito = crear(6);
    agregar(datito, pila);

    datito = crear(3);
    agregar(datito, pila);

    datito = crear(1);
    agregar(datito, pila);

    recorrer(pila);

    borrar(pila);
    recorrer(pila);
    
    borrar(pila);
    borrar(pila);

    recorrer(pila);

    return 0;

}
