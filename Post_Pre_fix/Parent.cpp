#include<iostream>
using namespace std;
class Parent{
public:
    void log() { cout<<" In Parent"; }
};
class Child: public Parent {
public:
    virtual void log() { cout<<"In Child"; }
};
int main(void) {
Parent *Pp = new Child; 
Pp->log();
Parent &Pr = *Pp;
Pr.log();
return 0;
}