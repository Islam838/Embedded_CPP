#include<iostream>
#include<vector>

int main(){
    int size,element, sum=0, min, max;
    std::vector<int> UserInp;

    std::cout<<"Enter size of values"<<std::endl;
    std::cin>>size;
    
    std::cout<<"Enter integer elements"<<std::endl;

    for(int i=0; i<size; i++){
        std::cin>>element;
        UserInp.push_back(element);
    }

    for(auto element: UserInp)
        std::cout << element << "   ";
    
    for(auto element: UserInp)
        sum += element;
    std::cout << "\nSum of all elements in the vector = " << sum << std::endl;
    std::cout << "Average of all elements in the vector = " << sum/size << std::endl;

    min = UserInp[0];
    max = UserInp[0];
    for(int i=1; i<size; i++){
        if(UserInp[i] < min) min = UserInp[i];
        if(UserInp[i] > max) max = UserInp[i];
    }
    std::cout << "Minimum element value in the vector is " << min << std::endl;
    std::cout << "Maximum element value in the vector is " << max << std::endl;

    return 0;
}