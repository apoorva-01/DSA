#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> vect)
{
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vect1{1,2,3,4,5,6,7};
    cout << "vect1"<<endl;
    display(vect1);

    vector<int>::iterator it = vect1.begin();
    // auto it = vect1.begin();
    cout<<"it value"<<*it<<endl;
    cout<<"it+1 value"<<*(it+1)<<endl;//becoz vector is cequential
    
    // advance() 
    advance(it, 2);
    cout<<"it "<<*it<<endl;

    // next() & prev()    
    auto prev_it=prev(it, 3);
    cout<<"prev_it "<<*prev_it<<endl;
    auto next_it=next(it, 2);
    cout<<"next_it "<<*next_it<<endl;

    inserter(vect1, next(vect1.begin()));

    cout << "Iterating using begin & end: ";
    for (auto i = vect1.begin(); i != vect1.end(); ++i){
        cout << *i << " ";
    }

    return 0;
}
