#include<iostream>
#include<memory>
using namespace std;


class Square{
    int M_side;
    public:
        Square(int side) : M_side(side){}
        int area(){ return (M_side*M_side);}
};

int main()
{
    shared_ptr<Square> s1(new Square(10));
    cout<< "s1 area = " <<s1->area();
    cout << "\nS1 count ----------->" << s1.use_count() << endl;

    cout<< "\nassignment OP" <<endl;

    shared_ptr<Square> s2(new Square(30));
    cout << "S2 count ----------->" << s2.use_count() << endl;
    cout<< "s2 area = " <<s2->area();
    s2 = s1;
    cout << "\n\nS1 count ----------->" << s1.use_count();
    cout << "\nS2 count ----------->" << s2.use_count() << endl;
    cout<< "\ns2 area = " <<s2->area();
    cout<< "\ns1 area = " <<s1->area();

    cout<< "\n\nMove" <<endl;

    shared_ptr<Square> s3(new Square(20));
    cout << "\nS3 count ----------->" << s3.use_count();
    cout<< "\ns3 area = " <<s3->area();
    s3 = move(s1);
    cout << "\n\nS1 count ----------->" << s1.use_count() << endl;
    cout << "S3 count ----------->" << s3.use_count() << endl;
    cout<< "\ns3 area = " <<s3->area();
    cout<< "\ns1 area will crash the program\n";

    cout << "\nS1 count ----------->" << s1.use_count() ;
    cout << "\nS2 count ----------->" << s2.use_count() ;
    cout << "\nS3 count ----------->" << s3.use_count() ;

    shared_ptr<Square> s4(s3);
    cout<< "\ns4 area = " <<s4->area();


    return 0;
}
