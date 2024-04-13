//? In C++ STL, deque is an indexed sequence container that allows fast insertion and deletion at both the beginning and the end.
//? Deque stands for double-ended queue. It is similar to a vector, but it allows insertion and deletion at both ends.

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> deq; //* STL method to declare a deque
    deq.push_front(0); //* push_front() is used to add elements to the front of the deque
    deq.push_back(1); //* push_back() is used to add elements to the end of the deque
    deq.push_front(-1);
    deq.push_back(2);



    cout<<"Elements are: ";
    for(int i:deq)
    {
        cout<<i<<" ";
    }
    deq.pop_front(); //* pop_front() is used to remove the first element of the deque
    deq.pop_back(); //* pop_back() is used to remove the last element of the deque

    cout<<"\nElements are: ";
    for(int i:deq)
    {
        cout<<i<<" ";
    }
    cout<<"\nSize of deque is: "<<deq.size()<<endl; //* size() is used to get the size of the deque
    cout <<"Element at index 0 is " << deq.at(0) << endl; //* at() is used to access the element at a particular index

    cout<<"Front element is: "<<deq.front()<<endl; //* front() is used to get the first element of the deque
    cout<<"Back element is: "<<deq.back()<<endl; //* back() is used to get the last element of the deque


    cout<<"Before erasing  "<<deq.size()<<endl;
    deq.erase(deq.begin(),deq.begin()+1); //* erase() is used to remove elements from the deque
    cout<<"After erasing  "<<deq.size()<<endl;

    for(int i:deq)
    {
        cout<<i<<" ";
    }


    return 0;

}