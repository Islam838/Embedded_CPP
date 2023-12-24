#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
       int l,b,h;
    public:
        Box(){l=0, b=0, h=0;}
        
        Box(int length, int breadth, int height)
        : l(length), b(breadth), h(height){}
        
        void operator=(Box& b){
            this->l = b.l;
            this->b = b.b;
            this->h = b.h;
        }
        
        Box(Box& obj){
            this->l = obj.l;
            this->b = obj.b;
            this->h = obj.h;
        }
         
        int getLength(){return this->l;}
        int getBreadth(){return this->b;}
        int getHeight(){return this->h;}
        
        long long CalculateVolume()
            {return (long long)l*b*h;}
        
        bool operator<(Box& b){
            if(this->l < b.l)
                return true;
            else if(this->b < b.b && this->l == b.l)
                return true;
            else if(this->h < b.h && 
                this->l == b.l && 
                this->b == b.b)   
                return true;
            else
                return false; 
        } 
        
        friend ostream& operator<<(ostream& out,   
                                    Box& B){
            out << B.l << " " << B.b << " "
                << B.h;
            return out;
        }
} ; 

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

/*
6
2 1039 3749 8473
4
3 1456 3836 283
3 729 3749 272
2 4839 283 273
4

1039 3749 8473
33004122803
Greater
Lesser
4839 283 273
373856301
*/