// ? STL is a library in C++ that provides a set of common template classes and functions to work with different data structures, vectors, lists, queues, etc.
// ? STL array is a static array that is introduced in C++11 standard. It is a container that encapsulates fixed size arrays.
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int , 5> arr; //* STL method to declare an array
    cout<<"Enter the elemets of the array" << endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i] << " ";
    }
    int size = arr.size();
    cout<<"\nSize of the array is: "<<size;

    //* for accessing the elements of the array in STL
    cout<<"\nElement at index 2 is: "<< arr.at(2);

    cout<<"\nArray is empty or not: "<<arr.empty(); //* returns 0 if not empty and 1 if empty
    cout<<"\nFirst element of the array is: "<<arr.front();
    cout<<"\nLast element of the array is: "<<arr.back();


    return 0;

}