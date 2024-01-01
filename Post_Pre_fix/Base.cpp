#include<iostream>
using namespace std;
class Base
{
public:
    void fun() { cout << "Base:: fun() called\n"; }
    void fun(int i) { cout << "Base:: fun (int i) called\n";}
};
class Derived: public Base
{
public:
    void fun() { cout << "Derived::fun() called\n"; }
};
int main()
{
    Base a;
    a.fun();
    a.fun(5);
    Derived d;
    d.Base::fun();
    d.Base::fun(5);
    return 0;
}