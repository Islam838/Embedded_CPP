// CHARACTER SET EXAMPLE
// CPP program to illustrate
// Implementation of erase() function
#include <iostream>
#include <set>

using namespace std;

template <class T> 
T merge(T a, T b) 
{ 
    T t(a); 
    t.insert(b.begin(), b.end()); 
    return t; 
} 

void input(int* a) 
{ 
  
    for (int i = 0; i < 7; i++) 
        a[i] = i; 
} 
  
void output(int* a) 
{ 
  
    for (int i = 0; i < 7; i++) 
        cout << a[i] << " "; 
  
    cout << endl; 
}



int main()
{   
    // insert and arrange ascendingly
    set<int> set1;
    set1.insert(5);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(3);

    cout << "Set1 content:\n";
    for(auto i=set1.begin(); i!=set1.end(); i++){
        cout << *i << " ";
    }

    cout << endl;

    // -----------------> insert() and arrange descendingly
    set<char, greater<char>> set2;
    set2.insert('c');
    set2.insert('e');
    set2.insert('a');
    set2.insert('d');
    set2.insert('f');
    set2.insert('b');

    cout << "Set2 content:\n";
    for(auto i=set2.begin(); i!=set2.end(); i++){
        cout << *i << " ";
    }

    cout << endl;

    //  -----------------> Get size()
    cout << "set1 size is   " << set1.size()<< "    set2 size is   " << set2.size() << endl;
    
    // -----------------> max_size() --> maximum number of elements a set container can hold.
    cout << "set1 size is   " << set1.max_size()<< "    set2 size is   " << set2.max_size() << endl;

    //  -----------------> empty()
    set<int> set3;
    cout << "set1:   " << set1.empty()<< "    set2:   " << set2.empty()<< "    set3:   " << set3.empty() << endl;

    // -----------------> insertion() using iterator  
    set<int> set4, set5;
    set4.insert(4);
    set4.insert(2);
    set4.insert(3);
    cout << "Set4 content:\n";
    for(auto i=set4.begin(); i!=set4.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    cout << "Set5 content:\n";
    set5.insert(set4.begin(), set4.end());
    for(auto i=set5.begin(); i!=set5.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    // -----------------> Find()
    set<string> set6;
    set6.insert("Islam");
    set6.insert("omar");
    set6.insert("Ahmed");
    set6.insert("Aly");

    cout << "Set6 content:\n";
    for(auto i=set6.begin(); i!=set6.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    auto name = set6.find("omar");
    cout  << *name << endl;

    name = set6.find("Islam");

    for(auto it=name; it!=set6.end(); it++){
        cout << *it << "    ";
    }
    cout << endl;

    auto LastElem = set6.rbegin();
    cout << "End of Set6 is " << *LastElem << endl;
    auto FirstElem = set6.begin();
    cout << "Start of Set6 is " << *FirstElem << endl;
    
    // name = set6.find("aly");
    //  If the element is not found,  
    // then the iterator points to the position just after the last element in the set.

    // -----------------> erase()
    // include <iterator>
    set<char> set7;
    set7.insert('c');
    set7.insert('e');
    set7.insert('a');
    set7.insert('d');
    set7.insert('f');
    set7.insert('b');

    cout << "Set7 content:\n";
    for(auto i=set7.begin(); i!=set7.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    
    cout << "Set7 content without (d):\n";
    set7.erase('d');
    for(auto i=set7.begin(); i!=set7.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    set<char>::iterator it1, it2;
    it1 = set7.begin();
    it1++; it1++;
    it2 = set7.end();
    it2--; it2--;
    cout << *it1 <<"  " << *it2;
    cout << "\nSet7 content without (c-e):\n";
    for(auto i=set7.begin(); i!=set7.end(); i++){
        if(*i != *it1 && *i != *it2 )
            cout << *i << " ";
    }

    set<char> set8;
    set8.insert('c');
    set8.insert('e');
    set8.insert('a');
    set8.insert('d');
    set8.insert('f');
    set8.insert('b');

    cout << "\nSet8 content:\n";
    for(auto i=set8.begin(); i!=set8.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    set<char>::iterator it3,it4;
    it3 = set8.begin();
    it3++;
    it4 = set8.end();
    it4--;
    cout << "Set8 content after using end:\n";
    for(auto i=set8.begin(); i!=it4; i++){
        cout << *i << " ";
    }
    cout << endl;

    cout << *it3 <<" ** " << *it4;
    set8.erase(it3,it4);
    cout << "\nSet8 content after using erase:\n";
    for(auto i=set8.begin(); i!=set8.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    set<int> set9;
    set9.insert(5);
    set9.insert(2);
    set9.insert(1);
    set9.insert(4);
    set9.insert(3);
    cout << "Set9 content after using end:\n";
    for(auto i=set9.begin(); i!=set9.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    set<int>::iterator it5,it6;
    it5 = set9.begin();
    it5++;
    it6 = set9.end();
    it6--; it6--;
    cout << *it5 <<" ** " << *it6;
    set9.erase(it5, it6);
    cout << "\nSet9 content after using end:\n";
    for(auto i=set9.begin(); i!=set9.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    //output 1 4 5

    // -----------------> count()
    cout << set9.count(1) << "    " << set9.count(2) << "    " << set9.count(5) << endl;

    // -----------------> value_comp() & key_comp()
    // returns a copy of the comparison object used by the container
    // It is a function pointer or a function object that takes two arguments
    // of the same type as the container elements, and 
    // returns true if the first argument go before the second in the ordering it defines, 
    // and false otherwise.
    // Two elements of a set are considered equivalent if value_comp returns false reflexively
    set<int> set10;
    set10.insert(5);
    set10.insert(2);
    set10.insert(1);
    set10.insert(4);
    set10.insert(3);

    set<int>::value_compare comp = set10.value_comp();
    set<int>::iterator it7 = set10.begin();
    
    for(auto key : set10){
        if(comp(key, 3)) cout<<key<<"   comes before 3\n"; 
        else if (!comp(key, 3) && !comp(3, key)) cout<<key<<"   equivalent to 3\n";
        else if(!comp(key, 3)) cout<<key<<"   comes after 3\n";
    }
    auto LastElement = set10.rbegin();
    //cout << "Key value bet. " << *it7 << " " << *(++it7) << " is " << comp(*it7, *(++it7));
    //cout << comp(5,5) << "\n"; returns zero
    do{cout << *it7 << " ";} while(comp(*(++it7) ,*LastElement) || it7!=set10.end());

    cout<<"\n";

    set<int>::key_compare comp1 = set10.key_comp();
    set<int>::iterator it8 = set10.begin();
    auto LastElement2 = set10.rbegin();
    do{cout << *it8<<" ";}while(comp(*(it8++), *LastElement2) || it8!=set10.end());

    // -----------------> upper and lower bound
    set<int> set11;
    set11.insert(9);
    set11.insert(6);
    set11.insert(1);
    set11.insert(7);
    set11.insert(3);
    set11.insert(10);

    cout<<"\n3 is in set11 --> lowerbound = (key)   " << *(set11.lower_bound(3));
    cout<<"\n5 is not in set11 --> lowerbound = (next key)  " << *(set11.lower_bound(5));
    cout<<"\n7 is in set11 --> upperbound = (key)   " << *(set11.upper_bound(7));
    cout<<"\n12 is not in set11 --> upperbound = (.end())   " << *(--set11.upper_bound(12));

    // -----------------> equal_range
    /*returns an iterator of pairs. 
    The pair refers to the range that includes all the elements in the container which have 
    a key equivalent to k. 
    1)  Since set contains unique elements, the lower bound will be the element itself and 
    the upper bound will point to the next element after key k. 
    2)  If there are no elements matching key K, the range returned is of length 0 with both iterators 
    pointing to the first element which is greater than k according to the container’s 
    internal comparison object (key_comp). 
    3)  If the key exceeds the maximum element in the set container, 
    it returns an iterator pointing to the last element in the set container.*/
    set<int> set12; 
  
    set12.insert(8); 
    set12.insert(6); 
    set12.insert(1); 
    set12.insert(4); 
    set12.insert(3);
    set12.insert(9); 
  
    // prints the set elements 
    cout << "The set elements are: "; 
    for (auto it = set12.begin(); it != set12.end(); it++) 
        cout << *it << " "; 
  
    // Function returns lower bound and upper bound 
    auto it = set12.equal_range(2); 
    cout << "\nThe lower bound of 2 is " << *it.first; 
    cout << "\nThe upper bound of 2 is " << *it.second; 
  
    // Function returns the last element 
    it = set12.equal_range(8); 
    cout << "\nThe lower bound of 8 is " << *it.first; 
    cout << "\nThe upper bound of 8 is " << *it.second; 
  
    // Function returns the range where the 
    // element greater than 0 lies 
    it = set12.equal_range(0); 
    cout << "\nThe lower bound of 0 is " << *it.first; 
    cout << "\nThe upper bound of 0 is " << *it.second;

    // -----------------> equal_range
    /*used to insert a new element into the set container, 
    only if the element to be inserted is unique and does not already exists in the set.
    emplace() vs insert
    When we use insert, we create an object and then insert it into the multiset. With emplace(), 
    the object is constructed in-place.*/
    int sum = 0; 
  
    // set declaration 
    set<int> myset; 
    myset.emplace(7); 
    myset.emplace(9); 
    myset.emplace(4); 
    myset.emplace(6); 
    myset.emplace(2); 
    myset.emplace(5); 
    myset.emplace(3); 
  
    // iterator declaration 
    set<int>::iterator it9; 
  
    // finding sum of elements 
    while (!myset.empty()) { 
        it9 = myset.begin(); 
        sum = sum + (*it9); 
        myset.erase(it9); 
    } 
  
    // printing the sum 
    cout << "\n" << sum<< endl;
    
    // use pairs with insert

    set<pair<char, int>> ms; 
      
    // using emplace() to insert pair in-place 
    ms.emplace('a', 24); 
      
    // Below line would not compile 
    // ms.insert('b', 25);     
      
    // using insert() to insert pair in-place 
    ms.insert(make_pair('b', 25));     
      
    // printing the set 
    for (auto it = ms.begin(); it != ms.end(); ++it) 
        cout << " " << (*it).first << " " 
             << (*it).second << endl;


    // -----------------> emplace_hint()
    /*A position is passed in the parameter of the function which acts as a 
    hint from where the searching operation starts before inserting the element at its current position. */
    set<int> set13; 
    auto it10 = set13.emplace_hint(set13.begin(), 1); 
    for (auto it = set13.begin(); it != set13.end(); it++) 
        cout << *it << " ";
    cout <<endl; 
    // stores the position of 2's insertion 
    it10 = set13.emplace_hint(it10, 2); 
    for (auto it = set13.begin(); it != set13.end(); it++) 
        cout << *it << " ";
    cout <<endl;  
    // fast step as it directly 
    // starts the search step from 
    // position where 3 was last inserted 
    set13.emplace_hint(it10, 3); 
    for (auto it = set13.begin(); it != set13.end(); it++) 
        cout << *it << " ";
    cout <<endl;  
    // this is a slower step as 
    // it starts checking from the 
    // position where 3 was inserted 
    // but 0 is to be inserted before 1 
    set13.emplace_hint(it10, 0); 
  
    // prints the set elements 
    for (auto it = set13.begin(); it != set13.end(); it++) 
        cout << *it << " "; 


    // -----------------> swap()
    /*used to exchange the contents of two sets but the sets must be of same type, although sizes may differ.*/
    set<int> set14{ 1, 2, 3, 4 }; 
    set<int> set15{ 5, 6, 7, 8 }; 
  
    // Swap elements of sets 
    set14.swap(set15); 
  
    // Print the first set 
    cout << "\nset1 = "; 
    for (auto it = set14.begin(); 
         it != set14.end(); ++it) 
        cout << ' ' << *it; 
  
    // Print the second set 
    cout << endl 
         << "set2 = "; 
    for (auto it = set15.begin(); 
         it != set15.end(); ++it) 
        cout << ' ' << *it;
    cout << endl;
    // -----------------> operator=()
    /*The first version takes reference of an set as an argument and copies it to an set.
      .operator=(set &set2)
      The second version performs a move assignment i.e it moves the content of an set to another set.
      .operator=(set &&set2) 
      The third version assigns contents of an initializer list to an set.
       .operator=(initializer list)*/

    set<int> sample1, sample2, sample3, sample4, sample5; 

    // List initialization 
    sample1 = { 1, 2, 3, 4, 5 }; 
    sample2 = { 6, 7, 8, 1 }; 

    // Merge both sets and 
    // move the result to sample3 
    sample3 = merge(sample1, sample2); 

    // copy assignment 
    sample1 = sample3; 

    // Print the sets 
    for (auto it = sample1.begin(); it != sample1.end(); ++it) { 
        cout << *it << " "; 
    } 

    cout << endl; 

    for (auto it = sample2.begin(); it != sample2.end(); ++it) { 
        cout << *it << " "; 
    } 

    cout << endl; 

    for (auto it = sample3.begin(); it != sample3.end(); ++it) { 
        cout << *it << " "; 
    } 

    cout << endl;

    sample4.operator=(sample2);

    for (auto it = sample4.begin(); it != sample4.end(); ++it) { 
        cout << *it << " "; 
    }

    // -----------------> get_allocator()
    /*returns the copy of the allocator object associated with the set.*/
    // declare set 
    set<int> mset; 
  
    // declare int pointer 
    int* arr; 
  
    cout << "\nsize of int pointer is: "
         << sizeof(arr) << endl; 
  
    // use allocator of set to allocate array arr. 
    arr = mset.get_allocator() 
              .allocate(7); 
  
    // insert elements(numbers from 0-6) 
    // in the array 
    input(arr); 
  
    // produce output from the array 
    output(arr); 
  
    // deallocate the memory allotted previously 
    mset.get_allocator() 
        .deallocate(arr, 7); 


	return 0;
}