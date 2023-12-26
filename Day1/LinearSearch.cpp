#include<iostream>
using namespace std;
bool search(int arr[], int n ,int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] ==key)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int key;
    cout << "Enter the Key Value: " << endl;
    cin >> key;
    if(search(arr,5,key))
    {
        cout << "Key is present in an array: " << endl;
    }
    else
    {
        cout << "Key is not present in an array: " << endl;
    }
    return 0;
}