#include<iostream>
#include<memory>
using namespace std;


class Square{
    int M_side;
    public:
        Square(int side) : M_side(side){}
        int area(){ return M_side*M_side;}
};

int main()
{
    unique_ptr<Square> s1(new Square(10));
    cout<< "s1 area = " <<s1->area();

    unique_ptr<Square> s2(new Square(20));
    cout<< "\ns2 area = " <<s2->area();
    s2 = move(s1);
    cout<< "\ns2 area = " <<s2->area();
    cout<< "\ns1 area = " <<s1->area();

    return 0;
}
