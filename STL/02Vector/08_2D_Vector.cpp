
#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> vect){
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     for (int j = 0; j < vect[i].size(); j++)
    //     {
    //         cout << vect[i][j] << " ";
    //     }    
    //     cout << endl;
    // }
}

int main()
{
	vector<vector<int>> vec1{{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    cout<<"vect1"<<endl;
    display(vec1);

    vector<vector<int>> vec2( 3 , vector<int> (4, -1)); 
    // rows=3
    // cols=4
    // value=-1
    cout<<"vect2"<<endl;
    display(vec2);

	return 0;
}
