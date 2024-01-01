#include<iostream>
using namespace std;

int Partioning (int* arr, int low, int high){
    int pivot = arr[high];
    int left = low-1;

    for(int i=low; i<=high; i++){
        if(arr[i] < pivot){
            left++;
            swap(arr[i], arr[left]);
        }
    }
    swap(arr[high], arr[left+1]);
    return(left+1);
}

void QuickSort (int* arr, int low, int high){
    if(low<high){
        int pivot = Partioning(arr, low, high);
        QuickSort(arr, low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];

    for(int i=0; i<size; i++)
        cin >> arr[i];
    
    cout << "Before sorting" <<endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << "    ";

    QuickSort(arr, 0, size-1);

    cout << "\nAfter sorting" <<endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << "    ";

}