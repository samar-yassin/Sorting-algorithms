#include <iostream>
using namespace std;


void heapify(int arr[], int n , int i){
    int l =2*i+1;
    int r = 2*i+2;
    int max =i;

    if(l<n&&arr[l]>arr[max])max=l;

    if(r<n&&arr[r]>arr[max])max=r;

    if(max!=i){
        swap(arr[max],arr[i]);
        heapify(arr,n,max);
    }
}

void buildHeap(int arr[] , int n){
    for (int i = (n/2)-1 ; i >= 0; i--) {
        heapify(arr, n , i);
    }
}

void heapSort(int arr[],int n){
    buildHeap(arr,n);

    for(int i=n-1 ; i>=0 ; i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }


}




int main() {

    cout<<"what's the size of the array ? ";
    int size;
    cin >> size;
    int arr[size];
    cout<<"enter them  : ";


    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";


    heapSort(arr , size);
    cout<<endl <<endl << "sorted : ";


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";

    return 0;

}
