#include <iostream>
#include <vector>
#include <algorithm> //for reverse()
using namespace std;

void display(vector<int> vect)
{
    cout << "[";
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout <<"]"<< endl;
}

int main()
{
    vector<int> vect1{1,2,3,4,5,6,7};
    cout << "vect1"<<endl;
    display(vect1);

    // push_back() & pop_back()
    cout << "size"<<" "<<vect1.size()<<endl;
    vect1.pop_back();
    vect1.pop_back();
    vect1.pop_back();
    cout << "After 3 times popping"<<endl;
    display(vect1);
    vect1.push_back(9);
    vect1.push_back(8);
    cout << "After pusing 9 & 8"<<endl;
    display(vect1);

    // ------------------- inserts & erase ----------------------
    vect1.insert(vect1.begin(), 5);
    vect1.insert(vect1.begin()+3, 88);
    cout << "After insert(): " <<endl;
    display(vect1);
    vect1.erase(vect1.begin()+1);
    cout << "After erase(): " <<endl;
    display(vect1);

    reverse(vect1.begin(),vect1.end());
    cout << "vect1 after reversing"<<endl;
    display(vect1);

    // clear
    vect1.clear();
    cout << "\nVector size after clear: " << vect1.size()<<endl;
    cout << "vect1"<<endl;
    display(vect1);

    //swap
    vector<int> vect2;
    vect2.assign(5, 10);
    cout << "vect2"<<endl;
    display(vect2);


    vect1.swap(vect2);
    cout << "After Swapping"<<endl;
    cout << "vect1"<<endl;
    display(vect1);
    cout << "vect2"<<endl;
    display(vect2);


    vector<int>v2=vect1; //Copy of vec1 in O(n)
    v2.push_back(4);
    cout << "v2"<<endl;
    display(v2);
    cout << "vect1"<<endl;
    display(vect1);
    
    return 0;
}
