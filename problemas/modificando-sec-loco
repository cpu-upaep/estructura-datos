// Source: https://usaco.guide/general/io
//Authors: Emi y Fer

#include <iostream>
using namespace std;

void insertionsort(unsigned int arr[], int p1, int p2){
    int j, n;
    
    for(int i=p1; i<=p2; i++){
        j=i;

        while((j>0)&&(arr[j-1]>arr[j])){
            swap(arr[j-1], arr[j]);
            j=j-1;
        }
    }
}

int main() {
    int n,p1,p2,cont=0,pa2=0;
    bool siet=false, cincos=false;
    cin>>n;
    unsigned int arr1[n], arr2[n];
    
    //leer el arreglo y guardar las posiciones de los 5s
    for(int i=0; i<n; i++){
        cin>>arr1[i];
        if(arr1[i]==5 && cont==1){
            cont+=1;
            p2=i;
            cincos= true;
        }

        if(arr1[i]==5 && cont==0){
            cont+=1;
            p1=i;
        }

    }

    if(cincos==true){
        for(int i=p1-1; i>=0; i--){
            arr2[pa2]=arr1[i];
            pa2++;
        }

        for(int i=p1; i<=p2; i++){
            arr2[pa2]=arr1[i];
            if(arr1[i]==7 && siet==false){
                arr2[pa2]=0;
                siet=true;
            }
            pa2++;
        }

        if(siet==false){
            insertionsort(arr2, p1, p2-1);
        }
        

        for(int i=n-1; i>=p2+1; i--){
            arr2[pa2]=arr1[i];
            pa2++;
        }

        //Imprimir el arreglo final
        for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
        }
    }

    

    //cout<<endl<<endl<<endl;
    //Imprimir el arreglo final
    else{
        for(int i=0; i<n; i++){
            cout<<arr1[i]<<" ";
        }
    }

    return 0;
}
