#include<iostream>
#include "Merge.h"

int main(){
    //int size;
    std::cout<<"Enter size of the array & Elements to be sorted"<<std::endl;
    //std::cin >> size;

    int ArrToSort[] = {5,2,7,3,8,1,6,3,0,4};

    //ArrayIN(size, ArrToSort);

    //MergeSort(ArrToSort, 0, size-1);

    MergeSort(ArrToSort, 0, 10-1);

    ArrayOUT(10, ArrToSort);

    return 0;
}