// ? Priority Queue is a container adaptor provided by the C++ STL which provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max heap
    priority_queue <int> max_pq; //* STL method to declare a priority queue of Maximum heap

    // Min heap
    priority_queue <int, vector<int>, greater<int>> min_pq; //* STL method to declare a priority queue of Minimum heap

    max_pq.push(1);
    max_pq.push(4);
    max_pq.push(3);
    max_pq.push(7);

    min_pq.push(12);
    min_pq.push(99);
    min_pq.push(75);
    min_pq.push(49);

    cout<<"Size of max heap: "<<max_pq.size()<<endl; // 4
    int size = max_pq.size();
    cout<<"Max heap: ";
    for(int i=0; i<size; i++)
    {
        cout<<max_pq.top()<<" ";
        max_pq.pop();
    }
    cout<<endl;

    cout<<"Min heap: ";
    while(!min_pq.empty())
    {
        cout<<min_pq.top()<<" ";
        min_pq.pop();
    }
    cout<<endl;
    cout<<"Empty: "<<min_pq.empty()<<endl; // 1
    return 0;
}