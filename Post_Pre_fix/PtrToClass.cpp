#include <iostream>
using namespace std;

class BaseClass {
public:
	int var_base;
	void display(){
		cout << "BASE FN: "
			<< " variable var_base: " << var_base << endl;}
};

class DerivedClass : public BaseClass {
public:
	int var_derived;
	void display(){
		cout << "DERIVED FN"
			<< " variable var_base: " << var_base << endl;
		cout << "Derived "
			<< " class variable var_derived: "
			<< var_derived << endl;}
};

int main()
{
	BaseClass* base_class_pointer;
    BaseClass B;
	DerivedClass obj_derived;

    

	// Pointing to derived class
	base_class_pointer = &obj_derived;
	base_class_pointer->var_base = 34;

	// base_class_pointer->var_derived = 98;
	// output: error: ‘class BaseClass’ has no member named
	// ‘var_derived’

	// Calling base class member function
	base_class_pointer->display();

	base_class_pointer->var_base = 3400;
	base_class_pointer->display();

	DerivedClass* derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->var_base = 9448;
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->display();

	return 0;
}
