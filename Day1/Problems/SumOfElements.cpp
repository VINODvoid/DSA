#include<iostream>
using namespace std;
void Sum_Of_Ele(int arr[] , int n)
{
    int sum =0;
    for (int i=0; i<n ; i++)
    {
        sum +=arr[i];
    }
    cout << "Sum of all the elements in an array is: " << sum << endl;
}
int main()
{
    int arr[20] ,n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    cout << "Enter the elements of an array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Sum_Of_Ele(arr,n);

    return 0;
}