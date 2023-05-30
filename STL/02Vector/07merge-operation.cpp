#include <iostream>
#include <algorithm> // for merge operations
#include <vector>    // for vector
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
    vector<int> v1 = {1, 3, 4, 5, 20, 30};
    vector<int> v2 = {1, 5, 6, 7, 25, 30};

    vector<int> v3(10);
    vector<int> v4(10);
   

    auto it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout<<"Union"<<endl;
    display(v3);

    auto it1 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
    cout<<"Intersection"<<endl;
    display(v4);


    vector<int> v5(12);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
    cout<<"Merge"<<endl;
    display(v5);

    vector<int> v6 = {1, 3, 4, 5, 6, 20, 25, 30};
    // Using include() to check if v6 contains v1
    includes(v6.begin(), v6.end(), v1.begin(), v1.end()) ? cout << "v6 includes v1" : cout << "v6 does'nt include v1";

    return 0;
}
