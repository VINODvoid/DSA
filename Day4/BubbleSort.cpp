#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}
int main()
{
    int arr[10],n;
    cout<<"Enter the size of the array: ";
    cin>> n;
    cout<<"Enter "<<n<<" elements in the array\n";
    for(int i=0 ;i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unsorted Array: ";
    for(int i=0 ;i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    BubbleSort(arr,n);
    cout<<"\nSorted Array using BubbleSort: ";
    for(int i=0 ;i<n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}