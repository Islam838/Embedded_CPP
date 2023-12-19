#include <iostream>
#include <memory>

int main()
{
    // OLD problem with dangling pointer
    // PROBLEM: ref will point to undefined data!
    int* ptr = new int(10);
    int* ref = ptr;
    delete ptr;

    // SOLUTION: check expired() or lock() to determine if pointer is valid

    // empty definition
    std::shared_ptr<int> sptr;
    std::cout << "after decleration ---->" << sptr.use_count() <<"\n";
    // takes ownership of pointer
    sptr.reset(new int);
    std::cout << "after reset 1 ---->" << sptr.use_count() <<"\n";
    *sptr = 10;
    std::cout << "after assign 1 ---->" << sptr.use_count() <<"\n";

    // get pointer to data without taking ownership
    std::weak_ptr<int> weak1 = sptr;
    std::cout << "after weak 1 ptr ---->" << sptr.use_count() <<"\n";

    std::shared_ptr<int> NewSptr;
    NewSptr = sptr;
    std::cout << "after shared ptr ---->" << sptr.use_count() <<"\n";

    // deletes managed object, acquires new pointer
    sptr.reset(new int);
    std::cout << "after reset 2 ---->" << sptr.use_count() <<"\n";
    *sptr = 5;
    std::cout << "after assign 2 ---->" << sptr.use_count() <<"\n";

    // get pointer to new data without taking ownership
    std::weak_ptr<int> weak2 = sptr;
    std::cout << "after weak 2 ptr ---->" << sptr.use_count() <<"\n";

    std::cout << weak1.lock() << "----->" << *(weak1.lock()) << std::endl;
    std::cout << weak2.lock() << "----->" << *(weak2.lock()) << std::endl;

    // weak1 is expired!
    if(auto tmp = weak1.lock())
        std::cout << "weak1 value is " << *tmp << '\n';
    else
        std::cout << "weak1 is expired\n";
    
    // weak2 points to new data (5)
    if(auto tmp = weak2.lock())
        std::cout << "weak2 value is " << *tmp << '\n';
    else
        std::cout << "weak2 is expired\n";
}