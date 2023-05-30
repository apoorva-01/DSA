#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/merge-intervals


void display(vector<vector<int>> vect)
{
    cout << "[";
    for (auto val:vect)
    {
        cout << "{"<<val[0] << ","<<val[1]<<"}";
    }
    cout <<"]"<< endl;
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // https://youtu.be/2JzRBPFYbKE
        vector<vector<int>>merged;
        if(intervals.size()==0){
            return merged;
        }
        sort(intervals.begin(),intervals.end());
        cout<<"intervals after sorting"<<endl;
        display(intervals);

        vector<int> tempInterval=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tempInterval[1]){
                tempInterval[1]=max(it[1],tempInterval[1]);
            }
            else{
                merged.push_back(tempInterval);
                tempInterval=it;
            }
        }
        merged.push_back(tempInterval);
        return merged;
    }



int main()
{
	vector<vector<int>> vec={{2,6},{1,3},{8,10},{15,18}};
	vector<vector<int>>res=merge(vec);
	display(res);
	return 0;
}
