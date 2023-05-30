#include <bits/stdc++.h>
using namespace std;

// 1) push() which adds an element to the top of stack. 
// 2) pop() which removes an element from top of stack. 
// 3) findMiddle() which will return middle element of the stack. 
// 4) deleteMiddle() which will delete the middle element. 

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
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
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
 


int findMiddle(Node*& top){
    Node* s = top;
    Node* f = top;
    while(f->next!=NULL && f->next->next!=NULL ){
      s=s->next;
      f=f->next->next;
    }
    return s->data; 
};

void deleteMiddle(Node*& top){
    Node* s = newNode(0) ;
    Node* f = s ;
    s -> next = top ;
    f -> next = top ;
    // Find the middle of the linked list : Tortoise Method 
    while( f->next && f->next->next ){
        s = s -> next ;
        f = f -> next -> next ;
    }
    
    // Delete a node in a Linked list 
    s -> next = s -> next -> next ;
    return;
};
 
int main(){
    Node* top = NULL;
    cout << "Stack has been created successfully" << endl;
    cout << "pushing 3, 2,7, 1, 5" << endl;
    push(top,3);
    push(top,2);
    push(top,7);
    push(top,1);
    push(top,5);
    cout << "is Empty: " << isEmpty(top) << endl;
    cout << "is Full: " << isFull(top) << endl;
    display(top);
    cout<<"Middle eleemt is "<<findMiddle(top)<<endl;
    deleteMiddle(top);
    display(top);
    return 0;
}
