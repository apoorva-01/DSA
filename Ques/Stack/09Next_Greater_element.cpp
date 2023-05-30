#include <bits/stdc++.h>
using namespace std;


void display(vector<int> vect)
{

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}


vector<int> usingStack(vector<int>&nums)
{
    vector<int>res;
    stack<int> s;
    s.push(nums[0]); /* push the first element to stack */
 
    // iterate for rest of the elements
    for (int i = 1; i < nums.size(); i++) {
        if (s.empty()) {
            s.push(nums[i]);
            continue;
        }
        /* if stack is not empty, then
           pop an element from stack.
           If the popped element is smaller
           than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */
        while (s.empty() == false && s.top() < nums[i]) {
            res.push_back(nums[i]);
            s.pop();
        }

        /* push next to stack so that we can find
        next greater for it */
        s.push(nums[i]);
    }

    /* After iterating over the loop, the remaining
    elements in stack do not have the next greater
    element, so print -1 for them */
    while (s.empty() == false) {
        res.push_back(-1);
        s.pop();
    }
    return res;
}
vector<int> brute(vector<int>&nums)
{
    vector<int>res;
    for (int i = 0; i < nums.size(); i++) {
    
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] < nums[j]) {
               res.push_back(nums[j]);
                break;
            }
            else{
                res.push_back(-1);
            }
        }
    }
    res.push_back(-1);
    return res;
}

int main()
{
	vector<int> s{1,2,1};
	vector<int> res1=brute(s);
	display(res1);
	vector<int> res2=usingStack(s);
	display(res2);

   
	return 0;
}
