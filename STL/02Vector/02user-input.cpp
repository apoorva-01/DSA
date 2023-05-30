#include <bits/stdc++.h>
using namespace std;

void display(vector<int> vect)
{
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout << endl;
}

void displayVecorofVectors(vector<vector<int>> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout<<vect[i][j] << " ";
        }
        cout<<endl;
    }
    cout << endl;
}

int main()
{

    // User input vector of vectors
    int z;
    cout << "Enter Size for vector of vectors";
    cin >> z;
    vector<vector<int>> res;
    for (int i = 0; i < z; i++)
    {
        int s; // size of inner vector
        cout << "Enter Size of inner vector";
        cin >> s;
        int element;
        vector<int> vec;
        for (int j = 0; j < s; j++)
        {
            cin >> element;
            vec.push_back(element);
        }
        res.push_back(vec);
    }
    displayVecorofVectors(res);

    return 0;
}