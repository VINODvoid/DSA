// ? Map in C++ is an associative container that store elements in key-value pair.
// ? Each element has a key value and a mapped value. No two mapped values can have same key values.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, string> m;

    m[1] = "abc";
    m[2] = "def";
    m[3] = "ghi";
    m[4] = "jkl";
    m[5] = "mno";

    m.insert({6,"pqr"}); // Inserting using insert function
    cout << "Size of map: " << m.size() << endl; // 5
    cout<<"Before Erase: \n";
    cout << "Map: \n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " ";
        cout << endl;
    }
    cout << endl;
    m.erase(2); // Erasing element with key 2
    cout<<"After Erase: \n";
    cout << "Map: \n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " ";
        cout << endl;
    }
    cout<<"Count of 5 : "<<m.count(5)<<endl; // 1

    auto itr = m.find(3); // Finding element with key 3
    for(auto i = itr; i != m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    
    return 0;
}