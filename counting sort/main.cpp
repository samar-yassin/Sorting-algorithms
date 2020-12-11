#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

void countSort(int arr[]  , int len){
    int output[len];
    int count[256];

    memset(count,0,sizeof(count));

    for(int i=0; i<len ; i++) ++count[arr[i]];

    for(int i =1;i<256;i++) count[i]+=count[i-1];

    for(int i =0 ; i<len ; i++){
        output[count[arr[i]]-1]=arr[i];
        --count[arr[i]];
    }

    for(int i =0 ; i<len ; i++) arr[i]=output[i];


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


    countSort(arr , size);
    cout<<endl <<endl << "sorted : ";


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";


    return 0;
}
