#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node * next;
};

void display(Node *top)
{
    while (top != NULL)
    {
        cout<<top->data<<" ";
        top = top->next; 
    }
    cout<<endl;
};
 
int isEmpty(Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
};
 
int isFull(Node* top){
    Node* p =new Node;
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Node* push(Node* &top, int x){
    // Insertion at start linked list ---O(1)
    if(isFull(top)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        Node* n = new Node;
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
};
 
int pop(Node*& top){
     // Deletion at start linked list ---O(1)
    if(isEmpty(top)){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        Node* n = (top);
        top = top->next;
        int x = n->data;
        free(n);
        return x; 
    }
};
 
int main(){
    Node* top = NULL;
    cout << "Stack has been created successfully" << endl;
    cout << "pushing 3, 2, 1, 5" << endl;
    push(top,3);
    push(top,2);
    push(top,1);
    push(top,5);
    cout << "is Empty: " << isEmpty(top) << endl;
    cout << "is Full: " << isFull(top) << endl;
    display(top);
    cout << "After popping: "<<pop(top)<<endl;
    display(top);
    return 0;
}
