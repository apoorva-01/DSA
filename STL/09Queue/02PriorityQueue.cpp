#include <iostream>
#include <queue>
using namespace std;

void display(priority_queue<int> q)
{
	while (!q.empty()) {
		cout << " " << q.top();
		q.pop();
	}
	cout << '\n';
}

int main()
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(30);
	pq.push(20);
	pq.push(5);
	pq.push(1);

	cout << "The priority queue pq is : ";
	display(pq);

	cout << "pq.size() : " << pq.size()<<endl;
	cout << "pq.top() : " << pq.top()<<endl;

	cout << "pq.pop() : "<<endl;
	pq.pop();
	display(pq);

	return 0;
}
