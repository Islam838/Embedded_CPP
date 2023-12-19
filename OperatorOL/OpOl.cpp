#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imj;
    public:
        Complex(){};
        Complex(int real, int imj) : real(real), imj(imj){}
        Complex operator+(const Complex &obj){
            Complex res;
            cout << real  << "  " << imj << endl;
            res.real = obj.real + real;
            res.imj = obj.imj + imj;
            return res;
        }
        
        void print(){
            cout << real << " + " << imj << "i" << endl;
        }

    operator float() const
    {
        return float(real) / float(imj);
    }
};
 

int main(){
    Complex c1(10, 5);
    Complex c2(20, 15);
    Complex c3 = c2 +(c1);
    c3.print();
    float val = c1;
    cout << val << "\n";
}