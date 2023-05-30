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
	flist1.assign({ 1, 2, 3 });

	cout << "The elements of first forward list are : ";
	display(flist1);
	flist1.push_front(7);
	flist1.push_front(8);
	flist1.push_front(9);
	cout << "After 3 push_front : ";
	display(flist1);
	cout << "After pop_front : ";
	flist1.pop_front();
	display(flist1);

	cout << "insert_after: ";
	flist1.insert_after(flist1.begin(), 44);
	display(flist1);
	flist1.insert_after(flist1.begin(), {69,96});
	display(flist1);

	flist1.erase_after(flist1.begin()++);
	cout << "erase_after: ";
	display(flist1);
	flist1.erase_after(next(flist1.begin(),3));
	//we can not do flist1.begin()+3 as forward_list is not continues
	cout << "erase_after: ";
	display(flist1);

	cout << "remove() ";
	flist1.remove(3);
	display(flist1);

	cout << "remove_if() ";
	flist1.remove_if([](int x) { return x > 20; });
	display(flist1);

	flist1.reverse();
	cout << "reverse()";
	display(flist1);

	flist1.clear();
	cout << "clear()";
	display(flist1);


	return 0;
}
