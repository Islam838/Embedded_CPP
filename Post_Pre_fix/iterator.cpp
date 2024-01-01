#include<iostream>
#include<vector>

int main(){
    std::vector<int> container;
    container.push_back(5);
    container.push_back(10);
    for (auto it = container.begin(); it != container.end(); ++it)
    {
      ++(*it);
    }
    for(auto element : container){
        std::cout << element << "    ";
    }
}