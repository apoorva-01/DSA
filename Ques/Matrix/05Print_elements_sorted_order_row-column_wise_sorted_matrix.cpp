#include <bits/stdc++.h>
using namespace std;
// Optimized
// merging k sorted arrays. Use Min Heap of size N which stores elements of first column. They do extract minimum. In extract minimum, replace the minimum element with the next element of the row from which the element is extracted.
void sortedMatrix( vector<vector<int> > Mat)
{
    // DO
}

// Naive:  keep all elements of the matrix in a one-dimensional array and then sort the array and print all values in it.
// Time Complexity: O(N2log(N2))
// Auxiliary Space: O(N2)
void sortedMatrix( vector<vector<int> > Mat)
{
	vector<int> temp;

	for (int i = 0; i < Mat.size(); i++) {
		for (int j = 0; j < Mat[0].size(); j++) {
			temp.push_back(Mat[i][j]);
		}
	}
	sort(temp.begin(), temp.end());
	for (int i = 0; i < temp.size(); i++) {
		cout << temp[i] << " ";
	}
}

int main()
{
	vector<vector<int> > Mat = {
		{ 10, 20, 30, 40 },
		{ 15, 25, 35, 45 },
		{ 27, 29, 37, 48 },
		{ 32, 33, 39, 50 },
	};
	sortedMatrix(Mat);

	return 0;
}

