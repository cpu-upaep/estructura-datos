// Source: https://ide.usaco.guide/OKUYYAzbGP_1rnkUkFi
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> pila;
    string cadena;
    cin>>cadena;
    bool ban1=false, ban2=false;

    for(int i=0; i<cadena.size(); i++){
        if(cadena[i]=='('){
            pila.push('(');
            ban1=true;
        }
        else if(cadena[i]==')'&&ban1==true){
            pila.pop(); 
        }
        else{
            ban2=true;
        }
    }

    if(pila.empty()==true&&ban2==false){
        cout<<"Balanceada wui"<<endl;
    }
    else{
        cout<<"No está balanceada"<<endl;
    }


}
