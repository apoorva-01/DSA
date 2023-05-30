#include <bits/stdc++.h>
using namespace std;

// Time complexity O(m * n)
// Space Complexity: O(N)
void printCommonElements(vector<vector<int>> mat)
{
	if (mat.empty())
	{
		return;
	}
	int n = mat.size();
	int m = mat[0].size();
	unordered_map<int, int> mp;
	for (auto i : mat[0])
	{
		mp[i]++;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//  If element is present in the map and is not duplicated in current row.
			if (mp[mat[i][j]] == i)
			{
				// we increment count of the element in map by 1
				mp[(mat[i][j])] = i + 1;

				// If this is last row
				if (i == n - 1 && mp[(mat[i][j])] == n)
				{
					cout << mat[i][j] << " ";
				}
			}
		}
	}
}

// Time complexity O(m * n)
// Space Complexity: O(N)
vector<int> findCommonElements(vector<vector<int>> &m)
{
	vector<int> result;
	int rows = m.size();
	int cols = m[0].size();

	unordered_set<int> commonElements(m[0].begin(), m[0].end());

	for (int i = 1; i < rows; i++)
	{
		unordered_set<int> rowElements(m[i].begin(), m[i].end());
		unordered_set<int> common;

		for (auto &element : rowElements)
		{
			if (commonElements.find(element) != commonElements.end())
			{
				common.insert(element);
			}
		}

		commonElements = common;
	}

	for (auto &element : commonElements)
	{
		result.push_back(element);
	}

	return result;
}

int main()
{
	vector<vector<int>> m = {
		{1, 2, 1, 4, 8},
		{3, 7, 8, 5, 1},
		{8, 7, 7, 3, 1},
		{8, 1, 2, 7, 9},
	};
	cout << "Using Set" << endl;
	for (auto i : findCommonElements(m))
	{
		cout << i << " ";
	}
	cout << "Using Map" << endl;
	printCommonElements(m);

	return 0;
}
