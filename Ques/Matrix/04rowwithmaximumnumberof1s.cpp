#include <bits/stdc++.h>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
	vector<int> res;
	int row = 0;
	int max1s = 0;
	for (int i = 0; i < mat.size(); i++)
	{
		if (max1s < count(mat[i].begin(), mat[i].end(), 1))
		{
			row = i;
			max1s=count(mat[i].begin(), mat[i].end(), 1);
		}
	}
	res.push_back(row);
	res.push_back(max1s);
	return res;
}

int main()
{
	vector<vector<int>> vec1{{0, 0, 0, 1},
							 {0, 1, 1, 1},
							 {1, 1, 1, 1},
							 {0, 0, 0, 0}};

	rowAndMaximumOnes(vec1);
	return 0;
}