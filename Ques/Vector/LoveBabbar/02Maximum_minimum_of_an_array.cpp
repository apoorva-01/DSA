#include <bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> v{1000, 11, 445, 1, 330, 3000};

	cout<<*min_element(v.begin(), v.end()) <<endl; 
	cout<<*max_element(v.begin(), v.end()) <<endl; 
	// Time Complexity O(n)
    // Space Complexity O(1)

	int maxE=INT_MIN;
	int minE=INT_MAX;
	for(auto ele:v){
		if(ele>maxE){
			maxE=ele;
		}
		if(ele<minE){
			minE=ele;
		}
	}
	// Time Complexity O(n)
    // Space Complexity O(1)
	cout<<minE<<endl; 
	cout<<maxE<<endl; 
}
