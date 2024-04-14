#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void ReverseArray(int n , vector<int> &vec ,int m)
{
    int start = m+1;
    int end = n-1;
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main()
{
    vector <int> vec;
    int n;
    int m;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout <<"Enter the Index from where you need to reverse: ";
    cin >> m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<< endl;
    cout << "Before reversing: ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // reverse(vec.begin(),vec.end()); //! without using reverse function
    ReverseArray(n,vec,m);

    cout << "After reversing: ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    return 0;
}
