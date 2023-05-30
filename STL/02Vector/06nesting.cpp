#include <iostream>
#include <vector>
using namespace std;

void display(vector<pair<int,int>> vect)
{
    cout << "[";
    for (pair<int,int> val:vect)
    {
        cout << "{"<<val.first << ","<<val.second<<"}";
    }
    // for (int i=0;i<vect.size();i++)
    // {
    //     cout << "{"<<vect[i].first << ","<<vect[i].second<<"}";
    // }
    cout <<"]"<< endl;
}

int main()
{
    // Vector of pairs
    vector<pair<int,int>> v={{1,2},{2,3},{4,5}};
    display(v);

    return 0;
}
