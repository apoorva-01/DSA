#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int x=34567;
    string sr= to_string(x);
    cout<<"int to string using to_string(x) "<<sr<<endl;

	string str;
	cout << "Enter the string "<<endl;
	getline(cin, str);

	cout << "The initial string is : ";
	cout << str << endl;

    cout << "string.front() : ";
	cout << str.front() << endl;
    cout << "string.back() : ";
	cout << str.back() << endl;

    // Find position of 'a' using find()
    int pos = str.find("a");

    if (pos != -1) {   // Check if position is -1 or not
        cout<<"position of char 'a' in str is :"<<pos<<endl;
    }
    else{
        cout<<"a Not Found in the string"<<endl;
    }
   
	str.push_back('s');
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	str.pop_back();
	cout << "The string after pop_back operation is : ";
	cout << str << endl;

    cout<<"size of string "<<str.size()<<endl; //or you can use str.length()

    string str2 = "Verma";
    string str3 = str + str2;
    cout<<"str3 "<<str3<<endl;

    // Access
    cout<<str[0]<<endl;
    cout<<str[2]<<endl;
    cout<<str<<endl;
    // cout<<str[-3]; Dont support negative indexing

    str.resize(13);
    cout << "The string after resize operation is : ";
    cout << str << endl;
    cout<<"size of string "<<str.size() << endl;
 
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    str.swap(str3);
    cout<<"After Swapping"<<endl;
    cout << "str "<<str << endl;
    cout << "str3 "<<str3 << endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"After Uppercasing"<<endl;
    cout<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"After lowercasing"<<endl;
    cout<<str<<endl;

    

// ITERATORS ------------DO Later
    // auto it;
    // for (it = str.begin(); it != str.end(); it++){
    //     if(it == str.begin()) *it='G';
    //     cout << *it;
    // }

    // using swap() to swap string content
	return 0;
}
