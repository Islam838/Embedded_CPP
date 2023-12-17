#include<iostream>
#include<vector>

void ArrayIn(int size){
    std::cout<<"Enter integer elements, Press x to submit elements "<<std::endl;
    std::vector<int> UserInp;
    int element, count=0;
    static int flag=0;

    while(std::cin>>element){
        UserInp.push_back(element);
        count++;
        if(count>size && flag==1){
            throw std::overflow_error("Inputs is greater than size");
        }
        else if(count>size && flag==0){
            flag=1;
            std::cout<<"inputs are more than specified size, 1 try remaining"<<std::endl;
            ArrayIn(size);
        } 
    }

    for(auto element: UserInp)
        std::cout << element << "   ";
}

int main(){
    int size;
    
    std::cout<<"Enter size of values"<<std::endl;
    std::cin>>size;
    
    ArrayIn(size);
}