//Operator Overloading

#include<iostream>
#include<string>
using namespace std;

class Complex{
    public:
    int a,b;
    void input(string s1){
        int i=0, v1=0;
        while(s1[i] != '+'){
            if(s1[i]==' ' || s1[i]=='i')
                i++;
            else{
                v1 = v1*10 + s1[i]-'0';
                ++i;
            }
        }
        int v2=0;
        while(i<s1.length())
        {
            if(s1[i]==' ' || s1[i]=='+' || s1[i]=='i')
                i++;
            else{
                v2 = v2*10 + s1[i]-'0';
                i++;
            }
        }
        a=v1;
        b=v2;
    }
};
Complex operator+(Complex &obj1, Complex &obj2){
    Complex result;
    result.a = obj1.a + obj2.a;
    result.b = obj1.b + obj2.b;
    return result;
}

ostream& operator<< (ostream& out, Complex& obj){
    out << obj.a << "+i" << obj.b;
    return out;
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}