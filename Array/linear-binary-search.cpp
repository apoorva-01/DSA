#include <bits/stdc++.h>
using namespace std;
 
int linearSearch(vector<int> &arr, int element){
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    // Time Complexity: O(n) 
}
 
int binarySearch(vector<int> &arr,int element){
    int n=arr.size();
    int low, mid, high;
    low = 0;
    high = n-1;
    // Keep searching until low <= high
    // Stop if low becomes greater then high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    // Time Complexity: O(log(n)) 
    
}
 
int main(){
 
    vector<int> arr{1,3,5,56,64,73,123,225,444};
    int element = 73;
    int searchIndex = binarySearch(arr, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
