#include <bits/stdc++.h>
using namespace std;

// Merge sort.

// Create an array arr3[] of size n1 + n2.
// Simultaneously traverse arr1[] and arr2[].
// Pick smaller of current elements in arr1[] and arr2[], copy this smaller element to next position in arr3[] and move ahead in arr3[] and the array whose element is picked.
// If there are remaining elements in arr1[] or arr2[], copy them also in arr3[].

void mergeArrays(vector<int> vec1,vector<int> vec2,vector<int> &vec3)
{
	int i=0;
	int j=0;
	int k=0;
	while(i<=vec1.size() || j<=vec2.size() ){
		if(vec1[i]<vec2[j]){
			vec3[k]=vec1[i];
			i++;
			k++;
		}
		else if(vec1[i]>vec2[j]){
			vec3[k]=vec2[j];
			k++;
			j++;
		}
		else{
			vec3[k]=vec1[i];
			k++;
			vec3[k]=vec2[j];
			k++;
			i++;
			j++;
		}
	}
	while(i<=vec1.size()){
		vec3[k]=vec1[i];
		i++;
		k++;
	}
	while(j<=vec2.size()){
		vec3[k]=vec2[j];
		k++;
		j++;
	}
	
}

int main()
{
	vector<int> vec1{1,3,4,6};
	vector<int> vec2{2,6,7,8};
	
	vector<int> vec3(vec1.size()+vec2.size());
	cout<<"vec3"<<endl;
	mergeArrays(vec1,vec2,vec3);
	for(auto i:vec3){
		cout<<i<<" ";
	}


	vector<int> vec4(vec1.size() + vec2.size());
	cout<<"\n vec4"<<endl;
    merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec4.begin());
	for(auto i:vec4){
		cout<<i<<" ";
	}
	
	return 0;
}
