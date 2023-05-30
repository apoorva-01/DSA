#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> st){
    while (!st.empty()) {
		cout << st.top() <<" ";
		st.pop();
	}
    cout<<endl;
}


int main() {
	stack<int> stack1;
     
	stack1.push(21);
	stack1.push(22);
	stack1.push(24);
	stack1.push(25);
	stack1.pop();
	stack1.pop();

    cout<<"stack1"<<endl;
    display(stack1);

    cout<<"size of stack1 :"<<stack1.size()<<endl;
    cout<<"top of stack1 :"<<stack1.top()<<endl;
    cout<<"stack1.empty() :"<<stack1.empty()<<endl;

    stack<int> stack2;
    stack2.push(6);
	stack2.push(4);

    cout<<"stack2"<<endl;
    display(stack2);

    cout<<"swap stack1 stack2"<<endl;
    stack1.swap(stack2);

    cout<<"stack1"<<endl;
    display(stack1);

    cout<<"stack2"<<endl;
    display(stack2);
    
    

}
