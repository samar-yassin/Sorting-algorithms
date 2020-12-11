#include <iostream>
using namespace std;



void insertionSort(int arr[],int n){

    int key, j;
    for(int i =1 ; i <n ; i++){
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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


    insertionSort(arr , size);
    cout<<endl <<endl << "sorted : ";


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";

}
