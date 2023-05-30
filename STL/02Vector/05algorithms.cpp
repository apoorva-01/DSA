#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;

void display(vector<int> vect)
{
    cout << "[";
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int arr[] = {10, 20, 5, 23, 5, 42, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    cout << "Vector is: ";
    display(vect);

    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());

    cout << "\nVector after sorting is: ";
    display(vect);

    // Sorting the Vector in Descending order
    sort(vect.begin(), vect.end(), greater<int>());
    cout << "\nVector after sorting in Descending order is: ";
    display(vect);

    // Reversing the Vector (descending to ascending , ascending to descending)
    reverse(vect.begin(), vect.end());
    cout << "\nVector after reversing is: ";
    display(vect);

    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());

    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    cout << "Occurrences of 5 in vector : "<<endl;
    cout << count(vect.begin(), vect.end(), 5);

    if (find(vect.begin(), vect.end(), 42) != vect.end())
    {
        cout << "\nElement found";
    }
    else
    {
        cout << "\nElement not found";
    }

    return 0;
}
