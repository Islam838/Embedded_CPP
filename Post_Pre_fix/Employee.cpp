#include<iostream>
using namespace std;
class Employee{
private:
    int salary = 10;
protected:
    int age= 35;
public:
    int id = 1;
    int getSalary() { return salary; }
};
class HRPersonal: private Employee { 
public:
    int getId(){return id;}
};
class Manager: public HRPersonal { 
    void printId() { cout<< id; }
};
int main()
{
Manager M1;
M1.printId();
return 0;
}