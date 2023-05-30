#include <bits/stdc++.h>
using namespace std;

// 1) Initialize start and end indexes as start = 0, end = n-1
// 2) In a loop, swap arr[start] with arr[end] and change start and end as follows :
// start = start +1, end = end – 1

void display(vector<int> vect)
{
	for(int ele:vect){
		 cout << ele << " ";
    }
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     cout << vect[i] << " ";
    // }
    cout << endl;
}

int main()
{
	vector<int> s{1, 2, 3, 4, 5, 6};
	display(s);
	cout<<"Reversed array is \n";
	
	// reverse(s.begin(),s.end());
	// Time Complexity O(n)
    // Space Complexity O(1)


    //or

    int f=0;
    int r=s.size()-1;
    while(f<r){
        s[f]=s[f]^s[r];  //Time and Space Complexity analysis of XOR per Swap Approach is O(1)
        s[r]=s[f]^s[r];
        s[f]=s[f]^s[r];
        f++;
        r--;
    }
	display(s);

    // Time Complexity O(n)
    // Space Complexity O(1)


   
	return 0;
}



		// // Using XOR
		// arr[start]=arr[start]^arr[end];
		// arr[end]=arr[start]^arr[end];
		// arr[start]=arr[start]^arr[end];

		// // Using Temp Variable
		// int temp = arr[start];
		// arr[start] = arr[end];
		// arr[end] = temp;

		// // Using +/-
		// arr[start] = arr[start]+arr[end];
		// arr[end] = arr[start]-arr[end];
		// arr[start] = arr[start]-arr[end];
		
		// // Using */
		// arr[start] = arr[start]*arr[end];
		// arr[end] = arr[start]/arr[end];
		// arr[start] = arr[start]/arr[end];


		
		// start ++;
		// end --;
