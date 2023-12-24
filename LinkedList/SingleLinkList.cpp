#include<iostream>

class Node{
    public:
    double data;
    Node* next;
};

void swapNode(double& x, double& y){
        double temp = x;
        x = y;
        y = temp;
}

int main(){
    Node* Head;
    Node* one;
    Node* two;
    int i=0;

    one = new Node;
    two = new Node;

    one->data = 1;
    two->data = 2;

    one->next = two;
    two->next = NULL;

    // Traverse
    std::cout << "Traverse" << std::endl;
    Head = one;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }

    //Insert at beginning
    std::cout << "Access Beginning" << std::endl;
    Node* PreOne;
    PreOne = new Node;
    Head = PreOne;
    PreOne->next = one;
    PreOne->data = 0.5;
    i=0;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }

    //Insert at middle
    std::cout << "Access Middle" << std::endl;
    Head = PreOne;
    Node* OneTwo;
    OneTwo = new Node;
    one->next = OneTwo;
    OneTwo->data = 1.5;
    OneTwo->next = two;
    i=0;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }

    //Insert at End
    std::cout << "Access End" << std::endl;
    Head = PreOne;
    Node* PostTwo;
    PostTwo = new Node;
    two->next = PostTwo;
    PostTwo->data = 2.5;
    PostTwo->next = NULL;
    i=0;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }

    //Delete an element
    std::cout << "Delete OneTwo" << std::endl;
    Head = PreOne;
    one->next = two;
    i=0;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }

    //Search the list
    std::cout << "search for 2 and 2.5" << std::endl;
    Head = PreOne;
    double key = 2;
    i=0;
    while(Head != NULL){
        if (Head->data == 2) std::cout << "2 is found in element["<<i<<"]"  << "\n";
        if (Head->data == 2.5) std::cout << "2.5 is found in element["<<i<<"]"  << "\n";
        Head = Head->next;
        ++i;
    }

    PreOne->data = 3;
    one->data = 1;
    two->data = 6;
    PostTwo->data = 4; 
    //Sort the LL
    std::cout << "Before Sorting" << std::endl;
    Head = PreOne;
    i=0;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "   ";
        Head = Head->next;
        ++i;
    }
    Node* NxPos;
    NxPos = new Node;
    Node* current;
    current = new Node;
    Head = PreOne;    
    while(Head != NULL){
        current = Head;
        NxPos = current->next;
        while (NxPos != NULL){
            if(NxPos->data <= current->data){
                swapNode(NxPos->data, current->data);
                current = NxPos;
                NxPos = current->next;
            }
            else{
                NxPos = NxPos->next;
            }
        }
        Head = current->next;
    }
    std::cout << "\nAfter Sorting" << std::endl;
    i=0;
    Head = PreOne;
    while(Head != NULL){
        std::cout << "element ["<<i<<"] = " << Head->data << "\n";
        Head = Head->next;
        ++i;
    }
    
}
