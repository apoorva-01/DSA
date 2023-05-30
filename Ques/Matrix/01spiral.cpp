#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(n2)
// Space Complexity O(1)
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
	vector<int> res;
	if (matrix.empty() || matrix[0].empty())
	{
		return res;
	}
	int rows = matrix.size();
	int cols = matrix[0].size();
	int top = 0;
	int left = 0;
	int right = cols - 1;
	int bottom = rows - 1;

	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
		{
			res.push_back(matrix[top][i]);
		}
		top++;

		for (int i = top; i <= bottom; i++)
		{
			res.push_back(matrix[i][right]);
		}
		right--;

		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
			{
				res.push_back(matrix[bottom][i]);
			}
			bottom--;
		}
		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
			{
				res.push_back(matrix[i][left]);
			}
			left++;
		}
	}

	return res;
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
	vector<vector<int>> vec1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	cout << "vect1" << endl;
	display(vec1);
	for(auto i:spiralOrder(vec1)){
		cout<<i<<" ";
	}

	return 0;
}