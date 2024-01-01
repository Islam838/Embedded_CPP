#include <iostream> 
class Tree
{
public:
    static void leaf();
};

 static void Tree::leaf (){
    std::cout<<"Save Trees";
}

int main()
{
    
Tree::leaf ();
return 0;
}