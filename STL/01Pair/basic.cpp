#include <iostream>
#include <utility>
using namespace std;

void display(pair<int, char> p)
{
    cout << p.first << " ";
    cout << p.second << endl;
}

int main()
{
    // defining a pair
    pair<int, char> p1;
    p1.first = 100;
    p1.second = 'G';
    display(p1);

    pair<int, char> p2;
    p2 = {34, 't'};
    display(p2);

    cout << "Contents of p1 = ";
    display(p1);
    cout << "Contents of p2 = ";
    display(p2);
    p1.swap(p2); // PAIR SWAPING
    cout << "After Swap"<<endl;
    cout << "Contents of p1 = ";
    display(p1);
    cout << "Contents of p2 = ";
    display(p2);

    return 0;
}
