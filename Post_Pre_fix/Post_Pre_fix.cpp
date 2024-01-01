#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x=5;
    y = ++x * x--;
    z = ++y + --y;
    cout<<x << " "<<y << " "<<z << endl;

    x=10;
    y = x++ * x++;
    y = y + --x * --x;
    cout<<x << " "<<y << " "<<z;
}