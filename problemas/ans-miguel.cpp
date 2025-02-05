#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string cadena;
    cin >> cadena;
    // Para obtener el tamaño del string
    int longitud = cadena.size();
    int m=0, i=0, g=0, u=0, e=0, l=0;

    for(int j=0; j<longitud; j++){
        char letra = cadena[j];

        if (letra == 'm') m++;
        if (letra == 'i') i++;
        if (letra == 'g') g++;
        if (letra == 'u') u++;
        if (letra == 'e') e++;
        if (letra == 'l') l++;
    }

  int forms = m;
  if(i<forms){
    forms=i;
  }
  if(g<forms){
    forms=g;
  }
  if(u<forms){
    forms=u;
  }
  if(e<forms){
    forms=e;
  }
  if(l<forms){
    forms=l;
  }

  cout << forms;
}
