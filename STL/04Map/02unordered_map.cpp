#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;

void display(unordered_map<int, int> mp)
{
    for(auto &pr:mp){
        cout << '\t' << pr.first << '\t' << pr.second<< '\n';
    }
     cout<<endl;

    // for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    // {
    //     cout << '\t' << itr->first << '\t' << itr->second<< '\n';
    // }
    // cout<<endl;
}

int main()
{

    unordered_map<int, int> mp1;
    mp1[1] = 50; // O(1)
    mp1[3] = 60;
    mp1[3] = 2; // It will replace the mp1[3] as keys are unique
    mp1.insert(pair<int, int>(2, 30)); // another way of inserting a value in a unordered_map
    mp1.insert(pair<int, int>(4, 20));
    mp1[7] = 10;
    cout << "mp1"<<endl;
    display(mp1);
    cout << "size of mp1 is "<<mp1.size()<<endl;

    unordered_map<int, int> mp2(mp1.begin(), mp1.end());
    cout << "mp2"<<endl;
    display(mp2);

    auto it= mp1.find(2);// Find keys not value ------O(1)
    if(it == mp1.end())
        cout << "Key-value pair not present in mp1" <<endl;
    else
        cout << "Key-value pair present : " << it->first << "->" << it->second<<endl ;


    // remove all elements up to element with key=3 in mp2
    cout << "remove all elements up to element with key=3 in mp2"<<endl;
    mp2.erase(mp2.begin(), mp2.find(3));
    display(mp2);

    // remove all elements with key = 4
    cout << "\nmp2.erase(4) : "<<endl;
    mp2.erase(4); 
    display(mp2);

    cout << "\nmp2.clear() : "<<endl;
    mp2.clear(); 
    display(mp2);



    // // lower bound and upper bound for unordered_map mp1 key = 5
    // cout << "mp1.lower_bound(5) : "
    //      << "\tKEY = ";
    // cout << mp1.lower_bound(5)->first << '\t';
    // cout << "\tELEMENT = " << mp1.lower_bound(5)->second
    //      << endl;
    // cout << "mp1.upper_bound(5) : "
    //      << "\tKEY = ";
    // cout << mp1.upper_bound(5)->first << '\t';
    // cout << "\tELEMENT = " << mp1.upper_bound(5)->second
    //      << endl;


    // Multiple Entries
    unordered_map<char,int> mpR{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    for(auto &pr:mpR){
        cout << '\t' << pr.first << '\t' << pr.second<< '\n';
    }
     cout<<endl;

    return 0;
}
