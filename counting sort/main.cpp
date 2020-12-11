#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

int getMax(int arr[],int len){
    int max=arr[0];
    for(int i=0; i<len ; i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;

}

void countSort(int arr[]  , int len){
    int max= getMax(arr,len);
    int output[len];
    int count[max+1];

    memset(count,0,sizeof(count));

    for(int i=0; i<len ; i++) ++count[arr[i]];

    for(int i =1;i<max+1;i++) count[i]+=count[i-1];

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
