// ? Set in C++ is an associative container that contains a sorted set of unique objects of type Key. It is usually implemented using Red-Black Tree.

#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;


    s.insert(2);
    s.insert(9);
    s.insert(7);
    s.insert(1); // Duplicate element //* Ignored
    s.insert(7);

    cout << "Size of set: " << s.size() << endl; // 4
    cout << "Set: ";
    for (auto i : s)
    {
        cout << i << " "; 
    }
    cout << endl;
    
    set <int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Count of -7: "<<s.count(-7)<<endl; // 1

    set <int> :: iterator itr = s.find(7);
    for(auto i = itr; i != s.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}