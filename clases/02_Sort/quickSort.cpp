
#include <bits/stdc++.h>
using namespace std;


// Imprimir el arreglo 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//particion
int particion(int a[], int low, int high){
    int lim=low-1, pivote=a[high];
    for(int i=low; i<=high-1;i++){
        if(a[i]<=pivote){
            lim++;
            swap(a[i], a[lim]);
        }
    }

    swap(a[lim+1], a[high]);
    return lim+1; 

}

//quick sort
void quickSort(int a[], int low, int high){
    int indPivote;
    if(low<high){
        indPivote = particion(a, low, high);

        quickSort(a, low, indPivote-1);
        quickSort(a, indPivote+1, high);

    }

}


void ourQuickSort(int arr[], int low, int high){
    int m=high+1, pivote, a=low, b=high;
    int arr2[m];
    pivote = arr[high];
    
    if(low<high){
        for(int i=low; i<=high; i++){
            if(arr[i]<=pivote){
                arr2[a]=arr[i];
                a++;
            }
            else{
                arr2[b]=arr[i];
                b--;
            }
        }
        
        //Copiar arr2 a arr
        for(int i=low; i<=high;i++){
            arr[i]=arr2[i];
        }

        ourQuickSort(arr, low, a-1);
        ourQuickSort(arr, a+1, high);
    }
}




int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
