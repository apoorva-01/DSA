#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vect)
{
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vect1{1,2,3,4,5,6,7};
    cout << "vect1"<<endl;
    display(vect1);

    cout << "Iterating using begin & end: ";
    for (auto i = vect1.begin(); i != vect1.end(); ++i){
        cout << *i << " ";
    }
    // front & back give reference (value)
    // begin & end give iterator (pointer)
    cout << "\nfront() : vect1.front() = " << vect1.front();
    cout << "\nback() : vect1.back() = " << vect1.back()<<endl;

    cout << "2nd Element"<<" "<<vect1[1]<<endl;
    cout << "2nd Element using .at"<<" "<<vect1.at(1)<<endl;
    
    cout << "original size"<<" "<<vect1.size()<<endl;
    vect1.resize(4);
    cout << "size after resize"<<" "<<vect1.size()<<endl;
    cout << "vect1"<<endl;
    display(vect1);
    
    cout << "Capacity : " << vect1.capacity()<<endl;
    cout << "Max_Size : " << vect1.max_size()<<endl;


    return 0;
}
