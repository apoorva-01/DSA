#include <forward_list>
#include <iostream>
using namespace std;

void display(forward_list<int> f){
    for(int x:f){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
	forward_list<int> flist1;
	forward_list<int> flist2;
	forward_list<int> flist3;
	flist1.assign({ 1, 2, 3 });
	
	flist2.assign(5, 10); // 5 elements with value 10

	flist3.assign(flist1.begin(), flist1.end());

	cout << "The elements of first forward list are : ";
	display(flist1);

	cout << "The elements of second forward list are : ";
	display(flist2);
	
	cout << "The elements of third forward list are : ";
	display(flist3);

	return 0;
}
