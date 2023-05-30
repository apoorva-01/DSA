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

// IMPT
int peek(Node* ptr,int pos){
   
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}
 
int main(){
    Node* top = NULL;
    cout << "Stack has been created successfully" << endl;
    cout << "pushing 3, 2, 1, 5, 6, 8, 7" << endl;
    push(top,3);
    push(top,2);
    push(top,1);
    push(top,5);
    push(top,6);
    push(top,8);
    push(top,7);
    cout<<"peek at 1 position: "<<peek(top,1)<<endl;
    cout<<"peek at 2 position: "<<peek(top,2)<<endl;
    cout<<"peek at 3 position: "<<peek(top,3)<<endl;
    cout<<"peek at 4 position: "<<peek(top,4)<<endl;
    cout<<"peek at 5 position: "<<peek(top,5)<<endl;
    cout<<"peek at 6 position: "<<peek(top,6)<<endl;
    cout<<"peek at 7 position: "<<peek(top,7)<<endl;
    cout<<"peek at 8 position: "<<peek(top,8)<<endl;
    return 0;
}