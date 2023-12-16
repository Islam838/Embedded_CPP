#include<iostream>
#include "Merge.h"

int main(){
    int size;
    std::cout<<"Enter size of the array & Elements to be sorted"<<std::endl;
    std::cin >> size;

    int ArrToSort[size];

    ArrayIN(size, ArrToSort);

    MergeSort(ArrToSort, 0, size-1);

    ArrayOUT(size, ArrToSort);

    return 0;
}