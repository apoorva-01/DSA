#include <bits/stdc++.h>
using namespace std;

// 1) Use two index variables i and j, initial values i = 0, j = 0
// 2) If vec1[i] is smaller than vec2[j] then print vec1[i] and increment i.
// 3) If vec1[i] is greater than vec2[j] then print vec2[j] and increment j.
// 4) If both are same then print any of them and increment both i and j.
// 5) Print remaining elements of the larger array.

/* Function prints union of vec1[] and vec2[]
m is the number of elements in vec1[]
n is the number of elements in vec2[] */

// Time Complexity : O(m + n)
// Auxiliary Space: O(1)

void Union(vector<int>vec1,vector<int>vec2)
{
	int i = 0, j = 0;
	while (i < vec1.size() && j < vec2.size())
	{
		if (vec1[i] < vec2[j]){
			cout<< vec1[i]<<" ";
			i++;
		}
		else if (vec2[j] < vec1[i]){
			cout<< vec2[j]<<" ";
			j++;
		}
		else{
			cout<< vec1[i]<<" ";
			i++;
			j++;
		}
	}
	/* Print remaining elements of the larger array */
	while (i < vec1.size()){
		cout<< vec1[i++]<<" ";
	}
	while (j < vec2.size()){
		cout<< vec2[j++]<<" ";
	}
	cout<<endl;
}

// Intersection of two arrays

// Use two index variables first and second, initial values of both to be set to 0.
// If vec1[first] is smaller than vec2[second] then increment first.
// If vec1[first] is greater than vec2[second] then increment second.
// Else print/store any of them and increment both index variables.

// Time Complexity : O(m + n)
// Auxiliary Space: O(1)

void intersection(vector<int>vec1,vector<int>vec2)
{
	int i = 0, j = 0;
	while (i < vec1.size() && j < vec2.size())
	{
		if (vec1[i] < vec2[j])
		{
			i++;
		}
		else if (vec2[j] < vec1[i])
		{
			j++;
		}
		else
		{
			cout<< vec1[i]<<" ";
			i++;
			j++;
		}
	}

	cout<<endl;
}

int main()
{
	vector<int> vec1{1, 2, 4, 5, 6};
	vector<int> vec2{2, 3, 5, 7};
	printf("Union \n");
	Union(vec1,vec2);
	printf("Intersection \n");
	intersection(vec1,vec2);
	
	return 0;
}
