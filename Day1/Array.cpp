// Declaration of Array in C++.
#include<iostream>
using namespace std;
#include <climits>

int GetMax(int a[], int n)
{
    int maxi = INT_MIN;
    // TODO: Find the maximum element in the array.
    for (int  i = 0; i < n; i++)
    {
        // if(a[i] >max)
        // {
        //     max = a[i];
        // }
// ! Using Built-in function to find the maximum element in an array.
        maxi = max(maxi , a[i]);
    }
    
    return maxi;
}
int GetMin(int a[], int n)
{
    int mini = INT_MAX;
    // TODO: Find the minimum element in the array.
    for (int  i = 0; i < n; i++)
    {
        // if(a[i] < min)
        // {
        //     min = a[i];
        //}
// ! Using Built-in function to find the minimum element in an array.

        mini = min(mini , a[i]);
    }
    
    return mini;
}
int main()
{
//? Initialise an array.
    // int a[20] ={1,2,3,4,5};
    // cout << a[1] << endl;
//?   Finding a size of an array.
//     int  a_size = sizeof(a)/sizeof(int);
//     cout << a_size << endl;

// ! Finding the maximum and minimum element in an array.
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int a[100];

    // * Taking input
    cout << "Enter the elements of an array: " << endl;
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The Maximum element in an array is: " << GetMax(a,n) << endl;
    cout << "The Minimum element in an array is: " << GetMin(a,n) << endl;



    return 0;
}