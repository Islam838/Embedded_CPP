#include <iostream>

using namespace std;

void InsertinSort(int* arr, int LastIdx){
    for(int i=1, j; i<=LastIdx; i++){
        j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
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

    InsertinSort(arr, size-1);

    cout << "\nAfter sorting" <<endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << "    ";

}