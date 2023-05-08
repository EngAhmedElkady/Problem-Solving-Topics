# include <iostream>
using namespace std;


void insertion_sort(int arr [],int size){

    for(int i=0;i<size;i++){

        int number=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>number){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=number;

    }
}


int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}