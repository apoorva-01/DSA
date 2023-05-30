#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++){
         for(int j=i;j<matrix[0].size();j++){
             swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(auto& row:matrix){
        reverse(row.begin(), row.end());
    }
    return;
}


void display(vector<vector<int>> vect)
{
	for (vector<int> vect1D : vect)
	{
		for (int x : vect1D)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}

int main()
{
	vector<vector<int>> m = {
		{1, 2, 8},
		{3, 7, 5},
		{6, 9, 4},
	};
	rotate(m);
    display(m);

	return 0;
}
