#include <iostream>
using namespace std;


// BUBBLE SORT ---------------
void bubbleSort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j+1]<a[j]){
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


// Imprimir el arreglo 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Arreglo 1: ";
    printArray(arr, n);

    bubbleSort(arr, n);
  
    cout << "Arreglo O: ";
    printArray(arr, n);

    return 0;
}
