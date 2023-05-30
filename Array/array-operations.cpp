#include <iostream>
using namespace std;

void display(int arr[], int n){
    // Traversal
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;  
    // Time Complexity: O(n) 
}
 
int indInsertion(int arr[], int size, int element, int capacity, int index){
    // Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
    // Time Complexity: O(n)  
}
 
void indDeletion(int arr[], int size, int index)
{
    // Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
    // Time Complexity: O(n) 
}
 
int main(){
    // Insertion
    int arr[] = {7, 8, 12, 27, 88};
    int size = sizeof(arr)/sizeof(int), element = 45, index=1;
    cout<<"size "<<size<<endl;
    display(arr, size); 
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);


    // Deletion
    // int arr[] = {7, 8, 12, 27, 88};
    // int size = sizeof(arr)/sizeof(int), element = 45, index = 4;
    // display(arr, size);
    // indDeletion(arr, size, index);
    // size -= 1;
    // display(arr, size);



    return 0;
}
