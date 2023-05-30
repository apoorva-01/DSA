#include <iostream>
#include <iterator>
#include <list>
using namespace std;

void dispaly(list<int> g)
{
	// for (auto it = g.begin(); it != g.end(); ++it){
    //     cout << '\t' << *it;
    // }
	for (auto i:g){
            cout << " " << i;
        }
	cout <<endl;
}

int main()
{

	list<int> list1, list2;
	for (int i = 0; i < 10; ++i) {
		list1.push_back(i * 2);
		list2.push_front(i * 3);
	}
	cout << "\nList 1 (list1) is : ";
	dispaly(list1);

	cout << "\nList 2 (list2) is : ";
	dispaly(list2);

	cout << "\nlist1.front() : " << list1.front();
	cout << "\nlist1.back() : " << list1.back();

	cout << "\nlist1.empty() : " << list1.empty(); // return 1 if yes and 0 if no

	cout << "\nlist1.pop_front() : ";
	list1.pop_front();
	dispaly(list1);

	cout << "\nlist2.pop_back() : ";
	list2.pop_back();
	dispaly(list2);

	cout << "\nlist1.size() : "<<list1.size();

	cout << "\nlist1.remove(10) : ";
	list1.remove(10);
	dispaly(list1);

	cout << "\nlist1.insert(list1.begin(),5) : ";
	list1.insert(list1.begin(),5);
	dispaly(list1);

	cout << "\nlist1.reverse() : ";
	list1.reverse();
	dispaly(list1);

	cout << "\nlist2.sort(): ";
	list2.sort();
	dispaly(list2);

	list1.merge(list2);
	cout << "\nlist1.merge(list2) ";
	dispaly(list1);


	return 0;
}
