//? Algorithm in C++ Standard Template Library (STL)

#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

int main()
{
    vector <int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // ! using binary_search
    int present = binary_search(vec.begin(),vec.end(),30);
    cout<< "30 is present in vector or not: ";
    cout<<present<<endl;

    // ! using lower_bound
    cout << "Lower bound of 30 is: ";
    cout << lower_bound(vec.begin(),vec.end(),30) - vec.begin() << endl;

    // ! using upper_bound
    cout << "Upper bound of 30 is: ";
    cout << upper_bound(vec.begin(),vec.end(),30) - vec.begin() << endl;

    //! max 
    int a = 10;
    int b = 20;
    int c = 30;
    cout << "Max of a,b,c: ";
    cout << max(a,max(b,c)) << endl;

    //! min
    cout << "Min of a,b,c: ";   
    cout << min(a,min(b,c)) << endl;

    //! swap
    cout << "Before swap: " << a << " " << b << endl;
    swap(a,b);
    cout << "After swap: " << a << " " << b << endl;
    

    //! reverse
    string s = "abc";
    cout << "Before reverse: " << s << endl;
    reverse(s.begin(),s.end());
    cout << "After reverse: " << s << endl;

    //! rotate
    rotate(vec.begin(),vec.begin()+3,vec.end());
    for(int i:vec)
    {
        cout<<i<<" ";
    }

    //! sort
    sort(vec.begin(),vec.end());
    cout << "\nAfter sorting: ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
