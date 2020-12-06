#include <iostream>
using namespace std;

void mergeHalves (int *array , int leftBegin , int rightEnd , int middle){
    int temp[20];
    int right= middle + 1;
    int index = leftBegin;
    int left =leftBegin;

    while (left<=middle && right <= rightEnd){
        if(array[left]<=array[right])
        {temp[index]=array[left];
         left++;
        }
        else{
            temp[index]=array[right];
            right++;
        }
        index++;
    }



    while(left<=middle){
        temp[index]=array[left];
        index++;
        left++;
    }
    while(right <= rightEnd){
        temp[index]=array[right];
        index++;
        right++;
    }
    for (int i = leftBegin; i < index; i++)  {
        array[i] = temp[i];
    }


}

void mergeSort(int *array , int leftStart , int rightEnd) {
    if (leftStart < rightEnd) {
            int middle = (leftStart + rightEnd) / 2;

            mergeSort(array, leftStart, middle);
            mergeSort(array, middle + 1, rightEnd);
            mergeHalves(array, leftStart, rightEnd, middle);

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


    mergeSort(arr , 0 , size-1);
    cout<<endl <<endl << "sorted : ";


    for(int i =0 ; i <size ; i++)
        cout << arr[i] << " ";


    return 0;
}
