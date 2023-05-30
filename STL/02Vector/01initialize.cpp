#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vect)
{
    for (int x : vect)
    {
        cout << x << " ";
    }
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     cout << vect[i] << " ";
    // }
    cout << endl;
}

int main()
{
    // Create an empty vector
    vector<int> vect1;
    vect1.push_back(10);
    vect1.push_back(20);
    vect1.push_back(30);
    cout << "vect1"<<endl;
    display(vect1);

    // Create a vector of size i with all values as 10.
    int i = 3;
    vector<int> vect2(i, 10);
    cout << "vect2"<<endl;
    display(vect2);

    // initialize a vector like an array.
    vector<int> vect3{10, 20, 30};
    cout << "vect3"<<endl;
    display(vect3);

    // initialize a vector from array
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect4(arr, arr + n);
    cout << "vect4"<<endl;
    display(vect4);

    // initialize a vector from vector
    vector<int> vect6(vect3.begin(), vect3.end());
    cout << "vect6"<<endl;
    display(vect6);


    vector<int> vect7(5);// 5 is size of vector
    cout << "vect7"<<endl;
    display(vect7);

    return 0;
}
