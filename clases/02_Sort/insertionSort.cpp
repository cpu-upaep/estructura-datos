
void inSort(int arr[], int n){
    int j;
    for(int i=1; i<n; i++){
        j=i;

        while((j>0) && (arr[j-1]>arr[j])){
            swap(arr[j], arr[j-1]);
            j = j-1;
        }
    }
}


void print_array(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[5] = { 3, 1, 8, 7, 2};
    int n=5;

    print_array(a, 5);
    inSort(a, 5);
    print_array(a,5);

}
