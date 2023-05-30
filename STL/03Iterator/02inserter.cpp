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
    vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << "v" << endl;
    display(v);
    vector<int> newElements = {7, 8, 9, 10};
    cout << "newElements" << endl;
    display(newElements);

    // IMPT
    //appending newElements elements at the end of v.
    copy(newElements.begin(), newElements.end(), inserter(v, v.end())); 

    cout << "v" << endl;
    for (int i : v)
        cout << i << ' ';

    return 0;
}
