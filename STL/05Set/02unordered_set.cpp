#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;

void display(unordered_set<int> s){
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
	unordered_set<int> s1;
	s1.insert(40);// O(1)
	s1.insert(30);
	s1.insert(60); 
	s1.insert(20);
	s1.insert(50);

	// only one 50 will be added to the unordered_set
	s1.insert(50);
	s1.insert(10);

	cout << "The unordered_set s1 is : \n";
    display(s1);
	cout << "s1 size  : "<<s1.size()<<endl;
	

	// assigning the elements from s1 to s2
	unordered_set<int> s2(s1.begin(), s1.end());

	// print all elements of the unordered_set s2
	cout << "The unordered_set s2 after assign from s1 is : \n";
	display(s2);

	// remove all elements up to 30 in s2
	cout << "s2 after removal of elements less than 30 "<<endl;
	s2.erase(s2.begin(), s2.find(30)); // s2.find(30) is also O(1)
	display(s2);

	// remove element with value 50 in s2
	int num;
	num = s2.erase(50);
	cout << "s2.erase(50) : ";
	cout << num << " removed\n";
	display(s2);

	return 0;
}
