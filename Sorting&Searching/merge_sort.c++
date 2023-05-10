# include <iostream>
using namespace std;



void merge(int arr[], int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = 0;
    int *temp = new int[end - start + 1];

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= end) {
        temp[k++] = arr[j++];
    }

    for (int p = 0; p < k; p++) {
        arr[start + p] = temp[p];
    }

    delete[] temp;
}


void mergeSort(int arr[],int start, int end){

   
    if (start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    
}


int main(){
    int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}