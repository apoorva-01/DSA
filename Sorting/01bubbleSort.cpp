#include <bits/stdc++.h>
using namespace std;

void display(vector<int>&A){
   for(auto i:A){
    cout<<i<<" ";
   }
   cout<<endl;
}

// Time Complexity O(n^2)
void bubbleSort(vector<int>&A){
    int n=A.size();
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }  
    } 
}
 
void bubbleSortAdaptive(vector<int>&A){
    int n=A.size();
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                isSorted = 0;
            }
        } 
        if(isSorted){
        // If no two elements were swapped in the inner loop(then isSorted is 1), the array is already sorted
            return;
        }
    } 
}
 
int main(){
    vector<int> A{1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n = 11;
    display(A); // Printing the array before sorting
    bubbleSort(A); // Function to sort the array
    display(A); // Printing the array before sorting
    return 0;
}
