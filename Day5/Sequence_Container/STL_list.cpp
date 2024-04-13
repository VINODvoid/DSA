#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> lis ;
    lis.push_back(1); //* push_back() is used to add elements to the end of the list
    lis.push_front(2); //* push_front() is used to add elements to the front of the list

    for(int i:lis)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    lis.erase(lis.begin()); //* erase() is used to remove elements from the list
    cout<<"After erasing the first element: "<<endl;
    for(int i:lis)
    {
        cout<<i<<" ";
    }
    cout<<"\nSize of the list: "<<lis.size()<<endl; //* size() is used to get the size of the list

    list <int> lis1(lis); //* Copying the list lis to lis1
    list <int> lis2(5,10); //* Creating a list lis2 with 5 elements of value 10
    for(int i:lis1)
    {
        cout<<i<<" ";
    }
    for(int i:lis2)
    {
        cout<<i<<" ";
    }
    return 0;
}
