#include <bits/stdc++.h>
using namespace std;

// Iterative Approach------ Use three nested loops.

// Outer loops will decide the starting point of a sub-array, call it as startPoint.
// First inner loops will decide the group size (sub-array size). Group size starting from 1 and goes up array size. Let’s call is as grps.
// The most inner loop will actually print the sub-array by iterating the given array from startPoint and print the next grps elements.


// Time Complexity: 0(n^3)
// Space Complexity: 0(1)
void iterative(vector<int> nums)
{
    // Pick starting point
    for (int i = 0; i < nums.size(); i++)
    {
        // Pick ending point
        for (int j = i; j < nums.size(); j++)
        {
            // Print subarray between current starting and ending points
            cout<<"[";
            for (int k = i; k <= j; k++)
            {
                cout<<nums[k]<<" ";
            }
           cout<<"]"<<endl;
        }
    }
}



// Recursive Approach: We use two pointers start and end to maintain the starting and ending point of array:

// Stop if we have reached the end of the array
// Increment the end index if start has become greater than end
// Print the subarray from index start to end and increment the starting index


// Let’s take an example of array {1, 2, 3, 4}. 
// If we observe the subarrays starting from 1 are [ 1 ] [ 1  2 ] [ 1  2  3 ] [ 1  2  3  4 ]. 
// So we fix the starting index to 0 and subarray = [1] and iterate till end and during iteration we will keep appending the elements to the subarray and print it so we will print [ 1 ] [ 1  2 ] [ 1  2  3 ] [ 1  2  3  4 ]. 
// Now move the starting index to 1 and subarray = [2] and repeat the same process during iteration and print  [ 2 ] [ 2  3 ] [ 2  3  4 ]. 
// So basically fix the index and print all the subarrays which starts from the fixed index and make a recursive call with index+1. 

// Time Complexity: O(2^n)
// Auxiliary Space: O(2^n)
void recursive(vector<int> nums, int start, int end)
{
    // Stop if we have reached the end of the array
    if (end == nums.size())
    {
        return;
    }
    // Increment the end point and start from 0
    else if (start > end){
        recursive(nums, 0, end + 1);
    }
    // Print the subarray and increment the starting point
    else
    {
        cout<<"[";
        for (int i = start; i < end; i++)
        {
           cout<<nums[i]<<" ";
        }
        cout<<nums[end]<<"]"<<endl;
        recursive(nums, start + 1, end);
    }
    return;
}





int main()
{
    vector<int> nums{1,2,3,4};
    cout<<"Iterative"<<endl;
    iterative(nums);
    cout<<"Reccursive"<<endl;
    recursive(nums, 0, 0);
    return 0;
}
