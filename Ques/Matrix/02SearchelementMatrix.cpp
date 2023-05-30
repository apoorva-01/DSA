#include <bits/stdc++.h>
using namespace std;

// Optimized 
// Time Complexity - O(n)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
	int r = matrix.size();
	int i = 0;
	int j = matrix[0].size() - 1;
	while (i < r && j >= 0)
	{
		if (matrix[i][j] == target)
		{
			return true;
		}
		else if (matrix[i][j] > target)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return false;
}

// Row wise Binary Search
//  O(nlogn)
bool binarysearchMatrix(vector<vector<int>> &matrix, int target)
{
	for (auto row : matrix)
	{
		int l = 0;
		int h = row.size() - 1;
		while (l <= h)
		{
			int m = (l + h) / 2;
			if (row[m] == target)
			{
				return true;
			}
			else if (row[m] > target)
			{
				h = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
	}
	return false;
}

// BruteForce----Accepted
//  O(n^2)
bool brute(vector<vector<int>> &matrix, int target)
{
	for (auto vec : matrix)
	{
		for (auto i : vec)
		{
			if (i == target)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	vector<vector<int>> vec1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	cout<<searchMatrix(vec1,7)<<endl;
	cout<<binarysearchMatrix(vec1,7)<<endl;
	cout<<brute(vec1,7)<<endl;

	return 0;
}