#include <bits/stdc++.h>
using namespace std;

void display(vector<int>&A){
   for(auto i:A){
    cout<<i<<" ";
   }
   cout<<endl;
}

// Time Complexity O(n^2)
void selectionSort(vector<int> &A){
    int n=A.size();
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[min_idx]){
                min_idx = j;
            }
        }
        // Swap A[i] and A[min_idx]
        swap(A[i],A[min_idx]);
    }
}

int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13


    vector<int> A{3, 5, 2, 13, 12};
    display(A);
    selectionSort(A);
    display(A);

    return 0;
}
