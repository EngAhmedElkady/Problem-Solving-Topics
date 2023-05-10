#include <iostream>
using namespace std;

int steps = 0;
void selection_sort(int arr[],int size){


    for(int i=0;i<size;i++){

        int min_index=i;

        for(int j=i+1;j<size;j++){
            steps++;

            if (arr[j]< arr[min_index])
                min_index=j;
        }

        if(min_index!=i){
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }

    }
}




int main(){

    // int arr[] = {5, 2, 4, 6, 1, 3};
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"steps: "<<steps<<endl;
    return 0;
}