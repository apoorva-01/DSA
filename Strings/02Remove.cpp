#include <bits/stdc++.h> 
using namespace std;

int main()
{
	string str="Hello My Name is Apoorva Verma";

	cout << "The initial string is : ";
	cout << str << endl;

    str.erase(2,4); //erase(index, length) will delete the specified number (length) of characters after the specified position.
    cout << "After using erase(2, 4): " << str<<endl;
    
    
    str.erase(str.begin() + 2); //erase(iterator index) will delete the specific character at the specified iterator position. 
    cout << "After using str.erase(str.begin() + 2): " << str<<endl;

    str.erase(str.begin() + 2, str.begin() + 5); //erase(iterator begin, iterator end) will delete specific characters, starting from the iterator begin position before the iterator end position.
    cout << "After using erase(str.begin() + 2, str.begin() + 5) " << str<<endl;


    str.erase(2); //erase(position) will delete all the characters after the specified position
    cout << "After using erase(2): " << str<<endl;
    
    str.erase(); //erase() will erase the complete string.
    cout << "After using erase(): " << str<<endl;

	return 0;
}
