#include <bits/stdc++.h>
using namespace std;


void rotate(vector<int> &nums,int k)
{
    int n=nums.size();
    if(n==0){
        return;
    }
    k=k%n;

    
    if(k==0){
        return;
    }

    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    return;
}

int main()
{
	vector<int> nums{1, 2, 3, 4, 5};
	rotate(nums,3);

	printf("\nRotated array is\n");

	for (auto i : nums)
	{
		cout << i << " ";
	}
	return 0;
}




// By taking the modulus (%) of k with n, we ensure that k is within the range of valid indices. This operation effectively wraps around the rotation, allowing us to perform the rotation in a cyclic manner without exceeding the vector's size.

// For example, if the vector has a size of 5 (n = 5) and k is 7, then k % n would result in 2. This means that the vector will be cyclically rotated by 2 positions, which is equivalent to rotating it by 7 positions modulo 5.

// Using k = k % n helps normalize the rotation amount and ensures that the rotation stays within the bounds of the vector, preventing any out-of-range errors and achieving the desired cyclic rotation behavior.