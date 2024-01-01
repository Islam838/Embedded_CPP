#ifndef _MERGE_H_
#define _MERGE_H_

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

void MergeArr(int* ArrToSort, int LeftIdx, int MidIdx, int RightIdx){
    int FirstArrSize = MidIdx - LeftIdx + 1;
    int SecondArrSize = RightIdx - MidIdx;

    int ArrLeft[FirstArrSize];
    int ArrRight[SecondArrSize];
    for(int i=0; i<FirstArrSize; i++) {ArrLeft[i] = ArrToSort[LeftIdx+i];}
    for(int i=0; i<SecondArrSize; i++) {ArrRight[i] = ArrToSort[MidIdx+1+i];}

    int i=0, j=0, k=LeftIdx;
    while(i<FirstArrSize && j<SecondArrSize){
        if(ArrLeft[i] <= ArrRight[j]){
            ArrToSort[k] = ArrLeft[i];
            i++;
        }
        else{
            ArrToSort[k] = ArrRight[j];
            j++;
        }
        k++;
    }

    while(i<FirstArrSize){
        ArrToSort[k] = ArrLeft[i];
        i++; k++;
    }
    while(j<SecondArrSize){
        ArrToSort[k] = ArrRight[j];
        j++; k++;
    }
}

void MergeSort(int* ArrToSort, int LeftIdx, int RightIdx){
    if(LeftIdx < RightIdx){
    
        int MidIdx = LeftIdx + (RightIdx-LeftIdx)/2;

        MergeSort(ArrToSort, LeftIdx, MidIdx);
        MergeSort(ArrToSort, MidIdx+1, RightIdx);

        MergeArr(ArrToSort, LeftIdx, MidIdx, RightIdx);
    }
}

#endif