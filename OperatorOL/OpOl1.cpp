// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
        int value;
   public:
        Count() : value(5) {}
        void operator ++ () {
            cout<<"Prefix add\n";
            ++value;
        }
        void operator ++ (int) {
            cout<<"Postfix add\n";
            ++value;
        }
        Count operator -- () {
            cout<<"Prefix sub\n";
            Count temp; 
            temp.value= --value;
            return temp;
        }
        void operator -- (int) {
            cout<<"Postfix sub\n";
            --value;
        }
        void display() {
            cout << "Count: " << value << endl;
        }
};

int main() {
    Count count1;

    ++count1;
    count1.display();
    count1++;
    count1.display();
    count1--;
    count1.display();

    Count res;
    res = --count1;
    res.display();


    return 0;
}