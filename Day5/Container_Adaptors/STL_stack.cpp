#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> s;
    s.push("A");
    s.push("B");
    s.push("C");
    s.push("D");

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Top element: "<<s.top()<<endl;
    s.pop(); // Removes the top element
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Empty or Not Empty --> "<<s.empty()<<endl;
    
    return 0;
}