#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

int partition(int arr[] , int l , int r ){
    int pivot = arr[r];
    int i=l-1;
    for (int j=l; j<r ; j++ ){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;

}

void qs(int arr[] , int l , int r ){

    if (l>=r) return ;

    int p=partition(arr,l,r);
    qs(arr,l,p-1);
    qs(arr,p+1,r);
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


     qs(arr , 0 , size-1);
     cout<<endl <<endl << "sorted : ";


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";


    return 0;
}
