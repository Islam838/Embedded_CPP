#include<iostream>
#include "Select.h"
using namespace std;

int main(){
    int size;
    int* ArrToSort;
    
    cout<<"Enter size of the array & Elements to be sorted"<<endl;
    cin >> size;

    ArrToSort = (int*)malloc(size * sizeof(int));

    ArrayIN(size, ArrToSort);

    SelectionSort(size, ArrToSort);

    ArrayOUT(size, ArrToSort);

    return 0;
}