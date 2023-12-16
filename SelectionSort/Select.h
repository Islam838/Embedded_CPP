#ifndef _SELECT_H_
#define _SELECT_H_

template<typename T>
void ArrayIN(T size, T* ArrToSort) {
    for(int i=0; i<size; i++){
        std::cin >> ArrToSort[i];
    }
}

template<typename T>
void ArrayOUT(T size, T* ArrToSort){
    for(int i=0; i<size; i++){
        std::cout << ArrToSort[i] << "   ";
    }
}

template<typename T>
void swap(T* Idx1, T* Idx2){
    T temp = *Idx1;
    *Idx1 = *Idx2;
    *Idx2 = temp;
}

template<typename T>
void SelectionSort(T size, T* ArrToSort){
    int MinIdx=0;
    for(int i=0; i<size-1; i++){
        MinIdx = i;
        for(int j=i+1; j<size; j++){
            if(ArrToSort[j] < ArrToSort[MinIdx]) {MinIdx = j;} 
        }
        if(MinIdx != i) {swap(&ArrToSort[i],&ArrToSort[MinIdx]);}
    }
}
/*template<typename T>
void swap(T* Idx1, T* Idx2);

template<typename T>
void SelectionSort(T size, T* ArrToSort);

template<typename T>
void ArrayIN(T size, T* ArrToSort);

template<typename T>
void ArrayOUT(T size, T* ArrToSort);
*/
#endif