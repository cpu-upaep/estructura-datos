#include <bits/stdc++.h>
using namespace std;
//Programa para generar los números de la serie de Fibonacci usando recursividad
int fibonacci(int n){
   if(n<=1){
     return 1;
   }
   else{
     return fibonacci(n-1)+fibonacci(n-2);
   } 
}

int main() {
  int num, fib;
  
  //Fibonacci 
  cin>>num;
  fib = fibonacci(num);
  cout<<fib<<endl;

  return 0;

}
