#include<iostream>
using namespace std;
int binarySearch(int n);
int morePrecision(int n, int precision, int temps);

int main()
{
    int n;
    cout<<"Welcome to C++ Programming" << endl;
    cout << "Enter the number: " << endl;
    cin >> n;
    // cout << "Square root of " << n << " is : "; // Fix: Replaced incorrect printf-style syntax with correct syntax
    // cout << binarySearch(n);
    int temps = binarySearch(n);
    cout << "Answer: " << morePrecision(n,3,temps) << endl;
    return 0;
}
int binarySearch(int n)
{
    int s =0, e = n;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        /* code */
        int square = mid*mid;
        if(square == n)
        {
            return mid;
        }
        if (square < n)
        {
            /* code */
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
        
    }
    return ans;
    
}
int morePrecision(int n, int precision, int temps)
{
    int factor = 1;
    int ans = temps;
    for (int i = 0; i < precision; i++)
    {
        /* code */
        factor /= 10;
        for (int j = ans;  j*j<n; j+factor)
        {
            /* code */
            ans = j;
        }
        
    }
    return ans;


}