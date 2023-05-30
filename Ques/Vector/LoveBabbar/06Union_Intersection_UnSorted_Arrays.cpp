#include <bits/stdc++.h>
using namespace std;

// Sort arr1[] and arr2[]. This step takes O(mLogm + nLogn) time.
// Use O(m + n) algorithms(discussed in prev question) to find the union and intersection of two sorted arrays.

void displaySet(unordered_set<int> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

// Time Complexity O(n)
// Space Complexity O(n)
void Union(vector<int> vec1, vector<int> vec2)
{
    // using Set
    unordered_set<int> s(vec1.begin(), vec1.end());
    for (auto i : vec2)
    {
        s.insert(i);
    }
    displaySet(s);
}

// Intersection of two arrays

// Naive: Initialize intersection I as empty.Do the following for every element x of the first array
// If x is present in the second array, then copy x to I.
// Return I.

void computeIntersection(vector<int>& vector1, vector<int>& vector2) {
    unordered_set<int> set1(vector1.begin(), vector1.end());

    for (int element : vector2) {
        if (set1.count(element) > 0) {
            cout<<element<<" ";
        }
    }
    return;
}

// Time Complexity O(n)
// Space Complexity O(n)
void intersection(vector<int> vec1, vector<int> vec2)
{
    // Hashing
    unordered_map<int, bool> uniq;

    for (int i = 0; i < vec1.size(); i++)
    {
        if (uniq.count(vec1[i]) == 0){
            uniq[vec1[i]] = 1;
        }
            
    }

    for (int j = 0; j < vec2.size(); j++)
    {
        if (uniq.count(vec2[j]) == 1 && uniq[vec2[j]] == 1)
        {
            cout<<vec2[j]<<" ";
            uniq[vec2[j]] = 0;
        }
    }
    return;
}



int main()
{
    vector<int> vec1{8, 1, 0, 4, 6};
    vector<int> vec2{9, 6, 3, 1, 7};
    printf("Union \n");
    Union(vec1, vec2);
    printf("Intersection \n");
    intersection(vec1, vec2);
    printf("Intersection \n");
    computeIntersection(vec1, vec2);

    return 0;
}
