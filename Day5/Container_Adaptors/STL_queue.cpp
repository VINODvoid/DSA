// ? What is queue in C++ STL?
// A queue is a container that allows insertion and deletion of elements in a particular order. It is a FIFO (First In First Out) data structure. The elements are inserted at the back and deleted from the front.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <string> q;
    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");

    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"First element: "<<q.front()<<endl;
    q.pop(); // Removes the first element
    
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;
    return 0;
}