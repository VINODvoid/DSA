// ? Vector is a sequence container that encapsulates dynamic size arrays.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; //* STL method to declare a vector
    
    cout<<"Capacity --> "<<vec.capacity()<<endl;  //* capacity() is used to return the size of the storage space currently allocated for the vector
    vec.push_back(1);   //* push_back() is used to add elements to the end of the vector
    cout<<"Capacity --> "<<vec.capacity()<<endl;
    vec.push_back(2);
    cout<<"Capacity --> "<<vec.capacity()<<endl;
    vec.push_back(3);
    cout<<"Capacity --> "<<vec.capacity()<<endl;
    vec.push_back(4);
    cout<<"Capacity --> "<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<"Capacity --> "<<vec.capacity()<<endl;


    cout<<"Size --> "<<vec.size()<<endl; //* size() is used to return the number of elements in the vector

    cout<<"Element at index 2 is: "<<vec.at(2)<<endl; //* at() is used to access the element at a particular index

    cout<<"Elements are ";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "; //* [] is used to access the elements of the vector
    }

    cout<<"\nFirst element of the vector is: "<<vec.front()<<endl; 
    cout<<"Last element of the vector is: "<<vec.back()<<endl;

    cout << "Before pop_back() size of vector is: " << vec.size() << endl;
    vec.pop_back(); //* pop_back() is used to remove the last element of the vector
    cout << "After pop_back() size of vector is: " << vec.size() << endl;

    cout<<"Before clear() size of vector is: "<<vec.size()<<endl;
    vec.clear(); //* clear() is used to remove all the elements of the vector
    cout<<"After clear() size of vector is: "<<vec.size()<<endl;



    vector <int> ar(5,78);
    cout<<"Elements are  in ar";
    for(int i:ar)
    {
        cout<<i<<" ";
    }

    vector <int> ar1(ar);
    cout<<"\nElements are in ar1 ";
    for(int i:ar1)
    {
        cout<<i<<" ";
    }
    return 0;
}