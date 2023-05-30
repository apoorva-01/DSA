#include <iostream>
#include <iterator>
#include <set>
using namespace std;

void display(set<int> s){
    for(auto i:s){
        cout<<i<<" ";
    }
    // for (auto itr = s.begin(); itr != s.end(); itr++) {
	// 	cout << *itr << " ";
	// }
    cout<<endl;
}

int main()
{
	set<int> s1;
	s1.insert(40);// O(logn)
	s1.insert(30);
	s1.insert(60); 
	s1.insert(20);
	s1.insert(50);

	// only one 50 will be added to the set
	s1.insert(50);
	s1.insert(10);

	cout << "The set s1 is : \n";
    display(s1);
	cout << "s1 size  : "<<s1.size()<<endl;
	

	// Assigning the elements from s1 to s2
	set<int> s2(s1.begin(), s1.end());

	// Print all elements of the set s2
	cout << "The set s2 after assign from s1 is : \n";
	display(s2);

	// remove all elements up to 30 in s2
	cout << "s2 after removal of elements less than 30 "<<endl;
	s2.erase(s2.begin(), s2.find(30)); // s2.find(30) is also O(logn)
	display(s2);

	// remove element with value 50 in s2
	int num;
	num = s2.erase(50);
	cout << "s2.erase(50) : ";
	cout << num << " removed\n";
	display(s2);

	// lower bound and upper bound for set s1
	cout << "s1.lower_bound(40) : \n"<< *s1.lower_bound(40) << endl;
	cout << "s1.upper_bound(40) : \n"<< *s1.upper_bound(40) << endl;

	// lower bound and upper bound for set s2
	cout << "s2.lower_bound(40) :\n"<< *s2.lower_bound(40) << endl;
	cout << "s2.upper_bound(40) :\n"<< *s2.upper_bound(40) << endl;

	return 0;
}
