#include <stdio.h>
#include <stdint.h>


int main(){
  int n; 
  long long int sum=0, mult=0;

  scanf("%d", &n);
  
  int A[n];

  for(int i=0; i<n; i++){
    scanf("%d", &A[i]);
  }

  for(int i=n-1; i>0; i--){
    sum+=A[i];
    mult+=(sum*A[i-1]);
  }

  printf("%lld", mult);

  return 0;
}
