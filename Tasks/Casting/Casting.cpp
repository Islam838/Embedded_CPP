#include<iostream>

float FltConvertValue(int IntVar){
    float FltVal;
    FltVal = static_cast<float> (IntVar);
    return FltVal;
}

void* PtrConvertValue(int IntVar){
    void* pointer = reinterpret_cast<void*>(IntVar);
    return pointer;
}

int main(){
    int IntVar;
    std::cout << "Enter integer value" << std::endl;
    std::cin >> IntVar;

    std::cout << "Static cast to float -->" << FltConvertValue(IntVar) <<"\n";
    std::cout << "Address of object pointed by the pointer -->" << PtrConvertValue(IntVar);

    const volatile int value = 10;
    std::cout << "\nConstant integer value = " << value << "\n";
    
    const_cast<int&>(value) = 456;
    std::cout << "Constant integer value now = " << value << "\n";

    int* ChangeVal = const_cast<int*> (&value);
    *ChangeVal = 20;  
    std::cout << "Constant integer value now = " << value << "\n";
}