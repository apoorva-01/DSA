#include <iostream>
#include <queue>

using namespace std;

void display(queue<int> g)
{
	while (!g.empty()) {
		cout << g.front()<<" ";
		g.pop();
	} 
	cout << endl;
}

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << "The queue q is : ";
	display(q);

	cout << "q.size() : " << q.size()<<endl;
	cout << "q.front() : " << q.front()<<endl;
	cout << "q.back() : " << q.back()<<endl;

	cout << "q.pop() : "<<endl;
	q.pop();
	display(q);

	return 0;
}
