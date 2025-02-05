 
#include <bits/stdc++.h>
using namespace std;

//Procedimiento
void adios(string nombre){
  cout << "Adiós "<<nombre<<endl;
}

//Funcion
float division (float a, float b){
  return a/b;
}

int factorial(int n) {
   if(n <= 1) {
      return 1;
   } 
   else {
       return (n * factorial(n - 1));
   }
}

int fibonacci(int n){
   if(n<=1){
     return 1;
   }
   else{
     return fibonacci(n-1)+fibonacci(n-2);
   } 
}

int main() {
  float num1, num2, res;
  int fac, fib;

  num1= 5.0;
  num2 =6.0;

  res = division(num1, num2);
  
  cout << res <<endl;
  adios("Xavi");

  //Recursividad
  fac = factorial(5);
  cout << fac<<endl;

  //Fibonacci 
  fib = fibonacci(6);
  cout<<fib<<endl;

  return 0;

}
